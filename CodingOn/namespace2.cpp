#include <iostream>
#include <string>
using namespace std;

namespace Korea {
	int population;
	string capital;
	string language;

	void print() {
		cout << "�α��� : " << population << endl;
		cout << "���� : " << capital << endl;
		cout << "��� : " << language << endl;
	}
}

int main(void) {
	Korea::population = 1000;
	Korea::capital = "Seoul";
	Korea::language = "Korean";

	Korea::print();
}