#include <iostream>
#include <ctime>
using namespace std;

int main(void) {
	clock_t startTime = clock();
	//���� startTime���� ���� �ð� �Էµ�

	string word;
	string last;
	string first;
	int count = 0;

	cout << "�ܾ� �Է� : ";
	cin >> word;
	cout << endl;

	while (true) {
		clock_t endTime = clock();

		int n = word.size();
		last = word.substr(n - 1, n)[0];

		count++;
		if ((endTime - startTime) / CLOCKS_PER_SEC > 3) {
			//3�ʰ� ������ ���α׷� ������
			cout << "�Է��� �ܾ� �� : " << count << endl;
			break;
		}

		cout << "���� �ܾ�� " << last << "�� ���۵�" << endl;
		cout << "�ܾ� �Է� : ";
		cin >> word;
		cout << endl;

		first = word.substr(0, 1)[0];
		if (last != first) {
			cout << "�߸� �Է��ϼ̽��ϴ�." << endl;
			break;
		}
	}
}