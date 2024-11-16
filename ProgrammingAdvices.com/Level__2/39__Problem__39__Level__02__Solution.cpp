/*

Problem 39 level 2: Copy Prime Numbers to a new array

Write a program to fill array max size 100 with random numbers from 1 to 100,
copy only prime numbers to anotherarray using AddArrayElement, and print it.

Input:
10

Output:

Array 1 elements:
59 99 69 63 53 53 53 44 22 2

Array 2 Prime numbers:
59 53 53 53 2

*/

#include<iostream>
using namespace std;
enum enPrimNotPrime { Prime = 1, NotPrime = 2 };
enPrimNotPrime CheckPrime(int Number) {

	int M = round(Number / 2);

	for (int Counter = 2; Counter <= M; Counter++)
	{
		if (Number % Counter == 0) return enPrimNotPrime::NotPrime;
	} return enPrimNotPrime::Prime;

}
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
void AddArrayElement(int Number, int arr[100], int& arrLength) {
	//its a new element so we need to add the length by 1 
	arrLength++;
	arr[arrLength - 1] = Number;

}
void CopyPrimeNumbers(int arrSource[100], int arrDestination[100], int arrLength, int& arrDestinationLength) {

	for (int i = 0; i < arrLength; i++)
		if (CheckPrime(arrSource[i]) == enPrimNotPrime::Prime) {
			AddArrayElement(arrSource[i], arrDestination, arrDestinationLength);
		}

}
int main() {
	//Seeds the random number generator in C++, called only once    

	srand((unsigned)time(NULL));

	int arr[100], arrLength = 0, arr2Length = 0;
	int arr2[100];

	FillArrayWithRandomNumbers(arr, arrLength);
	CopyPrimeNumbers(arr, arr2, arrLength, arr2Length);

	cout << "\nArray 1 elements:\n";

	PrintArray(arr, arrLength);

	cout << "\nArray 2 Prime numbers:\n";

	PrintArray(arr2, arr2Length);

	return 0;
}


