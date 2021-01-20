#include <iostream>
using namespace std;

class Snack {
protected:
	string kind = "����";
	string price;
	string company;
public:
	string name;
};

class Candy : public Snack {
public:
	string flavor;
	Candy(string name, string price, string company, string flavor) {
		this->name = name;
		this->price = price;
		this->company = company;
		this->flavor = flavor;
	}
	Candy() {
		this->name = "�ִ�Ÿ��";
		this->price = "1000��";
		this->company = "�Ե�";
		this->flavor = "��";
	}
};

class Chocolate : public Snack {
public:
	string shape;
	Chocolate(string name, string price, string company, string shape) {
		this->name = name;
		this->price = price;
		this->company = company;
		this->shape= shape;
	}
	Chocolate() {
		this->name = "����Ŀ��";
		this->price = "1500��";
		this->company = "�̱�";
		this->shape = "�׸�";
	}
};

int main(void) {
	Snack snackBasket[4];
	Candy candy1 = Candy("û����","1300��","�Ե�","û������");
	Candy candy2 = Candy();
	Chocolate choco1 = Chocolate("�����ð�","900��","����","�׸�");
	Chocolate choco2 = Chocolate();
	snackBasket[0] = candy1;
	snackBasket[1] = candy2;
	snackBasket[2] = choco1;
	snackBasket[3] = choco2;
	int i;
	for (i = 0; i < 4; i++) {
		cout << snackBasket[i].name << endl;
	}
}