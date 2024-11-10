/*
Problem 41:

Write a program to read a NumberOfHours and calculates the number of weeks, and days included in that
number

Input
365

Outputs
2.17 Weeks
15.20 Days

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
float HoursToDays(float NumberOfHours)
{
	return (float)NumberOfHours / 24;
}
float HoursToWeeks(float NumberOfHours)
{
	return (float)NumberOfHours / 24 / 7;
}
float DaysToWeeks(float NumberOfDays)
{
	return (float)NumberOfDays / 7;
}

void PrintConvertHoursIntoDaysAndWeeks()
{
	float NumberOfHours = ReadPositiveNumber("Pleas Enter Number of Hours? ");
	float HoursOfDays = HoursToDays(NumberOfHours);
	float NumberOfWeeks = DaysToWeeks(HoursOfDays);
	cout << endl;
	cout << "Total Hours = " << NumberOfHours << endl;
	cout << "Total Days = " << HoursOfDays << endl;
	cout << "Total Weeks = " << HoursToWeeks(NumberOfHours) << endl;
}
int main()
{
	PrintConvertHoursIntoDaysAndWeeks();
	Return 0;
}
