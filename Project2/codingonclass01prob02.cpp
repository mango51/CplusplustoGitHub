#include <iostream>
#include <string>

int main() {
	std::string name;
	std::cout << "이름을 입력하세요. \n";
	std::cin >> name;
	std::cout << "이름이" + name + "이군요.";
}
