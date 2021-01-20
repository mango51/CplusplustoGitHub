#include <iostream>
using namespace std;

class Snack {
protected:
	string kind = "간식";
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
		this->name = "애니타임";
		this->price = "1000원";
		this->company = "롯데";
		this->flavor = "모름";
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
		this->name = "스니커즈";
		this->price = "1500원";
		this->company = "미국";
		this->shape = "네모";
	}
};

int main(void) {
	Snack snackBasket[4];
	Candy candy1 = Candy("청포도","1300원","롯데","청포도맛");
	Candy candy2 = Candy();
	Chocolate choco1 = Chocolate("자유시간","900원","해태","네모");
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