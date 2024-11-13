/*
Problem 03 level 2 : Perfect Number


Wtite a program to check if the number is perfect or not?

Note: Perfect Number= Sum(all divisors)
	  28= 1+2+4+7+14
	  6=1+2+3

Input:
28
12

Output:
28 is perfect.
12 is not perfect.
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

void PrintResults(int Number) {

	if (isPerfectNumber(Number))
		cout << Number << " Is Perfect Number.\n";
	else
		cout << Number << " Is NOT Perfect Number.\n";

}

int main() {

	PrintResults(ReadPositiveNumber("Please enter a positive number?"));
	return 0;

}
