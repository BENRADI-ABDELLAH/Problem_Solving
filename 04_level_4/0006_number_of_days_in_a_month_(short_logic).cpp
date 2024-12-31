/*
write a program to print number of days in a certain month
*/

#include<iostream>
using namespace std;
bool isLeapYear(short Year) {
	// if year is divisible by 4 AND not divisible by 100
	// // OR if year is divisible by 400
	// // then it is a leap year
	return (Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0);
}
short NumberOfDaysInAYear(short Year) {
	return  isLeapYear(Year) ? 366 : 365;
}
short NumberOfHoursInAYear(short Year) {
	return  NumberOfDaysInAYear(Year) * 24;
}
short NumberOfMinutesInAYear(short Year) {
	return  NumberOfHoursInAYear(Year) * 60;
}
short NumberOfSecondsInAYear(short Year) {
	return  NumberOfMinutesInAYear(Year) * 60;
}

short NumberOfDaysInMounth(short mounth, short year) {
	if (mounth < 1 || mounth>12) {
		return 0;
	}

	if (mounth == 2) {
		return isLeapYear(year) ? 29 : 28;
	}

	short arr31Days[7] = { 1,3,5,7,8,10,12 };

	for (short i = 1;i <= 7;i++) {
		if (arr31Days[i - 1] == mounth) {
			return 31;
		}
	}

	return 30;

}
int NumberOfHoursInMounth(short mount, short year) {
	return NumberOfDaysInMounth(mount, year) * 24;
}
int NumberOfMinuteOfMounth(short mounth, short year) {
	return NumberOfHoursInMounth(mounth, year) * 60;
}
int NumberOfSecondInMounth(short mount, short year) {
	return NumberOfMinuteOfMounth(mount, year) * 60;
}
short ReadMounth() {
	short Mounth;
	cout << "\nPlease enter a mounth to check? ";
	cin >> Mounth;


	return Mounth;
}

short ReadYear() {
	short Year;
	cout << "\nPlease enter a year to check? ";
	cin >> Year;


	return Year;
}
int main() {
	short Year = ReadYear();
	short Mounth = ReadMounth();
	cout << "\nNumber of Days    in Mounth [" << Mounth << "] is " << NumberOfDaysInMounth(Mounth, Year);
	cout << "\nNumber of Hours   in Mounth[" << Mounth << "] is " << NumberOfHoursInMounth(Mounth, Year);
	cout << "\nNumber of Minutes in Mounth [" << Mounth << "] is " << NumberOfMinuteOfMounth(Mounth, Year);
	cout << "\nNumber of Seconds in Mounth[" << Mounth << "] is " << NumberOfSecondInMounth(Mounth, Year);
	system("pause>0");
	return 0;
}
