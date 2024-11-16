/*

Problem 32 level 2: Copy Array In Reversed Order

Write a program to fill array with max size 100 with random numbers from 1 to 100,
copy it to another array in reverse order and print it.

Input:
10

Output:
Array 1 elements:
33 100 53 76 64 89 9 49 18 21

Array 2 elements after copy:
21 18 49 9 89 64 76 53 100 33

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
void CopyArrayInReverseOrder(int arrSource[100], int arrDestination[100], int arrLength) {

	for (int i = 0; i < arrLength; i++)
		arrDestination[i] = arrSource[arrLength - 1 - i];
}
int main() {
	//Seeds the random number generator in C++, called only once    

	srand((unsigned)time(NULL));

	int arr[100], arrLength;

	FillArrayWithRandomNumbers(arr, arrLength);

	int arr2[100];

	CopyArrayInReverseOrder(arr, arr2, arrLength);

	cout << "\nArray 1 elements:\n";

	PrintArray(arr, arrLength);

	cout << "\nArray 2 elements after copy:\n";

	PrintArray(arr2, arrLength);

	return 0;
}

