/*


Problem 44 level 2: Count Positive Numbers In Array

Write a program to fill array with max size 100 with random numbers from -100 to 100, then print the count of Positive numbers.

Input:
10

Output:

Array Elements: 55 -67 -24 74 -11 32 99 6 -28 26
Positive Numbers count is: 6


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
		arr[i] = RandomNumber(-100, 100);

}
void PrintArray(int arr[100], int arrLength) {

	for (int i = 0; i < arrLength; i++)
		cout << arr[i] << " ";
	cout << "\n";

}
int PositiveCount(int arr[100], int arrLength) {

	int Counter = 0;

	for (int i = 0; i < arrLength; i++) {
		if (arr[i] >= 0) {
			Counter++;
		}
	}

	return Counter;

}
int main() {
	//Seeds the random number generator in C++, called only once    

	srand((unsigned)time(NULL));

	int arr[100], arrLength;

	FillArrayWithRandomNumbers(arr, arrLength);

	cout << "\nArray Elements: ";

	PrintArray(arr, arrLength);

	cout << "\nPositive Numbers count is: ";
	cout << PositiveCount(arr, arrLength) << endl;

	return 0;
}
