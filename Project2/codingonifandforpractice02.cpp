#include <iostream>

int main() {
	int x;
	std::cout << "���ڸ� �Է��ϼ���. ";
	std::cin >> x;
	int i;
	int y;
	for (i = 1; i <= x; i++) {
		for (y = 1; y <= i; y++) {
			std::cout << i;
		}
	}
}