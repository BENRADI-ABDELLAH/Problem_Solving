/*
*
Problem 25:

Write a program to ask the user to enter :
• Age

If age is between 18 and 45 print “Valid Age” otherwise print
“Invalid Age” and re - ask user to enter a valid age.

Note : You should keep asking user to enter a valid age until s / she enters it.

*/

#include <iostream>
#include <string>
using namespace std;
int ReadAge()
{
	int Age;

	cout << "Pleas enter your Age between 18 and 45 ? \n";
	cin >> Age;

	return Age;
}
bool ValidateNumberInRange(int Number, int From, int To)
{
	return (Number >= From && Number <= To);
}
int ReadUntilAgeBetween(int From, int To)
{
	int Age = 0;

	do
	{

		Age = ReadAge();

	} while (!ValidateNumberInRange(Age, From, To));

	return Age;
}
void PrintResult(int Age)
{
	if (ValidateNumberInRange(Age, 18, 45))
		cout << Age << " is a valid age \n";

	else
		cout << Age << " is invalid age \n";
}
int main()
{
	PrintResult(ReadUntilAgeBetween(18, 45));
	return 0;
}
