#include <iostream>
#include <string>

std::string member[3][2];

void register_member() {
	int i,j;
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 2; j++) {
			if (j == 0){
				std::cout << "이름은? ";
			}
			else {
				std::cout << "나이는? ";
			}
			std::cin >> member[i][j];
		}
		std::cout << std::endl;
	}
}

void show_member() {
	int i, j;
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 2; j++) {
			std::cout<< member[i][j];
			if (j == 0) {
				std::cout << ", ";
			}
		}
		std::cout << std::endl;
	}
}

int main() {
	register_member();
	//void로 함수 만들고 함수 불러오기 >> 내용 전체를 끌고 오기
	show_member();
	//함수 show_member()를 반환 타입 void로 만든 후 show_member() 함수 불러오기 >> 내용 전체를 불러오기
}