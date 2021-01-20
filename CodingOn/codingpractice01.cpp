#include <iostream>
#include <string>

int main() {
	//배열 변수 선언 뒤 값을 하나씩 지정하는 방법
	std::string city[3];

	city[0] = "Korea";
	city[1] = "Spain";
	city[2] = "USA";


	std::cout << city[0] << std::endl;
	std::cout << city[1] << std::endl;
	std::cout << city[2] << std::endl;

	//배열 선언하는 동시에 값도 지정하는 방법
	std::string city2[] = { "Korea","Spain","USA" };
	std::cout << city2[0] << std::endl;
	std::cout << city2[1] << std::endl;
	std::cout << city2[2] << std::endl;

	//선언한 배열변수 (city 혹은 city2)에 저장된 값들을 for문 이용해 출력
	int i;
	for (i = 0; i < sizeof(city2) / sizeof(city2[0]); i++) {
		std::cout << city2[i] << std::endl;
	}
}