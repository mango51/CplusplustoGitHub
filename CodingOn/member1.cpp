#include <iostream>
#include <string>
#include <fstream>


std::string member[3][2];

int main() {
	std::ofstream codefile;

	codefile.open("codefile.txt");

	int i, j;

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 2; j++) {
			if (j == 0) {
				std::cout << "이름 : ";
			}
			else {
				std::cout << "비밀번호 : ";
			}
			std::cin >> member[i][j];
			codefile << member[i][j] << " ";
		}
		codefile << "\n";
	}

	codefile.close();

	return 0;
}