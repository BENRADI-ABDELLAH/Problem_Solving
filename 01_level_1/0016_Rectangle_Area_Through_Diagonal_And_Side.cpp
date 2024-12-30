/*
Problem 16:
Write a program to calculate rectangle area through diagonal and side area of
rectangle and print it on the screen.

The use should enter :
a
d

Example Inputs :
5
40

Outputs
198.431

*/


#include <iostream>
#include <string>
using namespace std;
void ReadNumbers(float& A, float& D)
{
	cout << "Pleas enter rectangle Side A ? \n";
	cin >> A;
	cout << "Pleas enter rectangle Diagonal D ? \n";
	cin >> D;
}
float RectangleAreaBySideAndDiagonal(float A, float D)
{
	float Area = A * sqrt(pow(D, 2) - pow(A, 2));
	return Area;
}
void PrintResults(float Area)
{
	cout << "\n Rectangle Area = " << Area << endl;
}
int main()
{
	float A, B;
	ReadNumbers(A, B);
	PrintResults(RectangleAreaBySideAndDiagonal(A, B));
	return 0;
}

