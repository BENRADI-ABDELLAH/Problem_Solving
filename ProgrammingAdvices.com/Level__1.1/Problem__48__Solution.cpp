/*

Problem 48:

Write a program to read a LoanAmount and ask you how many months you need to settle the loan, then
calculate the monthly installment amount.

Input
5000
10

Outputs
500

*/
#include <iostream>
#include <string>
using namespace std;
float ReadPositiveNumber(string Message)
{
	float Number = 0;
	do
	{

		cout << Message << endl;
		cin >> Number;

	} while (Number <= 0);
	return Number;
}
float MonthlyInstallment(float LoanAmiount, float HowManMonths)
{
	return (float)LoanAmiount / HowManMonths;
}
int main()
{
	float LoanAmiount = ReadPositiveNumber("Pleas Enter Loan Amiount ?");
	float HowManMonths = ReadPositiveNumber("How Man Months ?");
	cout << "\n Monthly Installmenty = " << MonthlyInstallment(LoanAmiount, HowManMonths) << endl;

	return 0;
}
