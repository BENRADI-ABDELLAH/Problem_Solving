/*

Problem 32:

Write a program to ask the user to enter :
• Number
• M

Then Print the Number ^ M

Example Inputs :
2
4

Outputs
16

*/

#include <iostream>
#include <string>
using namespace std;

int ReadNumber()
{
	int Number;

	cout << "Pleas enter a Number?" << endl;
	cin >> Number;

	return Number;
}

int ReadPower()
{
	int Power;

	cout << "Pleas enter the Power?" << endl;
	cin >> Power;

	return Power;

}
int PowerOfM(int Number, int M)
{
	if (M == 0)
		return 1;


	int P = 1;

	for (int i = 1; i <= M; i++)
	{

		P *= Number;

	}

	return P;
}
int main()
{
	cout << "\nResult = " << PowerOfM(ReadNumber(), ReadPower());

	return 0;
}
