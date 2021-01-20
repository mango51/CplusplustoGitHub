#include <iostream>
using namespace std;

class Programming {
public: // ���� �����ڸ� ���� �����Լ������� ����� �� �ֵ��� �����
	string name;
	string type;
	int year;
	string program;

	Programming(string name, string type, int year, string program) {
		this->name = name;
		this->type = type;
		this->year = year;
		this->program = program;
	}
	void showInfo() {
		cout << name << ", " << type << ", " << year << ", " << program << endl;
	} // �����Ű���� ����� �Լ��� �����ؼ� �����Լ��� ȣ���Ű��
};

int main(void) {
	Programming cplusplus = Programming("C++", "��ü����", 1979, "Visual Studio");
	Programming c = Programming("C","��������",1972,"Visual Studio");
	Programming python = Programming("Python", "��ü����", 1991, "PyCharm");
	Programming java = Programming("Java", "��ü����", 1995, "Eclipse");

	cplusplus.showInfo();
	c.showInfo();
	python.showInfo();
	java.showInfo();

}