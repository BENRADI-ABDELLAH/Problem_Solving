/*
Problem 17:

Write a program to calculate triangle area then print it on the screen.

The use should enter:
a
h

Example Inputs:
10
8

Outputs 
40


*/

#include <iostream>
#include <string>
using namespace std;
void ReadNumbers(float& A, float& H)
{
	cout << "Pleas enter triangle base A ? \n";
	cin >> A;
	cout << "Pleas enter triangle height H ? \n";
	cin >> H;
}
float TriangleArea(float A, float H)
{
	float Area = (A / 2) * H;
	return Area;
}
void PrintResults(float Area)
{
	cout << "\n Triangle Area = " << Area << endl;
}
int main()
{
	float A, H;
	ReadNumbers(A, H);
	PrintResults(TriangleArea(A, H));

	return 0;
}
