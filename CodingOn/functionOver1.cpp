#include <iostream>
using namespace std;

//�����ε� �Լ� �����ϱ�

class Information {
public:
	void showInfo(string name) {
		cout << "�̸� : " << name << endl;
	}
	void showInfo(int year) {
		cout << "�¾ �⵵ : " << year << endl;
	}

	void showInfo(int year, bool tf) {
		if (tf == false) {
			cout << "�¾ �⵵ : " << year << " �����Դϴ�" << endl;
		}
		else if (tf == true) {
			cout << "�¾ �⵵ : " << year << " ���Դϴ�" << endl;
		}
	}
};

int main(void) {
	Information info = Information();
	info.showInfo("��ȿ��");
	info.showInfo(1998);
	info.showInfo(1998, true);
}