/*

Problem 15:
Write a program to calculate rectangle area and print it on the screen.

Example Inputs :
10
20

Outputs
200

*/

#include <iostream>
#include <string>
using namespace std;
void ReadNumbers(float& A, float& B)
{
	cout << "Pleas enter rectangle Width ? \n";
	cin >> A;
	cout << "Pleas enter rectangle Length ? \n";
	cin >> B;
}
float CalculateRectangleArea(float A, float B)
{
	return A * B;
}
void PrintResults(float Area)
{
	cout << "\n Rectangle Area = " << Area << endl;
}
int main()
{
	float A, B;
	ReadNumbers(A, B);
	PrintResults(CalculateRectangleArea(A, B));

	return 0;
}
