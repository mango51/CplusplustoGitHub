#include <iostream>

int main() {
	int i, j;

	for (i = 1; i <= 11; i++) {
		std::cout << i;
		for (j = 1; j <= i; j++) {
			std::cout << j;
		}
	}
	int k, m;

	for (k = 1; k < 4; k++) {
		std::cout << k;

		std::cout << "������";

		for (m = 1; m <= k; m++) {
			std::cout << "������";
		}
	}
	return 0;
}