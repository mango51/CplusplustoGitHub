#include <iostream>
using namespace std;

class User {
private:
	string pass;
	string email;
	string num;
public:
	string id;
	string nick;
	string add;
	User(string id, string pass, string nick,string num,string email, string add) {
		this->id = id;
		this->pass = pass;
		this->nick = nick;
		this->num = num;
		this->email = email;
		this->add = add;
	}
	void changeNickName() {
		string password;
		cout << endl;
		cout << "�г��� ����" << endl;
		cout << "��й�ȣ �Է��ϼ��� : ";
		cin >> password;
		if (password == pass) {
			cout << "������ �г��� : ";
			cin >> nick;
		}
	}
	void printInfo() {
		string password;
		cout << endl;
		cout << "���� ���� ��ȣ�� ��й�ȣ �Է� : ";
		cin >> password;
		if (password == pass) {
			cout << id << " " << pass << " " << nick <<" "<<num << " " << email << " " << add << endl;
			cout << endl;
		}
	}
};

int main(void) {
	User userA = User("mango", "1234", "����","010", "mango51@daum.net", "blog.naver.com");
	// �ν��Ͻ� userA �����ϰ� Ŭ������ �����ڿ��� �ν��Ͻ� userA ���� �Է�
	// �����Լ����� ��ü userA ȣ��� ���� ����� �ش� ���� �ҷ���
	userA.printInfo();
	userA.changeNickName();
	userA.printInfo();
}