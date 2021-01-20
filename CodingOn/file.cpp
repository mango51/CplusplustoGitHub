#include <iostream>
#include <string>
#include <fstream>

int main() {
	std::ifstream myfile;
	std::string str1,str2,str3,str4;

	myfile.open("myfile.txt");

	myfile >> str1 >> str2 >> str3>> str4;

	std::cout << str1 <<" "<< str2<<std::endl;
	std::cout << str3 << " "<<str4;

	myfile.close();

	return 0;
}