/*

Problem 28 level 2: Copy Array

Writ ap program to fill array with max size 100 with random numbers from to 100, copy it to another array and print it.

Input:
10

Output:
Array 1 elements:
91 1 42 4 12 86 32 94 73 71

Array 2 elements after copy:
91 1 42 4 12 86 32 94 73 71

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
void CopyArray(int arrSource[100], int arrDestination[100], int arrLength) {
	for (int i = 0; i < arrLength; i++)
		arrDestination[i] = arrSource[i];
}
int main() {
	//Seeds the random number generator in C++, called only once    
	srand((unsigned)time(NULL));

	int arr[100], arrLength;

	FillArrayWithRandomNumbers(arr, arrLength);

	int arr2[100];

	CopyArray(arr, arr2, arrLength);

	cout << "\nArray 1 elements:\n";

	PrintArray(arr, arrLength);

	cout << "\nArray 2 elements after copy:\n";

	PrintArray(arr2, arrLength);

	return 0;
}


