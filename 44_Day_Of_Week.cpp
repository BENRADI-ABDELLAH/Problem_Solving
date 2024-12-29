/*

Problem 44:

Write a program to ask the user to enter :
• Day

Then print the day as follows :
• 1 Print Sunday
• 2 Print Monday
• 3 Print Tuesday
• 4 Print Wednesday
• 5 Print Thursday
• 6 Print Friday
• 7 Print Saturday
• Otherwise print “Wrong Day” and ask the use to enter the day again.

Example Inputs :
6

Outputs
Its Friday


*/
#include <iostream>
#include <string>
using namespace std;
enum enDayOfWeek { Sat = 1, Sun = 2, Mon = 3, Tue = 4, Wed = 5, Thu = 6, Fri = 7 };
struct strTaskDuration
{
	int NumberOfDays, NumberOfHours, NumberOfMinutes, NumberOfSeconds;
};
int ReadNumberInRange(string Message, int From, int To)
{
	float Number = 0;
	do

	{

		cout << Message << endl;
		cin >> Number;

	} while (Number < From || Number > To);

	return Number;
}
enDayOfWeek ReadDayOfWeek()
{
	return (enDayOfWeek)ReadNumberInRange("Pleas enter day number [Sat = 1 , Sun = 2 , Mon =3 , Tue =4 , Wed =5 , Thu = 6 , Fri = 7]?", 1, 7);
}
string GetDayOfWeek(enDayOfWeek Day)
{
	switch (Day)
	{
	case enDayOfWeek::Sat:
		return "Saturday";
	case enDayOfWeek::Sun:
		return "Sunday";
	case enDayOfWeek::Mon:
		return "Munday";
	case enDayOfWeek::Tue:
		return "Tuesday";
	case enDayOfWeek::Wed:
		return "Wednesday";
	case enDayOfWeek::Thu:
		return "Thursday";
	case enDayOfWeek::Fri:
		return "Friday";
	default:
		return "Not a valid Day";
	}
}
int main()
{
	cout << GetDayOfWeek(ReadDayOfWeek()) << endl;
}
