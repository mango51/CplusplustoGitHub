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
	softDrink soft = softDrink("10.","�޴�","�ݶ�","������");
	ionDrink ion = ionDrink("10.","�����ϴ�","2%","10g");
	fruitDrink fruit = fruitDrink("20.","�޴�","���ְ���","���ֵ�");
	teaDrink tea = teaDrink("����","����","��������");

	Drink drink[4] = { soft,ion, fruit, tea};
	//Drink Ŭ���� ���¸� ���� �ν��Ͻ����� �ִ� �迭 drink ����
	//soft�� softDrink Ŭ���� ���¸� �������Ƿ� softDrink�� ��� ���� Drink �����̱⵵��
	//��, soft�� softDrink Ŭ�����̸� DrinkŬ������
	//������ ion, fruit, tea�� ������ (��� DrinkŬ������)
	//Drink Ŭ���� ������ �ν��Ͻ����� ���� drink �迭
	int i;

	for (i = 0; i < 4; i++) {
		refrigerator[i] = drink[i];
	}

	string search;
	cout << "��ǰ �̸��� �Է��ϼ��� : ";
	cin >> search;
	

	for (i = 0; i < 4; i++) {
		if (refrigerator[i].name==search) {
			cout << "����� " << i+1 << "��° ĭ�� �ֽ��ϴ�" << endl;
			break;
			//�ش� ��ǰ ����� �ȿ� ������ i�� �� ���¿��� ���߰� ���� ����
			//���� ���� �� i�� �� ���·� ����
		}
	}
	//����� ���� ���, ���� ���� �� ������ i=3�� ���·� ����
	//���� �ڵ�� �� ���� ������ i�� �ٽ� ������ ���� i�� ���±���
	//search �Է°��� �������� ������ ����� �ȿ� ������ ������
	if(refrigerator[i].name != search) {
	cout << "-1" << endl;
		}
	//���� ����� �ȿ� ������ i�� �� ���¿��� break�� ���� ���Ա� ������
	//���� �ڵ忡 ������� ���� 
	//refrigerator[i].name�� search ���� �����ϱ� ������
}