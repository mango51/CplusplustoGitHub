#include <iostream>
#include <string>
using namespace std;

namespace Seoul {
	string cityname;
	int num;
	string building;
	void printcity() {
		cout << "���� �̸� :" << cityname << endl;
	}
}

namespace Busan {
	string cityname;
	int num;
	string building;
	void printcity() {
		cout << "���� �̸� :" << cityname << endl;
	}
}

int main(void) {
	Seoul::num = 1;
	Busan::num = 2;
	cout << Seoul::num << endl;
	cout << Busan::num << endl;

	Seoul::cityname = "����";
	Busan::cityname = "�λ�";
	Seoul::printcity();
	Busan::printcity();
}

