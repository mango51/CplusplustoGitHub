#include <iostream>
#include <string>
#include <fstream>

int main() {
	std::ifstream codefile;
	std::string str1, str2;

	codefile.open("codefile.txt");

	std::string id;
	std::string pass;

	std::cout << "이름을 입력하세요. ";
	std::cin >> id;

	std::cout << "비번을 입력하세요. ";
	std::cin >> pass;

	while (codefile >> str1 >> str2) {
		if ((id == str1) & (pass == str2)) {
			std::cout << "로그인 성공" << std::endl;
			break;
		}
	}
	if ((id != str1) | (pass != str2)) {
		std::cout << "로그인 실패" << std::endl;
	}
	codefile.close();
	return 0;
}