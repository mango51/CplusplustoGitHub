#include <iostream>
using namespace std;

class Subject {
protected:
	string name;
	string teacher;
	string exam;
};

class Korean : public Subject {
protected:
	string bookreview;
public:
	Korean() {
		this->name = "����";
		this->teacher = "ȫ";
		this->exam = "9�� 16��";
		this->bookreview = "10�� 4��";
	}
	//Korean �����ڿ��� ���� �̸� �Է��ص�
	void printInfo() {
		cout << "����� : " << this->name << endl;
		cout << "������ : " << this->teacher << endl;
		cout << "���� ��¥ : " << this->exam << endl;
		cout << "���İ� ������ : " << this->bookreview << endl;
	}
	//this->�� ����Ͽ� Subject���� ��ӵ� �����鿡 �Էµ� ���� ��������
	//Korean�����ڷ� �������� ���� �̹� �Է� �Ϸ�
};

class Math : public Subject {
protected:
	string miniTest;
public:
	Math() {
		this->name = "����";
		this->teacher = "��";
		this->exam = "8�� 16��";
		this->miniTest = "11�� 24��";
	}
	//Math �����ڿ� �̸� ���� �Է��ص�
	void printInfo() {
		cout << "����� : " << this->name << endl;
		cout << "������ : " << this->teacher << endl;
		cout << "���賯¥ : " << this->exam << endl;
		cout << "���� ���� : " << this->miniTest << endl;
	}
	//this->�� ���� Subject���� ��ӹ��� ������ ���� ������
	//this->�� ������ ������ �̹� Math �����ڿ��� ���� �Է� ����
};

int main(void) {
	Korean korean = Korean();
	Math math = Math();
	// �ν��Ͻ��� �� ������ ������� �����ڿ� �̹� ������ �Է��ص� �����̱� ������
	// ���� �����ڷ� ���� �ν��Ͻ����̶�� ��� ���� ������ ������ ����
	// �ν��Ͻ� korean, korean1, korean2 �� ���� �� ������� ��...
	// �ν��Ͻ��� ��� ���� ���� ������ ���� (�����ڰ� �����ϱ�)
	// ���� �����ڷ� ������� ��, �ش� ������ �ȿ� �̹� ���� �Է��ص� ���´ϱ�
	korean.printInfo();
	math.printInfo();
}