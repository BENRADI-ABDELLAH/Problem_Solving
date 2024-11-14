/*
problem 8 level 2

Write a program read a digit and a number, then print digit frequency in that number.

Input:
1223222
2

Output:
Digit 2 Frequency is 5 Time(s)
*/
#include<iostream>
using namespace std;
int ReadPositiveNumber(string Message) {

	int Number = 0;

	do {

		cout << Message << endl;
		cin >> Number;

	} while (Number <= 0);

	return Number;
}
int CountDigitFrequency(short DigitToCheck, int Number) {

	int FreqCount = 0, Remainder = 0;

	while (Number > 0)
	{

		Remainder = Number % 10;
		Number = Number / 10;

		if (DigitToCheck == Remainder) {
			FreqCount++;
		}
	}
	return FreqCount;
}
int main() {

	int Number = ReadPositiveNumber("Please enter the main number?");

	short DigitToCheck = ReadPositiveNumber("Please enter one digit to check?");

	cout << "\nDigit " << DigitToCheck << " Frequency is " << CountDigitFrequency(DigitToCheck, Number) << " Time(s).\n";

	return 0;
}


