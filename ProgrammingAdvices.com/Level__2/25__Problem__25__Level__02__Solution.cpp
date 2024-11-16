/*

Problem 25 level 2: Min of random Array

Write a program to fill array with max size 100 with random numbers 1 to 100, then print Minimum Number

Input:
10

Output:
Array Elements: 53 15 39 24 84 18 79 53 23 11
Min Number is : 11


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
int MinNumberInArray(int arr[100], int arrLength) {

	int Min = 0;

	Min = arr[0];

	for (int i = 0; i < arrLength; i++) {

		if (arr[i] < Min) {
			Min = arr[i];
		}
	}

	return Min;
}
int main() {
	//Seeds the random number generator in C++, called only once    

	srand((unsigned)time(NULL));

	int arr[100], arrLength;

	FillArrayWithRandomNumbers(arr, arrLength);

	cout << "\nArray Elements: ";

	PrintArray(arr, arrLength);

	cout << "\nMin Number is : ";
	cout << MinNumberInArray(arr, arrLength) << endl;

	return 0;
}

