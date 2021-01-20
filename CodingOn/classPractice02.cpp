#include <iostream>
using namespace std;

class Person {
private:
	string name;
	int age;
	int num;
	string job;
	string address;
	//���������� �ܺο��� ������ �� ������ private���� �����ϰ�

public:
//������ (�����ڿ� �޼ҵ�) �� �����Լ����� ������ �� �ֵ��� public���� ����
	Person(string name, int age, int num, string job, string address) {
		this->name = name;
		this->age = age;
		this->num = num;
		this->job = job;
		this->address = address;
	}

	void printInfo() {
		cout << "�̸� : " << name << endl;
		cout << "���� : " << age << endl;
	}

	void changeAge(int age) {
		this->age = age;
		cout << "������ ���� : " << age << endl;
	}
};

int main(void) {
	Person A = Person("���L", 24, 010, "�л�", "�����");
	Person B = Person("����", 21, 011, "����", "��絿");
	Person C = Person("����", 22, 111, "������", "���ϵ�");

	A.printInfo();
	B.printInfo();
	C.printInfo();
	A.changeAge(20);
	A.printInfo();
}