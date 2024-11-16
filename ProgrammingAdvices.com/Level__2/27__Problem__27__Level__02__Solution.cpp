/*
Problem 27 level 2: Averge of random Array

Write a program ti fill array with max size 100 with random numbers from 1 to 100, then print average of all number
Input:
10

Output:
Array Elements: 92 89 61 30 81 22 94 36 98 35
Average of all number is : 63.8


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
int SumArray(int arr[100], int arrLength) {

	int Sum = 0;

	for (int i = 0; i < arrLength; i++) {
		Sum += arr[i];
	}

	return Sum;
}
float ArrayAverage(int arr[100], int arrLength) {

	return  (float)SumArray(arr, arrLength) / arrLength;

}
int main() { //Seeds the random number generator in C++, called only once    

	srand((unsigned)time(NULL));

	int arr[100], arrLength;

	FillArrayWithRandomNumbers(arr, arrLength);

	cout << "\nArray Elements: ";

	PrintArray(arr, arrLength);

	cout << "\nAverage of all number is : ";
	cout << ArrayAverage(arr, arrLength) << endl;

	return 0;

}


