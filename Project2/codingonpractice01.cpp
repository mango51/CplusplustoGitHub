#include <iostream>
#include <string>

int main() {
	std::string name;
	int age;
	std::cout << "�̸��� �Է��ϼ���. ";
	std::cin >> name;
	std::cout << "���̸� �Է��ϼ���. ";
	std::cin >> age;
	std::cout << "�ȳ��ϼ���! " + name + "��(" + std::to_string(age) + "��)";
}