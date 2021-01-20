#include <iostream>
#include <ctime>
using namespace std;

int main(void) {
	clock_t startTime = clock();
	//변수 startTime에는 현재 시간 입력됨

	for (int i = 0; i < 5000; i++) {
		cout << i << endl;
	}

	clock_t endTime = clock();
	//변수 endTime은 이 코드가 실행될 때의 시간 입력됨

	cout << "걸린 시간 : " << (endTime - startTime) / CLOCKS_PER_SEC << endl;
	// 두 변수에 대입된 시간의 차이를 구해 걸린 시간 구할 수 있음
}