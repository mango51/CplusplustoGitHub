#include <iostream>
#include <string>

int main() {
	int x;
	for (x = 1; x < 101; x = x + 1) {
		std::cout << "ㅋㅋㅋ";
		std::cout << " ";
	}
	std::cout << " \n";
	int i;
	for (i = 1985; i < 2021; i = i + 1) {
		std::cout << i;
		std::cout << " ";
	}
	std::cout << "\n";
	int a;
	int b;
	std::cout << "반복할 횟수를 입력하세요. ";
	std::cin >> a;
	for (b = 1; b < a + 1; b = b + 1) {
		std::cout << "안녕\n";
	}

	std::cout << "\n";
	int c;
	int d;
	std::cout << "또 한 번 반복할 횟수를 입력하세요. ";
	std::cin >> c;
	for (d = 1; d < c + 1; d = d + 1) {
		std::cout << d;
		std::cout << " ";
	}
}