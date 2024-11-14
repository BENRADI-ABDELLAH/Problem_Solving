/*
Problem 13  level 2: Number Pattern

Write a program to read a number and print inverted pattern as follows?

Input:
3

Output:
1
22
333

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
void PrintNumberPattern(int Number) {

	cout << "\n";

	for (int i = 1; i <= Number; i++) {

		for (int j = 1; j <= i; j++) {
			cout << i;
		}
		cout << "\n";
	}
}
int main() {

	PrintNumberPattern(ReadPositiveNumber("Please enter a positive number?"));
	return 0;

}

