/*

Problem 13:
Write a program to ask the user to enter 3 numbers :
	• A
	• B
	• C
Then Print Max number.

Example Inputs :
30
10
20

Outputs
30

*/

#include <iostream>
#include <string>
using namespace std;
void ReadNumbers(int& A, int& B, int& C)
{
	cout << "Pleas enter Number 1 ? \n";
	cin >> A;
	cout << "Pleas enter Number 2 ? \n";
	cin >> B;
	cout << "Pleas enter Number 3 ? \n";
	cin >> C;
}
int MaxOf3Numbers(int A, int B, int C)
{
	if (A > B)
		if (A > C)
			return A;
		else
			return C;
	else
		if (B > C)
			return B;
		else
			return C;
}
void PrintResults(int Max)
{
	cout << "\n The Maximun Number is : " << Max << endl;
}
int main()
{
	int A, B, C;
	ReadNumbers(A, B, C);
	PrintResults(MaxOf3Numbers(A, B, C));
	return 0;
}
