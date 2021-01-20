#include <iostream>

int main() {
	int x;
	std::cout << "숫자를 입력하세요. ";
	std::cin >> x;
	int i;
	int y;
	for (i = 1; i <= x; i++) {
		for (y = 1; y <= i; y++) {
			std::cout << i;
		}
	}
}