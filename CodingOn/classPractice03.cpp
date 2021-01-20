#include <iostream>
using namespace std;

class Ship {
public:
	string name;
	int expense;
	int velocity;
	string startingpoint;

	Ship(string name, int expense, int velocity, string startingpoint) {
		this->name = name;
		this->expense = expense;
		this->velocity = velocity;
		this->startingpoint = startingpoint;
	}
	void printInfo() {
		cout << "�̸� : " << name << endl;
		cout << "����� : " << startingpoint << endl;
	}
	int showExpense() {
		return expense;
	}
	int caculate(int km) {
		int result;
		result = km / velocity;
		return result;
	}
	int lowestExpense(int km) {
		int result;
		result = km / expense;
		return result;
	}
	~Ship() {
		cout << name<<"�� ������ ����Ǿ����ϴ�." << endl;
	}
};

class Airplane {
public:
	string name;
	int expense;
	int velocity;
	string startingpoint;

	Airplane(string name, int expense, int velocity, string startingpoint) {
		this->name = name;
		this->expense = expense;
		this->velocity = velocity;
		this->startingpoint = startingpoint;
	}
	void printInfo() {
		cout << "�̸� : " << name << endl;
		cout << "����� : " << startingpoint << endl;
	}
	int showExpense() {
		return expense;
	}
	int caculate(int km) {
		int result;
		result = km / velocity;
		return result;
	}
	int lowestExpense(int km) {
		int result;
		result = km / expense;
		return result;
	}
	~Airplane() {
		cout << name << "�� ������ ����Ǿ����ϴ�." << endl;
	}
};


int main(void) {
	Ship A = Ship("��õ ������", 420000, 60, "��õ��");
	Ship B = Ship("�λ� ������", 370000, 57, "�λ���");
	Airplane C = Airplane("���� �װ�", 1820000, 780, "�������");
	Airplane D = Airplane("���� �װ�", 1740000, 710, "���ְ���");
	int km;
	A.printInfo();
	B.printInfo();
	C.printInfo();
	D.printInfo();
	cout << "������������ �Ÿ���? ";
	cin >> km;

	int num[4] = { A.lowestExpense(km),B.lowestExpense(km),C.lowestExpense(km),D.lowestExpense(km) };
	int min = 0;
	int i;
	for (i = 0; i < 4; i++) {
		if (num[i] < min) {
			min = num[i];
		}
	}

	cout << "1�ð��� ��� ����� ���� ���� ������� : ";
	if (min == A.lowestExpense(km)) {
		cout << A.name << endl;
	}
	else if (min == B.lowestExpense(km)) {
		cout << B.name << endl;
	}
	else if (min == C.lowestExpense(km)) {
		cout << C.name << endl;
	}
	else if (min == D.lowestExpense(km)) {
		cout<<D.name<<endl;
	}

}

