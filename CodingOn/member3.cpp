#include <iostream>
#include <string>
#include <fstream>

int main() {
	std::ifstream codefile;
	std::string str1, str2;

	codefile.open("codefile.txt");

	std::string id;
	std::string pass;

	std::cout << "�̸��� �Է��ϼ���. ";
	std::cin >> id;

	std::cout << "����� �Է��ϼ���. ";
	std::cin >> pass;

	while (codefile >> str1 >> str2) {
		if ((id == str1) & (pass == str2)) {
			std::cout << "�α��� ����" << std::endl;
			break;
		}
	}
	if ((id != str1) | (pass != str2)) {
		std::cout << "�α��� ����" << std::endl;
	}
	codefile.close();
	return 0;
}