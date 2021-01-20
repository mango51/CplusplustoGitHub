#include <iostream>
using namespace std;

class Sports {
protected:
	int num;
	int time;
	string shape;
public:
	void printInfo() {
		cout << "������ ���" << endl;
	}
};

class Soccer : public Sports {
private:
	int goal;
	int firstHalf;

public:
	Soccer(int num, int time, string shape,int goal, int firstHalf) {
		this->num = num;
		this->time = time;
		this->shape = shape;
		this->goal = goal;
		this->firstHalf = firstHalf;
	}
	void totalPlayer() {
		cout << "�౸ �� ���� �� �ο� �� : " << num << endl;
	}
};

class Baseball : public Sports {
private:
	int inning;
	int start;

public:
	Baseball(int num, int time, string shape, int inning, int start) {
		this->num = num;
		this->time = time;
		this->shape = shape;
		this->inning = inning;
		this->start = start;
	}
	void inningTime() {
		cout << "�߱� �� �̴״� ��� : " <<time/inning<<"�� �ɸ�" << endl;
	}
};

int main(void) {
	Soccer soc = Soccer(20, 90, "rectangle", 100, 45);
	Baseball base = Baseball(20, 100, "triangle", 5, 10);

	soc.printInfo();
	soc.totalPlayer();

	cout << endl;
	
	base.printInfo();
	base.inningTime();
}