#include <iostream>
#include <string>

int main() {
	int age;
	std::cout << "���̸� �Է��ϼ���. ";
	std::cin >> age;
	if (1 <= age && age <= 7) {
		std::cout << "����";
	}
	else if (8 <= age && age <= 13) {
		std::cout << "�ʵ��л�";
	}
	else if (14 <= age && age <= 16) {
		std::cout << "���л�";
	}
	else if (17 <= age && age <= 19) {
		std::cout << "����л�";
	}
	else if (age >= 20) {
		std::cout << "����";
	}

	std::string name;
	std::cout << "�̸��� �Է��ϼ���. ";
	std::cin >> name;
	if (name == "ȫ�浿") {
		std::cout << "����";
	}
	else if (name == "������") {
		std::cout << "����";
	}
	else {
		"�𸣰ھ��.";
	}
}