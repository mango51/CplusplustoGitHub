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
		cout << "이름 : " << name << endl;
		cout << "출발지 : " << startingpoint << endl;
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
		cout << name<<"의 운행이 종료되었습니다." << endl;
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
		cout << "이름 : " << name << endl;
		cout << "출발지 : " << startingpoint << endl;
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
		cout << name << "의 운행이 종료되었습니다." << endl;
	}
};


int main(void) {
	Ship A = Ship("인천 여객선", 420000, 60, "인천항");
	Ship B = Ship("부산 여객선", 370000, 57, "부산항");
	Airplane C = Airplane("서울 항공", 1820000, 780, "서울공항");
	Airplane D = Airplane("제주 항공", 1740000, 710, "제주공항");
	int km;
	A.printInfo();
	B.printInfo();
	C.printInfo();
	D.printInfo();
	cout << "목적지까지의 거리는? ";
	cin >> km;

	int num[4] = { A.lowestExpense(km),B.lowestExpense(km),C.lowestExpense(km),D.lowestExpense(km) };
	int min = 0;
	int i;
	for (i = 0; i < 4; i++) {
		if (num[i] < min) {
			min = num[i];
		}
	}

	cout << "1시간에 드는 비용이 가장 적은 교통수단 : ";
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

