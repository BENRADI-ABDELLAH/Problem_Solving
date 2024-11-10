
/*
Problem 24:

Write a program to ask the user to enter :
• Age

If age is between 18 and 45 print “Valid Age” otherwise print
“Invalid Age”

*/

#include <iostream>
#include <string>
using namespace std;
int ReadAge()
{
	int Age;

	cout << "Pleas enter your Age ? \n";
	cin >> Age;

	return Age;
}
bool ValidateNumberInRange(int Number, int From, int To)
{
	return (Number >= From && Number <= To);
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
	PrintResult(ReadAge());
	return 0;
}
