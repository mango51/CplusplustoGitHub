#include <iostream>
using namespace std;

class School {
public:
	string name;
	int students;
	int classes;
	int year;

	School(string name, int students, int classes, int year) {
		this->name = name;
		this->students = students;
		this->classes=classes;
		this->year = year;
	}

	void printInfo() {
		cout << "�б� �̸� :" << name << endl;
		cout << "�л� �� : " << students << endl;
		cout << "�б� �� : " << classes << endl;
		cout << "�����⵵ : " << year << endl;
	}
};

int main(void) {
	School A = School("������", 1200, 33, 1980);
	School B = School("��ȭ����", 1500, 36, 1940);
	School C = School("��ȭ��", 1600, 36, 1940);

	A.printInfo();
	B.printInfo();
	C.printInfo();
}