/*

Problem 42:

Write a program to calculate the task duration in seconds and print it on screen
 Given the time duration of a task in the number of days, hours, minutes, and seconds, .

Input
2
5
45
35

Outputs
193, 535 Seconds


*/
#include <iostream>
#include <string>
using namespace std;
struct strTaskDuration
{
	int NumberOfDays, NumberOfHours, NumberOfMinutes, NumberOfSeconds;
};
int ReadPositiveNumber(string Message)
{
	float Number = 0;
	do
	{

		cout << Message << endl;
		cin >> Number;

	} while (Number <= 0);

	return Number;
}
strTaskDuration ReadTaskDuration()
{
	strTaskDuration TaskDuration;
	TaskDuration.NumberOfDays = ReadPositiveNumber("Pleas Enter Number Of Days ? ");
	TaskDuration.NumberOfHours = ReadPositiveNumber("Pleas Enter Number Of Hours ? ");
	TaskDuration.NumberOfMinutes = ReadPositiveNumber("Pleas Enter Number Of Minutes ? ");
	TaskDuration.NumberOfSeconds = ReadPositiveNumber("Pleas Enter Number Of Seconds ? ");

	return TaskDuration;
}
int TaskDurationInSeconds(strTaskDuration TaskDuration)
{
	int DurationInSeconds = 0;
	DurationInSeconds = TaskDuration.NumberOfDays * 24 * 60 * 60;
	DurationInSeconds += TaskDuration.NumberOfHours * 60 * 60;
	DurationInSeconds += TaskDuration.NumberOfMinutes * 60;
	DurationInSeconds += TaskDuration.NumberOfSeconds;

	return DurationInSeconds;
}
int main()
{
	cout << endl << "Task Duration In Seconds : " << TaskDurationInSeconds(ReadTaskDuration()) << endl;
	return 0;
}
