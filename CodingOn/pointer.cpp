#include <iostream>

int main() {
	int x,y;
	while (1) {
		std::cout << "첫 번째 자연수 : ";
		std::cin >> x;
		std::cout << "두 번째 자연수 : ";
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