#include <iostream>
using namespace std;

class Programming {
public: // 접근 제어자를 통해 메인함수에서도 사용할 수 있도록 만들기
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
	} // 실행시키려는 기능을 함수로 선언해서 메인함수로 호출시키기
};

int main(void) {
	Programming cplusplus = Programming("C++", "객체지향", 1979, "Visual Studio");
	Programming c = Programming("C","절차지향",1972,"Visual Studio");
	Programming python = Programming("Python", "객체지향", 1991, "PyCharm");
	Programming java = Programming("Java", "객체지향", 1995, "Eclipse");

	cplusplus.showInfo();
	c.showInfo();
	python.showInfo();
	java.showInfo();

}