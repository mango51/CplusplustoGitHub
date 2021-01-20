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
		cout << "개수를 입력하세요 : ";
		cin >> j;
		if ((j <= 3) & (j >= 1)) {
			cout << "사용자가 부른 숫자 : " << endl;
			for (i = 0; i < j; i++) {
				if (count < 31) {
					cout << count << endl;
					count++;
				}
			if (count == 31) {
					cout << count << endl;
					cout << "게임 종료! 컴퓨터 승!" << endl;
					break;
					break;
			}
			}
			cout << "컴퓨터가 부른 숫자 : " << endl;
			for (i = 0; i < randomNumber; i++) {
				if (count < 31) {
					cout << count << endl;
					count++;
				}
			if (count == 31) {
					cout << count << endl;
					cout << "게임 종료! 사용자 승!" << endl;
					break;
					break;
			}
			}
		}
		else {
			cout << "잘못 입력하셨습니다." << endl;
		}
		if (count == 31) {
			break;
		}
	}
}