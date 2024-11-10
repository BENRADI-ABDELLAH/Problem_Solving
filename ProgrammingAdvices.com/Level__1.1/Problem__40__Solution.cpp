/*

Problem 40:
A restaurant charges 10 % services fee and 16 % sales tax.
Write a program to read a BillValue and add service fee and sales tax to it, and print the TotalBill on the
screen.

Input
100

Outputs
127.6

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
float TotalBillAfterServiceAndTax(float TotalBill)
{

	TotalBill *= 1.1;
	TotalBill *= 1.16;

	return TotalBill;

}
void PrintTotalBillAfterServiceAndTax()
{
	float TotalBill = ReadPositiveNumber("Pleas Enter Total Bill?");

	cout << endl;
	cout << "Total Bill = " << TotalBill << endl;
	cout << "Total Bill After service Fee and Sales Tax = "
		<< TotalBillAfterServiceAndTax(TotalBill) << endl;
}
int main()
{
	PrintTotalBillAfterServiceAndTax();
	return 0;
}
