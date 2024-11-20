/*
Problem 06 level 2: Sum of digits

Write a program to read a number and print the sum of its digits.

Input:
1234

Output:
Sum Of Digits=10
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
int SumOfDigits(int Number) {

	int Sum = 0, Remainder = 0;

	while (Number > 0) {

		Remainder = Number % 10;
		Number = Number / 10;
		Sum = Sum + Remainder;

	}
	return Sum;
}
int main() {

	cout << "\nSum Of Digits = " << SumOfDigits(ReadPositiveNumber("Please enter a positive number?"))
		<< "\n";
	return 0;
}
