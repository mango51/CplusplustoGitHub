#include <iostream>
#include <string>
#include <fstream>

int main() {
	std::ifstream codefile;
	std::string str1,str2;

	codefile.open("codefile.txt");

	int i;
	for (i = 0; i < 3; i++) { //ȸ�� �� ��
		while (codefile >> str1 >> str2) { //ȸ�� ���� �� �� (codefile���� �о�� �ڵ� ������� �� �پ� ���ڿ� ������ str1,str2�� �����ϱ�)
			if (i == 0) {
				std::cout << "ù��° ȸ�� : ";
			}
			else if (i == 1) {
				std::cout << "�ι�° ȸ�� : ";
			}
			else {
				std::cout << "����° ȸ�� : ";
			}
			std::cout << "���� " << str1 << ", " << "��� " << str2 << std::endl;

		}
	}
	codefile.close();
	return 0;
}