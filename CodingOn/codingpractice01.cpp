#include <iostream>
#include <string>

int main() {
	//�迭 ���� ���� �� ���� �ϳ��� �����ϴ� ���
	std::string city[3];

	city[0] = "Korea";
	city[1] = "Spain";
	city[2] = "USA";


	std::cout << city[0] << std::endl;
	std::cout << city[1] << std::endl;
	std::cout << city[2] << std::endl;

	//�迭 �����ϴ� ���ÿ� ���� �����ϴ� ���
	std::string city2[] = { "Korea","Spain","USA" };
	std::cout << city2[0] << std::endl;
	std::cout << city2[1] << std::endl;
	std::cout << city2[2] << std::endl;

	//������ �迭���� (city Ȥ�� city2)�� ����� ������ for�� �̿��� ���
	int i;
	for (i = 0; i < sizeof(city2) / sizeof(city2[0]); i++) {
		std::cout << city2[i] << std::endl;
	}
}