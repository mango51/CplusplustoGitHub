#include <iostream>

int main() {
	int x;
	int i;
	std::cout << "숫자를 입력하세요. ";
	std::cin >> x;
	if (x % 2 == 0) {
		if (x == 0) {
			std::cout << "숫자 0을 입력했습니다.";
		}
		else
		{
			for (i = 1; i <= 4; i++) {
				std::cout << x;
			}
		}
	}
	else if(x%2==1) {
		for (i = 1; i <= 3; i++) {
			std::cout << x;
		}
	}
	else if (x < 0) {
		std::cout << "잘못 입력했습니다.";
	}
}