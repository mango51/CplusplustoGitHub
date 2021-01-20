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
		cout << "닉네임 변경" << endl;
		cout << "비밀번호 입력하세요 : ";
		cin >> password;
		if (password == pass) {
			cout << "변경할 닉네임 : ";
			cin >> nick;
		}
	}
	void printInfo() {
		string password;
		cout << endl;
		cout << "개인 정보 보호상 비밀번호 입력 : ";
		cin >> password;
		if (password == pass) {
			cout << id << " " << pass << " " << nick <<" "<<num << " " << email << " " << add << endl;
			cout << endl;
		}
	}
};

int main(void) {
	User userA = User("mango", "1234", "망고","010", "mango51@daum.net", "blog.naver.com");
	// 인스턴스 userA 생성하고 클래스의 생성자에서 인스턴스 userA 정보 입력
	// 메인함수에서 객체 userA 호출시 위의 저장된 해당 정보 불러옴
	userA.printInfo();
	userA.changeNickName();
	userA.printInfo();
}