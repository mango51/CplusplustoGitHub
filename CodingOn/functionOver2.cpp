#include <iostream>
using namespace std;

//�������̵� �����ϱ�

class Student {
public:
	string name;
	void showInfo() {
		cout << "�̸���? "<<name<< endl;
	}
};

class CollegeStudent :public Student {
public:
	string major;
	CollegeStudent(string name, string major) {
		this->name = name;
		this->major = major;
	}
	void showInfo(){
		cout << "�̸� : " << name << ", ���� : " << major << endl;
	}
	//�Լ� �������̵�
};

class HighStudent :public Student {
public:

	//���� �ڵ�� Ŭ���� Student���� ��ӹ��� ���� 
	//string name; �����ڿ��� this->name�� �� ����
	//void showInfo() {
	//	cout << "�̸���? " << name << endl;
	//}
	//high.showInfo()�� ���� ������ name ���� ���

	HighStudent(string name) {
		this->name = name;
	}
	//HighSchool�� ���� �ν��Ͻ� high�� name ���ڷ� �޾� name ���� ����
};

int main(void) {
	CollegeStudent college = CollegeStudent("��ȿ��","�����");
	HighStudent high = HighStudent("���L");
	//high�� name�� "���L"�̶�� ���� ������
	college.showInfo();
	high.showInfo();
	//high���� name�� "���L"�̶�� ���� �ԷµǾ�����
	//Student���� ��ӹ��� �Լ� showInfo()�� ���� ������ name ���� ���
}
