#include <iostream>
using namespace std;

//오버로딩 함수 연습하기

class Information {
public:
	void showInfo(string name) {
		cout << "이름 : " << name << endl;
	}
	void showInfo(int year) {
		cout << "태어난 년도 : " << year << endl;
	}

	void showInfo(int year, bool tf) {
		if (tf == false) {
			cout << "태어난 년도 : " << year << " 거짓입니다" << endl;
		}
		else if (tf == true) {
			cout << "태어난 년도 : " << year << " 참입니다" << endl;
		}
	}
};

int main(void) {
	Information info = Information();
	info.showInfo("강효민");
	info.showInfo(1998);
	info.showInfo(1998, true);
}