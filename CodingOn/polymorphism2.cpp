#include <iostream>
using namespace std;

class Drink {
protected:
	string sweetness;
	string flavor;
public:
	string name;
};

class softDrink : public Drink {
public:
	string color;
	softDrink(string sweetness, string flavor, string name, string color) {
		this->sweetness = sweetness;
		this->flavor = flavor;
		this->name = name;
		this->color = color;
	}
};

class ionDrink : public Drink {
public:
	string nut;
	ionDrink(string sweetness, string flavor, string name, string nut) {
		this->sweetness = sweetness;
		this->flavor = flavor;
		this->name = name;
		this->nut = nut;
	}
};

class fruitDrink :public Drink {
public:
	string fruits;
	string org;
	fruitDrink(string sweetness, string fruits, string name, string org) {
		this->sweetness = sweetness;
		this->fruits = fruits;
		this->name = name;
		this->org = org;
	}
};

class teaDrink : public Drink {
public:
	string org;
	string effect;
	teaDrink(string name, string org, string effect) {
		this->name = name;
		this->org = org;
		this->effect = effect;
	}
};

int main(void) {
	Drink refrigerator[4];
	softDrink soft = softDrink("10.","달다","콜라","검은색");
	ionDrink ion = ionDrink("10.","달콤하다","2%","10g");
	fruitDrink fruit = fruitDrink("20.","달다","제주감귤","제주도");
	teaDrink tea = teaDrink("쿠스미","유럽","수면유도");

	Drink drink[4] = { soft,ion, fruit, tea};
	//Drink 클래스 형태를 갖춘 인스턴스들을 넣는 배열 drink 생성
	//soft는 softDrink 클래스 형태를 갖췄으므로 softDrink가 상속 받은 Drink 형태이기도함
	//즉, soft는 softDrink 클래스이며 Drink클래스임
	//나머지 ion, fruit, tea도 동일함 (모두 Drink클래스임)
	//Drink 클래스 형태의 인스턴스들을 넣은 drink 배열
	int i;

	for (i = 0; i < 4; i++) {
		refrigerator[i] = drink[i];
	}

	string search;
	cout << "제품 이름을 입력하세요 : ";
	cin >> search;
	

	for (i = 0; i < 4; i++) {
		if (refrigerator[i].name==search) {
			cout << "냉장고 " << i+1 << "번째 칸에 있습니다" << endl;
			break;
			//해당 제품 냉장고 안에 있으면 i는 그 상태에서 멈추고 포문 나옴
			//포문 나올 때 i는 그 상태로 나옴
		}
	}
	//냉장고에 없을 경우, 위의 포문 다 돌고나서 i=3인 상태로 끝남
	//밑의 코드는 다 끝난 상태의 i를 다시 가져와 끝난 i인 상태까지
	//search 입력값과 동일하지 않으면 냉장고 안에 없음을 보여줌
	if(refrigerator[i].name != search) {
	cout << "-1" << endl;
		}
	//만약 냉장고 안에 있으면 i는 그 상태에서 break로 포문 나왔기 때문에
	//위의 코드에 적용되지 않음 
	//refrigerator[i].name과 search 값이 동일하기 때문에
}