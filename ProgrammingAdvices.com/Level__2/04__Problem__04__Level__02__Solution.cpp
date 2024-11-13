/*
Problem 4 level 2 : Perfect number from 1 to n

Write a program to print all perfect numbers from 1 to N.

Input:
500

Output:
6
28
496
*/
#include<iostream>
#include<string>
using namespace std;

int ReadPositiveNumber(string Message) {

	int Number = 0;

	do {
		cout << Message << endl;
		cin >> Number;

	} while (Number <= 0);

	return Number;
}

bool isPerfectNumber(int Number) {

	int Sum = 0;

	for (int i = 1; i < Number; i++) {

		if (Number % i == 0)
			Sum += i;

	}
	return Number == Sum;
}

void PrintPerfectNumbersFrom1ToN(int Number) {
	for (int i = 1; i <= Number; i++) {

		if (isPerfectNumber(i)) {

			cout << i << endl;

		}
	}
}

int main() {

	PrintPerfectNumbersFrom1ToN(ReadPositiveNumber("Please enter a positive number?"));
	return 0;

}
