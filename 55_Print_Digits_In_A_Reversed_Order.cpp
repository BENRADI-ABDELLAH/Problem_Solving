/*
Problem 05 level 2 : Print Digits in a reversed order

Write a program to read a number and print it in a reversed order.

Input:
1234

Output:
4321

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
void PrintDigits(int Number) {

	int  Remainder = 0;

	while (Number > 0) {

		Remainder = Number % 10;
		Number = Number / 10;
		cout << Remainder << endl;

	}
}
int main() {

	PrintDigits(ReadPositiveNumber("Please enter a positive number?"));
	return 0;

}
