#include <iostream>
using namespace std;

//오버라이딩 연습하기

class Student {
public:
	string name;
	void showInfo() {
		cout << "이름은? "<<name<< endl;
	}
};

class CollegeStudent :public Student {
public:
	string major;
	CollegeStudent(string name, string major) {
		this->name = name;
		this->major = major;
	}
	void showInfo(){
		cout << "이름 : " << name << ", 전공 : " << major << endl;
	}
	//함수 오버라이딩
};

class HighStudent :public Student {
public:

	//밑의 코드는 클래스 Student에서 상속받은 내용 
	//string name; 생성자에서 this->name할 때 사용됨
	//void showInfo() {
	//	cout << "이름은? " << name << endl;
	//}
	//high.showInfo()를 통해 저장한 name 정보 출력

	HighStudent(string name) {
		this->name = name;
	}
	//HighSchool로 만든 인스턴스 high는 name 인자로 받아 name 정보 저장
};

int main(void) {
	CollegeStudent college = CollegeStudent("강효민","서디공");
	HighStudent high = HighStudent("강횸");
	//high는 name에 "강횸"이라는 정보 저장함
	college.showInfo();
	high.showInfo();
	//high에서 name은 "강횸"이라는 정보 입력되어있음
	//Student에서 상속받은 함수 showInfo()를 통해 저장한 name 정보 출력
}
