/*

Problem 12:

Write a program to ask the user to enter :
• Number1, Number2

Then Print the Max Number

Example Inputs :
10
20

Outputs
20

*/
#include <iostream>
#include <string>
using namespace std;
void ReadNumbers(int& Num1, int& Num2)
{
	cout << "Please enter Number 1 ? \n";
	cin >> Num1;
	cout << "Please enter Number 2 ? \n";
	cin >> Num2;
}
int MaxOf2Numbers(int Num1, int Num2)
{
	if (Num1 > Num2)
		return Num1;
	else
		return Num2;
}
void PrintResults(int Max)
{
	cout << "\n The Maximun Number is : " << Max << endl;
}
int main()
{
	int Num1, Num2;
	ReadNumbers(Num1, Num2);
	PrintResults(MaxOf2Numbers(Num1, Num2));

	return 0;
}
