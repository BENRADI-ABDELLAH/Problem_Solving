/*

Problem 27:

Write a program to print numbers from N to 1.

Input
10

Outputs
10
9
8
7
6
5
4
3
2
1
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
void PrintRangeFrom1toNum_UsingFor(int Num)
{
	cout << "Range printed using For Statement: \n";

	for (int Counter = Num; Counter >= 1; Counter--)
	{
		cout << Counter << endl;
	}

}
void PrintRangeFrom1toNum_UsingWhile(int Num)
{
	int Counter = Num + 1;

	cout << "Range printed using While Statement: \n";

	while (Counter > 1)
	{

		Counter--;
		cout << Counter << endl;

	}
}
void PrintRangeFrom1toNum_UsingDoWhile(int Num)
{
	int Counter = Num + 1;

	cout << "Range printed using Do While Statement: \n";
	do
	{
		Counter--;
		cout << Counter << endl;

	} while (Counter > 1);
}
int main()
{
	int N = ReadNumber();

	PrintRangeFrom1toNum_UsingWhile(N);
	PrintRangeFrom1toNum_UsingDoWhile(N);
	PrintRangeFrom1toNum_UsingFor(N);

	return 0;

}
