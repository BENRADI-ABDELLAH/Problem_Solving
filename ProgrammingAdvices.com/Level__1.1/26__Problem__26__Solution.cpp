/*
Problem 26:
Write a program to print numbers from 1 to N.

Input
10

Outputs
1
2
3
4
5
6
7
8
9
10

*/

#include <iostream>
#include <string>
using namespace std;
int ReadNumber()
{
	int Num;

	cout << "Pleas enter your Number ? \n";
	cin >> Num;

	return Num;
}
void PrintRangeFrom1toNum_UsingFor(int N)
{
	cout << "Range printed using For Statement: \n";

	for (int Counter = 1; Counter <= N; Counter++)
	{

		cout << Counter << endl;

	}
}
void PrintRangeFrom1toNum_UsingWhile(int N)
{
	int Counter = 0;

	cout << "Range printed using While Statement: \n";

	while (Counter < N)
	{

		Counter++;
		cout << Counter << endl;

	}
}
void PrintRangeFrom1toNum_UsingDoWhile(int N)
{
	int Counter = 0;

	cout << "Range printed using Do While Statement: \n";

	do
	{
		Counter++;
		cout << Counter << endl;

	} while (Counter < N);
}
int main()
{
	int N = ReadNumber();

	PrintRangeFrom1toNum_UsingWhile(N);
	PrintRangeFrom1toNum_UsingDoWhile(N);
	PrintRangeFrom1toNum_UsingFor(N);

	return 0;

}
