#include <iostream>
#include <string>

std::string member[3][2];

void register_member() {
	int i,j;
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 2; j++) {
			if (j == 0){
				std::cout << "�̸���? ";
			}
			else {
				std::cout << "���̴�? ";
			}
			std::cin >> member[i][j];
		}
		std::cout << std::endl;
	}
}

void show_member() {
	int i, j;
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 2; j++) {
			std::cout<< member[i][j];
			if (j == 0) {
				std::cout << ", ";
			}
		}
		std::cout << std::endl;
	}
}

int main() {
	register_member();
	//void�� �Լ� ����� �Լ� �ҷ����� >> ���� ��ü�� ���� ����
	show_member();
	//�Լ� show_member()�� ��ȯ Ÿ�� void�� ���� �� show_member() �Լ� �ҷ����� >> ���� ��ü�� �ҷ�����
}