#include <iostream>
using namespace std;

class Subject {
protected:
	string name;
	string teacher;
	string exam;
};

class Korean : public Subject {
protected:
	string bookreview;
public:
	Korean() {
		this->name = "국어";
		this->teacher = "홍";
		this->exam = "9월 16일";
		this->bookreview = "10월 4일";
	}
	//Korean 생성자에서 정보 미리 입력해둠
	void printInfo() {
		cout << "과목명 : " << this->name << endl;
		cout << "선생님 : " << this->teacher << endl;
		cout << "시험 날짜 : " << this->exam << endl;
		cout << "독후감 제출일 : " << this->bookreview << endl;
	}
	//this->를 사용하여 Subject에서 상속된 변수들에 입력된 정보 가져오기
	//Korean생성자로 변수들의 정보 이미 입력 완료
};

class Math : public Subject {
protected:
	string miniTest;
public:
	Math() {
		this->name = "수학";
		this->teacher = "성";
		this->exam = "8월 16일";
		this->miniTest = "11월 24일";
	}
	//Math 생성자에 미리 정보 입력해둠
	void printInfo() {
		cout << "과목명 : " << this->name << endl;
		cout << "선생님 : " << this->teacher << endl;
		cout << "시험날짜 : " << this->exam << endl;
		cout << "쪽지 시험 : " << this->miniTest << endl;
	}
	//this->를 통해 Subject에서 상속받은 변수들 정보 가져옴
	//this->로 가져온 변수들 이미 Math 생성자에서 정보 입력 받음
};

int main(void) {
	Korean korean = Korean();
	Math math = Math();
	// 인스턴스가 몇 개든지 상관없이 생성자에 이미 정보를 입력해둔 상태이기 때문에
	// 같은 생성자로 만든 인스턴스들이라면 모두 같은 정보를 가지고 있음
	// 인스턴스 korean, korean1, korean2 등 여러 개 만들었을 때...
	// 인스턴스들 모두 같은 정보 가지고 있음 (생성자가 같으니까)
	// 같은 생성자로 만들었을 때, 해당 생성자 안에 이미 정보 입력해둔 상태니까
	korean.printInfo();
	math.printInfo();
}