/*

Problem 49 level 2: MyCeil

Write a program to print Ceil of numbers, don’t use built in Ceil function.

Input:
10.7

Output:
My MyCeil Result : 11
C++ ceil Result: 11
*/

#include<iostream>
using namespace std;

float GetFractionPart(float Number) {

	return Number - int(Number);

}

int MyCeil(float Number) {

	if (abs(GetFractionPart(Number)) > 0)
		if (Number > 0)
			return int(Number) + 1;
		else
			return int(Number);
	else return Number;

}
float  ReadNumber() {

	float Number;

	cout << "Please enter a number?";
	cin >> Number;

	return Number;

}
int main() {

	float Number = ReadNumber();

	cout << "My MyCeil Result : " << MyCeil(Number) << endl;
	cout << "C++ ceil Result: " << ceil(Number) << endl;

	return 0;
}
