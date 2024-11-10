/*
	Problem 21:
Write a program to calculate circle area along the circumference, then print it on the screen.

The use should enter:
L

Example Inputs:
20

Outputs 
31.831


*/
#include <iostream>
#include <string>
using namespace std;
float ReadCircumference()
{
	float L;

	cout << "Pleas enter Circumference L ? \n";
	cin >> L;

	return L;
}
float CircleAreaByCircumference(float L)
{
	const float PI = 3.141592653589793238;

	float Area = pow(L, 2) / (PI * 4);

	return Area;
}
void PrintResults(float Area)
{
	cout << "\n Circle Area = " << Area << endl;
}
int main()
{
	PrintResults(CircleAreaByCircumference(ReadCircumference()));
	return 0;
}
