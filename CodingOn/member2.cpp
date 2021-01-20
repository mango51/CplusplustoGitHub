#include <iostream>
#include <string>
#include <fstream>

int main() {
	std::ifstream codefile;
	std::string str1,str2;

	codefile.open("codefile.txt");

	int i;
	for (i = 0; i < 3; i++) { //회원 한 명씩
		while (codefile >> str1 >> str2) { //회원 정보 한 명씩 (codefile에서 읽어온 코드 내용들을 한 줄씩 문자열 변수형 str1,str2에 저장하기)
			if (i == 0) {
				std::cout << "첫번째 회원 : ";
			}
			else if (i == 1) {
				std::cout << "두번째 회원 : ";
			}
			else {
				std::cout << "세번째 회원 : ";
			}
			std::cout << "성함 " << str1 << ", " << "비번 " << str2 << std::endl;

		}
	}
	codefile.close();
	return 0;
}