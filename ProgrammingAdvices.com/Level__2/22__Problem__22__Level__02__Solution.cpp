/*
Problem 22 level 2: Repeated Elements Count In Array

Write a program to read N elements and store them in array then print all array elements and ask for a number to check,
then print how many number a certain element repeated in that array.

Input:
5
Element [1]: 1
Element [2]: 1
Element [3]: 1
Element [4]: 2
Element [5]: 3

Enter the number you want to check: 1

Output:
Original array: 1 1 1 2 3
1 is repeated 3 time(s).
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
void ReadArray(int arr[100], int& arrLength) {

	cout << "\nEnter number of elements:\n";
	cin >> arrLength;
	cout << "\nEnter array elements: \n";

	for (int i = 0; i < arrLength; i++) {

		cout << "Element [" << i + 1 << "] : ";
		cin >> arr[i];

	}
	cout << endl;
}
void PrintArray(int arr[100], int arrLength) {

	for (int i = 0; i < arrLength; i++)
		cout << arr[i] << " ";
	cout << "\n";
}
int TimesRepeated(int Number, int arr[100], int arrLength) {

	int count = 0;

	for (int i = 0; i <= arrLength - 1; i++) {

		if (Number == arr[i]) {
			count++;
		}
	}
	return count;
}
int main() {

	int arr[100], arrLength, NumberToCheck;

	ReadArray(arr, arrLength);

	NumberToCheck = ReadPositiveNumber("Enter the number you want to check: ");

	cout << "\nOriginal array: ";

	PrintArray(arr, arrLength);

	cout << "\nNumber " << NumberToCheck;
	cout << " is repeated ";
	cout << TimesRepeated(NumberToCheck, arr, arrLength) << " time(s)\n";

	return 0;

}


