#include <iostream>
using namespace std;

class Person {
private:
	string name;
	int age;
	int num;
	string job;
	string address;
	//전역변수는 외부에서 접근할 수 없도록 private으로 설정하고

public:
//나머지 (생성자와 메소드) 는 메인함수에서 접근할 수 있도록 public으로 설정
	Person(string name, int age, int num, string job, string address) {
		this->name = name;
		this->age = age;
		this->num = num;
		this->job = job;
		this->address = address;
	}

	void printInfo() {
		cout << "이름 : " << name << endl;
		cout << "나이 : " << age << endl;
	}

	void changeAge(int age) {
		this->age = age;
		cout << "수정된 나이 : " << age << endl;
	}
};

int main(void) {
	Person A = Person("강횸", 24, 010, "학생", "잠원동");
	Person B = Person("강똥", 21, 011, "무직", "행당동");
	Person C = Person("강뚱", 22, 111, "직장인", "돈암동");

	A.printInfo();
	B.printInfo();
	C.printInfo();
	A.changeAge(20);
	A.printInfo();
}