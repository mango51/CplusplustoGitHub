#include <iostream>
using namespace std;

class Parents {
public:
	virtual void printV() {
		cout << "�θ� ��ü ���� �Լ�" << endl;
	}
	void print() {
		cout << "�θ� ��ü �Ϲ� �Լ�" << endl;
	}
};
class Child :public Parents {
public:
	void printV() {
		cout << "�ڽ� ��ü ���� �Լ�" << endl;
	}
	void print() {
		cout << "�ڽ� ��ü �Ϲ� �Լ�" << endl;
	}
};
int main(void) {
	Parents* parents_ptr;
	Child child_var;

	parents_ptr = &child_var;

	parents_ptr->print();
	parents_ptr->printV();
}