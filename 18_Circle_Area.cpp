/*

Problem 18:

Write a program to calculate circle area then print it on the screen.

The use should enter:
r

Example Inputs:
5

Outputs 
78.54

*/


#include <iostream>
#include <string>
using namespace std;
float ReadRadious()
{
	float R;

	cout << "Please enter Radious R ? \n";
	cin >> R;

	return R;
}
float CircleArea(float R)
{

	const float PI = 3.141592653589793238;

	float Area = pow(R, 2) * PI;

	return Area;
}
void PrintResults(float Area)
{

	cout << "\n Circle Area = " << Area << endl;

}
int main()
{
	PrintResults(CircleArea(ReadRadious()));
	return 0;
}

