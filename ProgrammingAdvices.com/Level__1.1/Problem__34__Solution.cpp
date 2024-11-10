/*
Problem 34:

Write a program to ask the user to enter :
• TotalSales

The commission is calculated as one percentage * the total sales amount, all you need is to decide which percentage
to use of the following :
• > 1000, 000  Percentage is 1 %
• > 500K to 1M  Percentage is 2 %
• > 100K – 500K  Percentage is 3 %
• > 50K to 100K  Percentage is 5 %
• Otherwise  Percentage is 0 %

Example Inputs :
110, 000

Outputs
3, 300

*/

#include <iostream>
#include <string>
using namespace std;

int ReadTotalSales()
{
	int TotalSales;

	cout << "Pleas enter a Total Sales ? \n";
	cin >> TotalSales;

	return TotalSales;
}
float GetComissionPercentage(float TotalSales)
{
	if (TotalSales >= 1000000)
		return 0.01;
	else if (TotalSales >= 500000)
		return 0.02;
	else if (TotalSales >= 100000)
		return 0.03;
	else if (TotalSales >= 50000)
		return 0.05;
	else
		return 0.00;
}
float CalculateTotalComission(float TotalSales)
{
	return GetComissionPercentage(TotalSales) * TotalSales;
}
int main()
{
	float TotalSales = ReadTotalSales();

	cout << endl << "Comission Percentage = " << GetComissionPercentage(TotalSales) << endl;
	cout << endl << "Total Comission = " << CalculateTotalComission(TotalSales) << endl;
	return 0;
}
