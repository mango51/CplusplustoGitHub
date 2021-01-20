#include <iostream>
using namespace std;

class Subject {
protected:
	string sub;
	string teacher;
	string test;
};

class Korean :public Subject {
private:
	string essay;
public:
	Korean(string sub, string teacher, string test, string essay) {
		this->sub = sub;
		this->teacher = teacher;
		this->test = test;
		this->essay = essay;
	}
	void printInfo() {
		cout << "과목 이름 : " << sub << endl;
		cout << "담당 선생님 : " << teacher << endl;
		cout << "시험 날짜 : " << test << endl;
		cout << "독후감 제출 날짜 : " << essay << endl;
	}
};

class Math :public Subject {
private:
	string quiz;
public:
	Math(string sub, string teacher, string test, string quiz) {
		this->sub = sub;
		this->teacher = teacher;
		this->test = test;
		this->quiz = quiz;
	}
	void printInfo() {
		cout << "과목 이름 : " << sub << endl;
		cout << "담당 선생님 : " << teacher << endl;
		cout << "시험 날짜 : " << test << endl;
		cout << "쪽지 시험 날짜 : " << quiz << endl;
	}
};
int main(void) {
	Korean korean = Korean("국어", "강횸", "9월 20일", "10월 4일");
	Math math = Math("수학", "효민", "9월 30일", "10월 2일");

	korean.printInfo();
	cout << endl;
	math.printInfo();
}