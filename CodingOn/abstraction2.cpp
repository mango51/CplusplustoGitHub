#include <iostream>
using namespace std;

class StudentInfo {
public:
	string name;
	string classname;
	int num;
	int monthly;

	void nameandclass() {
		cout << "이름 : ";
		cin >> name;
		cout << "수강 과목 : ";
		cin >> classname;
		printnameandclass(name, classname);
	} // 클래스의 기능을 메인함수로 가져오기 위해서는 함수 선언 필요
	void printnameandclass(string name, string classname) {
		cout << name << " " << classname << "학생" << endl;
	}
	void nameandnum(){
		cout << endl;
		cout << "이름 : ";
		cin >> name;
		cout << "주민번호 뒷자리 : ";
		cin >> num;
		printnameandnum(name, num);
	}
	void printnameandnum(string name, int num) {
		if ((num == 1) | (num == 3)) {
			cout << name << "은 남자입니다." << endl;
		}
		else if ((num == 2) | (num == 4)) {
			cout << name << "은 여자입니다." << endl;
		}
		else {
			cout << "잘못 입력하셨습니다." << endl;
			nameandnum();
		}
	}
	void nameandmonthly() {
		cout << endl;
		cout << "이름 : ";
		cin >> name;
		cout << "한 달에 총 수업 횟수 : ";
		cin >> monthly;
		printnameandmonthly(name, monthly);
	}
	void printnameandmonthly(string name, int monthly) {
		cout << name << "은 한 달에 총 " << monthly*4 << " 회 수업을 합니다." << endl;
	}
};

int main(void) {
	StudentInfo studentA = StudentInfo();
	studentA.nameandclass();
	studentA.nameandnum();
	studentA.nameandmonthly();
}