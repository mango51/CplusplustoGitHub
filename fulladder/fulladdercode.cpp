#include "stdafx.h"
#include <iostream>
#include <iomanip>
using namespace std;

void BinaryNumber(int number, int numberOfBits)
{
	for (int i = numberOfBits - 1; i >= 0; i--)
	{
		if (number & (1 << i)) cout << 1;
		else                  cout << 0;
		if (i % 8 == 0) cout << " ";
	}
}

void main()
{
	int number1, number2;
	int a, b, c = 0;
	int numBits = sizeof(int) * 8;

	cout << "Enter first number: "; cin >> number1;
	cout << "Enter second number: "; cin >> number2;

	cout << endl << "first number :";
	BinaryNumber(number1, numBits);
	cout << endl;

	cout << endl << "second number :";
	BinaryNumber(number2, numBits);
	cout << endl;

	cout << setfill('-') << setw(46) << "-" << endl;

	cout << "Result :";
	BinaryNumber(number1 + number2, numBits);
	cout << endl << endl;

	for (int i = 0; i < numBits; i++)
	{
		if (number1 & (1 << i)) a = 1;
		else a = 0;
		if (number2 & (1 << i)) b = 1;
		else b = 0;


		cout << "FA: " << setw(2) << setfill('0') << i
			<< " a: " << a
			<< " b: " << b
			<< " ci:   " << c
			<< " sum: " << (a ^ b ^ c)
			<< " co: " << ((a & b) | (c & (a | b)))
			<< endl;
		c = (a & b) | (c & (a | b));
	}
	cout << endl;

	system("pause");
}