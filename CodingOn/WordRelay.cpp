#include <iostream>
#include <ctime>
using namespace std;

int main(void) {
	clock_t startTime = clock();
	//변수 startTime에는 현재 시간 입력됨

	string word;
	string last;
	string first;
	int count = 0;

	cout << "단어 입력 : ";
	cin >> word;
	cout << endl;

	while (true) {
		clock_t endTime = clock();

		int n = word.size();
		last = word.substr(n - 1, n)[0];

		count++;
		if ((endTime - startTime) / CLOCKS_PER_SEC > 3) {
			//3초가 지나면 프로그램 끝내기
			cout << "입력한 단어 수 : " << count << endl;
			break;
		}

		cout << "다음 단어는 " << last << "로 시작됨" << endl;
		cout << "단어 입력 : ";
		cin >> word;
		cout << endl;

		first = word.substr(0, 1)[0];
		if (last != first) {
			cout << "잘못 입력하셨습니다." << endl;
			break;
		}
	}
}