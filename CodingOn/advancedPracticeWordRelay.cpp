#include <iostream>
#include <ctime>
using namespace std;

int main(void) {
	clock_t startTime = clock();
	//���� startTime���� ���� �ð� �Էµ�

	for (int i = 0; i < 5000; i++) {
		cout << i << endl;
	}

	clock_t endTime = clock();
	//���� endTime�� �� �ڵ尡 ����� ���� �ð� �Էµ�

	cout << "�ɸ� �ð� : " << (endTime - startTime) / CLOCKS_PER_SEC << endl;
	// �� ������ ���Ե� �ð��� ���̸� ���� �ɸ� �ð� ���� �� ����
}