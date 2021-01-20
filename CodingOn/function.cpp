#include <iostream>

int x, y;
int z;

int plus(int x, int y) {
	z = x + y;
	return z;
}

int minus(int x, int y) {
	if (x > y) {
		z = x - y;
	}
	else {
		z = y - x;
	}
	return z;
}

int multiple(int x, int y) {
	z = x * y;
	return z;
}

int divide(int x, int y) {
	z = x / y;
	return z;
}

int main() {
	std::cout<< "첫 번째 수는? ";
	std::cin >> x;
	std::cout << "두 번째 수는? ";
	std::cin >> y;
	std::cout<< std::endl;
	std::cout << plus(x,y) << std::endl;
	std::cout << minus(x,y) << std::endl;
	std::cout << multiple(x,y) << std::endl;
	std::cout << divide(x,y) << std::endl;
}