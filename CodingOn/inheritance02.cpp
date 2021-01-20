#include <iostream>
using namespace std;

class Shape {
protected:
	int side;
	int under;
public:
	void printInfo() {
		cout << "���� ���� : " << side << endl;
		cout << "�غ��� ���� : " << under << endl;
	}
};

class Rectangle :public Shape {
private:
	int ver;
public:
	Rectangle(int side, int under, int ver) {
		this->side = side;
		this->under = under;
		this->ver = ver;
	}
	void area() {
		if (side == 4) {
			cout << "������ ���� : " << ver * under << endl;
		}
		else {
			cout << "�簢���� �ƴմϴ�." << endl;
		}
	}
};

class Triangle :public Shape {
private:
	int height;
public:
	Triangle(int side, int under, int height) {
		this->side = side;
		this->under = under;
		this->height = height;
	}
	void area() {
		if (side == 3) {
			cout << "������ ���� : " << (height*under)*0.5 << endl;
		}
		else {
			cout << "�ﰢ���� �ƴմϴ�." << endl;
		}
	}
};

int main(void) {
	Rectangle rect = Rectangle(4, 3, 5);
	Triangle tri = Triangle(3, 4, 5);

	rect.area();
	tri.area();
}