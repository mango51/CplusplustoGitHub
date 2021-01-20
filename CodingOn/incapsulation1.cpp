#include <iostream>
using namespace std;

class Person {
private:
	string name;
	string birth;
	string gender;
	string address;
	string occupation;
	string num;

public:
	Person(string name, string birth, string gender, string address, string occupation, string num) {
		this->name = name;
		this->birth = birth;
		this->gender = gender;
		this->address = address;
		this->occupation = occupation;
		this->num = num;
	}
	void printInfo() {
		cout << name << " " << birth << " " << gender << " " << address << " " << occupation << " " << num << endl;
	}
};

int main(void) {
	Person oneP = Person("강효민", "98-05-01", "여", "서울", "학생", "010");
	oneP.printInfo();
}