/*

write a program to read a date1, date2 and make a function to calculate the difference in days.

Note: if date2 is less that date1 print the results in minutes

*/
#include<iostream>
using namespace std;
#pragma warning(disable : 4996)
struct stDate { short Year; short Month; short Day; };
bool isLeapYear(short Year) {
	return (Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0);
}
bool IsDate1BeforeDate2(stDate Date1, stDate Date2) {
	return  (Date1.Year < Date2.Year) ? true : ((Date1.Year == Date2.Year) ? (Date1.Month < Date2.Month ? true : (Date1.Month == Date2.Month ? Date1.Day < Date2.Day : false)) : false);
}
short NumberOfDaysInAMonth(short Month, short Year) {
	if (Month < 1 || Month>12) return  0;
	int days[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	return (Month == 2) ? (isLeapYear(Year) ? 29 : 28) : days[Month - 1];
}
bool IsLastDayInMonth(stDate Date) {
	return (Date.Day == NumberOfDaysInAMonth(Date.Month, Date.Year));
}
bool IsLastMonthInYear(short Month) {
	return (Month == 12);
}
stDate IncreaseDateByOneDay(stDate Date) {
	if (IsLastDayInMonth(Date)) {
		if (IsLastMonthInYear(Date.Month)) {
			Date.Month = 1;
			Date.Day = 1;
			Date.Year++;
		}
		else {
			Date.Day = 1;
			Date.Month++;
		}
	}
	else {
		Date.Day++;
	}
	return Date;
}

void SwapDates(stDate& date1, stDate& date2) {
	stDate TempDate;

	TempDate.Year = date1.Year;
	TempDate.Month = date1.Month;
	TempDate.Day = date1.Day;

	date1.Year = date2.Year;
	date1.Month = date2.Month;
	date1.Day = date2.Day;

	date2.Year = TempDate.Year;
	date2.Month = TempDate.Month;
	date2.Day = TempDate.Day;


}
int GetDifferenceInDays(stDate date1, stDate date2, bool includeEndDay = false) {
	int days = 0;
	short swapFlagValue = 1;
	while (!IsDate1BeforeDate2(date1, date2)) {
		SwapDates(date1, date2);
		swapFlagValue = -1;
	}
	while (IsDate1BeforeDate2(date1, date2)) {
		days++;
		date1 = IncreaseDateByOneDay(date1);
	}

	return includeEndDay ? ++days * swapFlagValue : days * swapFlagValue;
}

int CalculateAgeInDays(stDate birthday, stDate toDay) {
	return GetDifferenceInDays(birthday, toDay, true);
}
short ReadDay() {
	short Day;
	cout << "\nPlease enter a Day? ";
	cin >> Day;
	return Day;
}
short ReadMonth() {
	short Month;
	cout << "Please enter a Month? ";
	cin >> Month;
	return Month;
}
short ReadYear() {
	short Year;
	cout << "Please enter a Year? ";
	cin >> Year;
	return Year;
}
stDate ReadFullDate() {
	stDate Date;
	Date.Day = ReadDay();
	Date.Month = ReadMonth();
	Date.Year = ReadYear();
	return Date;
}


int main() {
	stDate Date1 = ReadFullDate();
	stDate Date2 = ReadFullDate();
	cout << "\nDiffrence is: " << GetDifferenceInDays(Date1, Date2) << " Day(s).";
	cout << "\nDiffrence (Including End Day) is: " << GetDifferenceInDays(Date1, Date2, true) << " Day(s).";
	system("pause>0");
	return 0;
}

