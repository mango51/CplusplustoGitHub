#include <iostream>
using namespace std;

class Car {
public:
	string handle = "handle";
	string wheel = "wheel";
	string engine = "engine";
	string onRoad = "onRoad";
};

class Truck : public Car
{
public:
	string wideTrunk = "wideTrunk";
	void notreally() {
		cout << wheel << endl;
	}
};

class Bus : public Car
{
public:
	string bell = "bell";
};
int main(void) {
	Bus mBus = Bus();
	Truck mTruck = Truck();

	cout << mBus.handle << endl;
	cout << mTruck.engine << endl;
}