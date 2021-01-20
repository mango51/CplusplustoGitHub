#include <iostream>
#include <string>
using namespace std;

namespace Korea {
	int population;
	string capital;
	string language;

	void print() {
		cout << "인구수 : " << population << endl;
		cout << "수도 : " << capital << endl;
		cout << "언어 : " << language << endl;
	}
}

int main(void) {
	Korea::population = 1000;
	Korea::capital = "Seoul";
	Korea::language = "Korean";

	Korea::print();
}