#include <iostream>

int main() {
	int x,y;
	while (1) {
		std::cout << "ù ��° �ڿ��� : ";
		std::cin >> x;
		std::cout << "�� ��° �ڿ��� : ";
		std::cin >> y;
		if ((x > 0) & (y > 0)) {
			break;
		}
	}
	int** arr = new int* [x];
	int i,j;

	for (i = 0; i < x; i++) {
		arr[i] = new int[x];
	}
	int k = 1;
	for (i = 0; i < x; i++) {
		for (j = 0; j < y; j++) {
			arr[i][j] = k;
			std::cout << arr[i][j];
			k++;
		}
		std::cout << std::endl;
	}
	return 0;
}