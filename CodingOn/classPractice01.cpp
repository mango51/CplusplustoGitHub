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
		cout << "학교 이름 :" << name << endl;
		cout << "학생 수 : " << students << endl;
		cout << "학급 수 : " << classes << endl;
		cout << "설립년도 : " << year << endl;
	}
};

int main(void) {
	School A = School("반포고", 1200, 33, 1980);
	School B = School("세화여고", 1500, 36, 1940);
	School C = School("세화고", 1600, 36, 1940);

	A.printInfo();
	B.printInfo();
	C.printInfo();
}