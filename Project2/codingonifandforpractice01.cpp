#include <iostream>

int main() {
	int x;
	int i;
	std::cout << "���ڸ� �Է��ϼ���. ";
	std::cin >> x;
	if (x % 2 == 0) {
		if (x == 0) {
			std::cout << "���� 0�� �Է��߽��ϴ�.";
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
		std::cout << "�߸� �Է��߽��ϴ�.";
	}
}