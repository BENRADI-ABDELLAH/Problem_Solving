/*

Problem 12 level 2 : Inverted Number Pattern

Write a program to read a number and print inverted pattern as follows ?

Input :
3

Output :
333
22
1

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
void PrintInvertedNumberPattern(int Number) {
	cout << "\n";

	for (int i = Number; i >= 1; i--) {

		for (int j = 1; j <= i; j++) {
			cout << i;
		}

		cout << "\n";
	}
}
int main() {

	PrintInvertedNumberPattern(ReadPositiveNumber("Please enter a positive number?"));
	return 0;

}

