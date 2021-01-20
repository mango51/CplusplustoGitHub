#include <iostream>
#include <ctime>
using namespace std;

int main(void) {
	srand((unsigned int)time(NULL));
	int arr[6];
	int i;
	for (i = 0; i < 6; i++) {
		int num = rand();
		int randomNumber = num % 25 + 1;
		arr[i] = randomNumber;
		int j;
		if (i > 0) {
			for (j = 0; j < i; j++) {
				if (arr[i] == arr[j]) {
					i--;
					//i--를 통해 다시 시작하기
					//기존의 i=2일 때 나온 숫자를 지우고 다시 i=2일 때 새로운 숫자 뽑아보기
					//i = 2일 때 만약 arr[2] = arr[0]일 경우, 
					//i--로 for문 처음으로 돌아갈 때, i = 2로 다시 시작함
				}
			}
		}
	}
	cout << "숫자는 1~25까지의 숫자만 입력할 수 있습니다." << endl;
	int arr2[6];
	for (i = 0; i < 6; i++) {
		int typing;
		cout << i+1 << "번째 번호를 입력하세요 : ";
		cin >> typing;
		arr2[i] = typing;
		int j;
		if (i > 0) {
			for (j = 0; j < i; j++) {
				if (arr2[i] == arr2[j]) {
					i--;
					cout << "이미 입력된 숫자입니다." << endl;
				}
			}
		}
		if ((typing < 1) | (typing > 25)) {
			i--;
			cout << "잘못된 숫자입니다. 다시 입력해주세요." << endl;
		}

	}
	cout << "내가 입력한 숫자 : ";
	for (i = 0; i < 6; i++) {
		cout << arr2[i] << " ";
	}
	cout << endl;
	cout << "당첨 번호 : ";
	for (i = 0; i < 6; i++) {
		cout << arr[i] <<" ";
	}
	cout << endl;

	int count = 0;
	int j;
	for (i = 0; i < 6; i++) {
		for (j = 0; j < 6; j++) {
			if (arr[i] == arr2[j]) {
				count++;
			}
		}
	}
	int result;
	if (count == 6) {
		result = 1;
	}
	else if (count == 5) {
		result = 2;
	}
	else if (count == 4) {
		result = 3;
	}
	else if (count == 3) {
		result = 4;
	}
	else if (count == 2) {
		result = 5;
	}
	else if (count == 1) {
		result = 6;
	}
	else {
		result = 7;
	}
	cout << "1등부터 7등까지 결과가 나올 수 있습니다." << endl;
	cout << "결과 : " <<result <<"등입니다!";
}