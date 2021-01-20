#include <iostream>
using namespace std;

class Parents {
public:
	virtual void printV() {
		cout << "부모 객체 가상 함수" << endl;
	}
	void print() {
		cout << "부모 객체 일반 함수" << endl;
	}
};
class Child :public Parents {
public:
	void printV() {
		cout << "자식 객체 가상 함수" << endl;
	}
	void print() {
		cout << "자식 객체 일반 함수" << endl;
	}
};
int main(void) {
	Parents* parents_ptr;
	Child child_var;

	parents_ptr = &child_var;

	parents_ptr->print();
	parents_ptr->printV();
}