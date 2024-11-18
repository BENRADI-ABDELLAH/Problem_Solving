/*

Problem 50 level 2: MySqrt

Write a program to print Sqrt of numbers, don’t use built in sqrt function.

Input:
25

Output:
My MySqrt Result : 5
C++ sqrt Result: 5

*/

#include<iostream>
using namespace std;

int MySqrt(float Number) {

	return pow(Number, 0.5);

}
float  ReadNumber() {

	float Number;

	cout << "Please enter a number?";
	cin >> Number;

	return Number;

}
int main() {

	float Number = ReadNumber();

	cout << "My MySqrt Result : " << MySqrt(Number) << endl;
	cout << "C++ sqrt Result: " << sqrt(Number) << endl;

	return 0;
}


