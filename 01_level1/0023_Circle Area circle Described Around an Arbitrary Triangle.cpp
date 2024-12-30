/*

Problem 23:

Write a program to calculate circle area circle described around an arbitrary triangle,
then print it on the screen.

The use should enter:
a
b
C

Example Inputs:
5
6
7

Outputs 
40.088



*/

#include <iostream>
#include <string>
using namespace std;
void ReadTriangleData(float& A, float& B, float& C)
{
	cout << "Pleas enter Triangle Side A ? \n";
	cin >> A;

	cout << "Pleas enter Triangle base B ? \n";
	cin >> B;

	cout << "Pleas enter Triangle Side C ? \n";
	cin >> C;
}
float CircleAreaByTriangle(float A, float B, float C)
{
	const float PI = 3.141592653589793238;
	float P;

	P = (A + B + C) / 2;

	float T;
	T = (A * B * C) / (4 * sqrt(P * (P - A) * (P - B) * (P - C)));

	float Area = PI * pow(T, 2);

	return Area;
}
void PrintResults(float Area)
{
	cout << "\n Circle Area = " << Area << endl;
}
int main()
{
	float A, B, C;
	ReadTriangleData(A, B, C);
	PrintResults(CircleAreaByTriangle(A, B, C));
	return 0;
}
