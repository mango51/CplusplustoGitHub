#include <iostream>
#include <ctime>
using namespace std;

int main(void) {
	srand((unsigned int)time(NULL));
	int count = 1;
	while (true) {
		int i;
		int num = rand();
		int randomNumber = num % 3 + 1;
		int j;
		cout << "������ �Է��ϼ��� : ";
		cin >> j;
		if ((j <= 3) & (j >= 1)) {
			cout << "����ڰ� �θ� ���� : " << endl;
			for (i = 0; i < j; i++) {
				if (count < 31) {
					cout << count << endl;
					count++;
				}
			if (count == 31) {
					cout << count << endl;
					cout << "���� ����! ��ǻ�� ��!" << endl;
					break;
					break;
			}
			}
			cout << "��ǻ�Ͱ� �θ� ���� : " << endl;
			for (i = 0; i < randomNumber; i++) {
				if (count < 31) {
					cout << count << endl;
					count++;
				}
			if (count == 31) {
					cout << count << endl;
					cout << "���� ����! ����� ��!" << endl;
					break;
					break;
			}
			}
		}
		else {
			cout << "�߸� �Է��ϼ̽��ϴ�." << endl;
		}
		if (count == 31) {
			break;
		}
	}
}