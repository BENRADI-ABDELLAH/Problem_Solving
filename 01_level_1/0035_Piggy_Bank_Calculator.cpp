/*

Problem 35:

Write a program to ask the user to enter :
• Pennies, Nickels, Dimes, Quarters, Dollars

Then calculate the total pennies, total dollars and print them on screen
giving that :
• Penny = 1
• Nickel = 5
• Dime = 10
• Quarter = 25
• Dollar = 100

Example Inputs :
5, 5, 5, 5, 5

Outputs
705 Pennies
7.05 Dollars


*/
#include <iostream>
#include <string>
using namespace std;

struct stPiggyBankContenet
{
	int Pennies, Nickels, Dimes, Quarters, Dollars;
};

stPiggyBankContenet ReadPiggyBankContenet()
{
	stPiggyBankContenet PiggyBankContenet;

	cout << "Pleas enter a Total Pennies ? \n";
	cin >> PiggyBankContenet.Pennies;

	cout << "Pleas enter a Total Nickels ? \n";
	cin >> PiggyBankContenet.Nickels;

	cout << "Pleas enter a Total Dimes ? \n";
	cin >> PiggyBankContenet.Dimes;

	cout << "Pleas enter a Total Quarters ? \n";
	cin >> PiggyBankContenet.Quarters;

	cout << "Pleas enter a Total Dollars ? \n";
	cin >> PiggyBankContenet.Dollars;


	return PiggyBankContenet;
}

int CalculateTotalPennies(stPiggyBankContenet PiggyBankContenet)
{
	int TotalPennies = 0;

	TotalPennies =
		PiggyBankContenet.Pennies * 1 + PiggyBankContenet.Nickels * 5
		+ PiggyBankContenet.Dimes * 10 + PiggyBankContenet.Quarters * 25
		+ PiggyBankContenet.Dollars * 100;

	return TotalPennies;
}
int main()
{
	int TotalPennies = CalculateTotalPennies(ReadPiggyBankContenet());
	cout << endl << "Total Pennies = " << TotalPennies << endl;
	cout << endl << "Total Dollars = " << (float)TotalPennies / 100 << endl;

	return 0;
}
