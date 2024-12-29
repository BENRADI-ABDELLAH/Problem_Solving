/*
problem 9 level 2

Write a program read a number then print all digit frequency in that number.

Input:
123222

Output:
Digit 1 Frequency is 1 Time(s).
Digit 2 Frequency is 5 Time(s).
Digit 3 Frequency is 1 Time(s).

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

	while (Number > 0) {

		Remainder = Number % 10;
		Number = Number / 10;

		if (DigitToCheck == Remainder) {
			FreqCount++;
		}
	}
	return FreqCount;
}
void PrintAllDigitsFrequencey(int Number) {

	cout << endl;

	for (int i = 0; i < 10; i++) {

		short DigitFrequency = 0;
		DigitFrequency = CountDigitFrequency(i, Number);

		if (DigitFrequency > 0) {
			cout << "Digit " << i << " Frequencey is " << DigitFrequency << " Time(s).\n";
		}
	}
}
int main() {

	int Number = ReadPositiveNumber("Please enter the a number?");
	PrintAllDigitsFrequencey(Number);

	return 0;
}


