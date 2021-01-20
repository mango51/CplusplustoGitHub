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
		cout << "���� �̸� : " << sub << endl;
		cout << "��� ������ : " << teacher << endl;
		cout << "���� ��¥ : " << test << endl;
		cout << "���İ� ���� ��¥ : " << essay << endl;
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
		cout << "���� �̸� : " << sub << endl;
		cout << "��� ������ : " << teacher << endl;
		cout << "���� ��¥ : " << test << endl;
		cout << "���� ���� ��¥ : " << quiz << endl;
	}
};
int main(void) {
	Korean korean = Korean("����", "���L", "9�� 20��", "10�� 4��");
	Math math = Math("����", "ȿ��", "9�� 30��", "10�� 2��");

	korean.printInfo();
	cout << endl;
	math.printInfo();
}