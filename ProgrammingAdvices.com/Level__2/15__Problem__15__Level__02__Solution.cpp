/*Problem 15 level 2: Letter Pattern

Write a program to read a number and print letter pattern as follows ?

    Input :
	3

	Output :
	A
	BB
	CCC

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
void PrintLetterPattern(int Number) {

	cout << "\n";

	for (int i = 65; i <= 65 + Number - 1; i++) {

		for (int j = 1; j <= i - 65 + 1; j++) {
			cout << char(i);
		}
		cout << "\n";
	}
}
int main() {

	PrintLetterPattern(ReadPositiveNumber("Please enter a positive number?"));
	return 0;

}

