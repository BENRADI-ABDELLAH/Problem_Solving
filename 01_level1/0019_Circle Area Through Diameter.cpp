/*

Problem 19:

Write a program to calculate circle area through diameter, then print it on the screen.

The use should enter:
D

Example Inputs:
10

Outputs 
78.54


*/

#include <iostream>
#include <string>
using namespace std;
float ReadDiameter()
{
	float D;

	cout << "Pleas enter Radious D ? \n";
	cin >> D;

	return D;
}
float CircleAreaByDiameter(float D)
{
	const float PI = 3.141592653589793238;

	float Area = (pow(D, 2) * PI) / 4;

	return Area;
}
void PrintResults(float Area)
{
	cout << "\n Circle Area = " << Area << endl;
}
int main()
{
	PrintResults(CircleAreaByDiameter(ReadDiameter()));
	return 0;
}

