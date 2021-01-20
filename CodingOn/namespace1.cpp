#include <iostream>
#include <string>
using namespace std;

namespace Seoul {
	string cityname;
	int num;
	string building;
	void printcity() {
		cout << "도시 이름 :" << cityname << endl;
	}
}

namespace Busan {
	string cityname;
	int num;
	string building;
	void printcity() {
		cout << "도시 이름 :" << cityname << endl;
	}
}

int main(void) {
	Seoul::num = 1;
	Busan::num = 2;
	cout << Seoul::num << endl;
	cout << Busan::num << endl;

	Seoul::cityname = "서울";
	Busan::cityname = "부산";
	Seoul::printcity();
	Busan::printcity();
}

