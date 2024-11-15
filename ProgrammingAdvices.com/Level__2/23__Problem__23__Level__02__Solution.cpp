/*
Problem 23 level 2: Fill Array With Random Number From 1 To 100

Write a program to fill array with max size 100 with random dumbers from 1 to 100.

Input:
10

Output:
Array Elements: 92 93 5 59 80 95 53 29 62 100
*/
#include<iostream>
using namespace std;
int RandomNumber(int From, int To) {
	//Function to generate a random number

	int randNum = rand() % (To - From + 1) + From;

	return randNum;

}
void FillArrayWithRandomNumbers(int arr[100], int& arrLength) {

	cout << "\nEnter number of elements:\n";
	cin >> arrLength;

	for (int i = 0; i < arrLength; i++)
		arr[i] = RandomNumber(1, 100);

}
void PrintArray(int arr[100], int arrLength) {

	for (int i = 0; i < arrLength; i++)
		cout << arr[i] << " ";
	cout << "\n";
}
int main() {
	//Seeds the random number generator in C++, called only once    
	srand((unsigned)time(NULL));

	int arr[100], arrLength;

	FillArrayWithRandomNumbers(arr, arrLength);

	cout << "\nArray Elements: ";

	PrintArray(arr, arrLength);

	return 0;
}

