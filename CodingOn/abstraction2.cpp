#include <iostream>
using namespace std;

class StudentInfo {
public:
	string name;
	string classname;
	int num;
	int monthly;

	void nameandclass() {
		cout << "�̸� : ";
		cin >> name;
		cout << "���� ���� : ";
		cin >> classname;
		printnameandclass(name, classname);
	} // Ŭ������ ����� �����Լ��� �������� ���ؼ��� �Լ� ���� �ʿ�
	void printnameandclass(string name, string classname) {
		cout << name << " " << classname << "�л�" << endl;
	}
	void nameandnum(){
		cout << endl;
		cout << "�̸� : ";
		cin >> name;
		cout << "�ֹι�ȣ ���ڸ� : ";
		cin >> num;
		printnameandnum(name, num);
	}
	void printnameandnum(string name, int num) {
		if ((num == 1) | (num == 3)) {
			cout << name << "�� �����Դϴ�." << endl;
		}
		else if ((num == 2) | (num == 4)) {
			cout << name << "�� �����Դϴ�." << endl;
		}
		else {
			cout << "�߸� �Է��ϼ̽��ϴ�." << endl;
			nameandnum();
		}
	}
	void nameandmonthly() {
		cout << endl;
		cout << "�̸� : ";
		cin >> name;
		cout << "�� �޿� �� ���� Ƚ�� : ";
		cin >> monthly;
		printnameandmonthly(name, monthly);
	}
	void printnameandmonthly(string name, int monthly) {
		cout << name << "�� �� �޿� �� " << monthly*4 << " ȸ ������ �մϴ�." << endl;
	}
};

int main(void) {
	StudentInfo studentA = StudentInfo();
	studentA.nameandclass();
	studentA.nameandnum();
	studentA.nameandmonthly();
}