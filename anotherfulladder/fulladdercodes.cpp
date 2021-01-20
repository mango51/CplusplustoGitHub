#include <iostream>
#include <bitset>
#include <string>
#include <algorithm>
#include <stack>
using namespace std;

stack<char> carry;
string num;

int fulladd(int x, int y, int ci, int& s)
{
    s = (x ^ y ^ ci);
    return (ci & x) | (ci & y) | (x & y); //co를 리턴
}
void bin(char a, char b)
{
    if (a == '0' && b == '0')
    {
        if (carry.top() == '1')
        {
            num.insert(num.begin(), '1');
            carry.pop();
        }
        else
        {
            num.insert(num.begin(), '0');
        }


    }
    else if ((a == '1' && b == '0') || (a == '0' && b == '1'))
    {
        if (carry.top() == '1')
        {
            num.insert(num.begin(), '0');

        }
        else
        {
            num.insert(num.begin(), '1');
        }

    }
    else
    {
        if (carry.top() == '1')
        {
            num.insert(num.begin(), '1');
            carry.pop();
            carry.push('1');
        }
        else
        {
            num.insert(num.begin(), '0');
            carry.push('1');
        }

    }

}


string show(int input) {
    cout << bitset<4>(input) << " ";
    string s1 = bitset<4>(input).to_string();
    return s1;

}

string decTobin(int input) {
    string s1 = bitset<4>(input).to_string();
    return s1;
}

int main()
{
    int x, y, ci, s, co;
    cout << endl << "연산1" << endl;
    cout << " x y ci| s co" << endl;
    for (x = 0; x <= 1; x++)
        for (y = 0; y <= 1; y++)
            for (ci = 0; ci <= 1; ci++) {
                co = fulladd(x, y, ci, s);
                cout << " " << x << " " << y << " " << ci << " | " << s << " " << co << endl;
            }
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string a, b;
    int c, d;
    cout << "연산2" << endl << "10진수를 입력하세요: ";
    cin >> c >> d;
    cout << c << " + " << d << " = ";
    show(c);
    cout << "+ ";//cout << "\n 10진수를 입력하세요: ";
    //cin >> d;
    show(d);
    cout << "= ";
    a = decTobin(c); b = decTobin(d);

    string tmp;
    int cnt = 0;
    // cout << a << " " << b << "\n";
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == '0')
        {
            cnt++;
        }
        else break;
    }
    a.erase(0, cnt);
    cnt = 0;
    for (int i = 0; i < b.size(); i++)
    {
        if (b[i] == '0')
        {
            cnt++;
        }
        else break;
    }

    b.erase(0, cnt);
    // idx 0부터 cnt 만큼의 길이를 지움.
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());

    if (a.size() < b.size())
    {
        a.swap(b);
    } // a가 무조건 길게
    carry.push('0');
    for (int i = 0; i < a.size(); i++)
    {
        if (i < b.size())
        {
            bin(a[i], b[i]);
        }
        else
        {
            if (a[i] == '1')
            {
                if (carry.top() == '1')
                {
                    num.insert(num.begin(), '0');

                }
                else
                {
                    num.insert(num.begin(), '1');
                }

            }
            else
            {
                if (carry.top() == '1')
                {
                    num.insert(num.begin(), '1');
                    carry.pop();
                }
                else
                {
                    num.insert(num.begin(), '0');
                }

            }

        }
    }
    if (!carry.empty())
    {
        if (carry.top() == '1') num.insert(num.begin(), '1');
        carry.pop();
    }
    if (num.empty())
    {
        cout << '0';
    }
    else cout << num;
    return 0;
}