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
					//i--�� ���� �ٽ� �����ϱ�
					//������ i=2�� �� ���� ���ڸ� ����� �ٽ� i=2�� �� ���ο� ���� �̾ƺ���
					//i = 2�� �� ���� arr[2] = arr[0]�� ���, 
					//i--�� for�� ó������ ���ư� ��, i = 2�� �ٽ� ������
				}
			}
		}
	}
	cout << "���ڴ� 1~25������ ���ڸ� �Է��� �� �ֽ��ϴ�." << endl;
	int arr2[6];
	for (i = 0; i < 6; i++) {
		int typing;
		cout << i+1 << "��° ��ȣ�� �Է��ϼ��� : ";
		cin >> typing;
		arr2[i] = typing;
		int j;
		if (i > 0) {
			for (j = 0; j < i; j++) {
				if (arr2[i] == arr2[j]) {
					i--;
					cout << "�̹� �Էµ� �����Դϴ�." << endl;
				}
			}
		}
		if ((typing < 1) | (typing > 25)) {
			i--;
			cout << "�߸��� �����Դϴ�. �ٽ� �Է����ּ���." << endl;
		}

	}
	cout << "���� �Է��� ���� : ";
	for (i = 0; i < 6; i++) {
		cout << arr2[i] << " ";
	}
	cout << endl;
	cout << "��÷ ��ȣ : ";
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
	cout << "1����� 7����� ����� ���� �� �ֽ��ϴ�." << endl;
	cout << "��� : " <<result <<"���Դϴ�!";
}