/*
Problem 29:

Write a program to Sum even numbers from 1 to N.

Input
10

Outputs
30
*/
#include <iostream>
#include <string>
using namespace std;

enum enOddOrEven { Odd = 1, Even = 2 };

int ReadNumber()
{
	int Num;

	cout << "Pleas enter a Number ? \n";
	cin >> Num;

	return Num;
}
enOddOrEven CheckOddOrEven(int Number)
{
	if (Number % 2 != 0)
		return enOddOrEven::Odd;
	else
		return enOddOrEven::Even;
}

int SumEvenFrom1toNum_UsingFor(int Num)
{
	int Sum = 0;
	cout << "Sum Even Numbers using For Statement: \n";


	for (int Counter = 1; Counter <= Num; Counter++)
	{

		if (CheckOddOrEven(Counter) == enOddOrEven::Even)
		{

			Sum += Counter;

		}

	}
	return Sum;
}
int SumEvenFrom1toNum_UsingWhile(int Num)
{
	int Counter = 0;
	int Sum = 0;

	cout << "Sum Even Numbers using While Statement: \n";

	while (Counter < Num)
	{
		Counter++;

		if (CheckOddOrEven(Counter) == enOddOrEven::Even)
		{
			Sum += Counter;
		}

	}
	return Sum;
}
int SumEvenFrom1toNum_UsingDoWhile(int Num)
{
	int Counter = 0;
	int Sum = 0;
	cout << "Sum Even Numbers using Do While Statement: \n";
	do
	{
		Counter++;

		if (CheckOddOrEven(Counter) == enOddOrEven::Even)
		{
			Sum += Counter;
		}

	} while (Counter < Num);

	return Sum;
}
int main()
{
	int Num = ReadNumber();

	cout << SumEvenFrom1toNum_UsingFor(Num) << endl;
	cout << SumEvenFrom1toNum_UsingWhile(Num) << endl;
	cout << SumEvenFrom1toNum_UsingDoWhile(Num) << endl;

	return 0;
}
