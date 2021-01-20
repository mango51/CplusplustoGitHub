#include <iostream>
#include <string>

int main() {
	int age;
	std::cout << "나이를 입력하세요. ";
	std::cin >> age;
	if (1 <= age && age <= 7) {
		std::cout << "유아";
	}
	else if (8 <= age && age <= 13) {
		std::cout << "초등학생";
	}
	else if (14 <= age && age <= 16) {
		std::cout << "중학생";
	}
	else if (17 <= age && age <= 19) {
		std::cout << "고등학생";
	}
	else if (age >= 20) {
		std::cout << "성인";
	}

	std::string name;
	std::cout << "이름을 입력하세요. ";
	std::cin >> name;
	if (name == "홍길동") {
		std::cout << "남자";
	}
	else if (name == "성춘향") {
		std::cout << "여자";
	}
	else {
		"모르겠어요.";
	}
}