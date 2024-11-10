/* 

Problem 50:

Write a program to read the ATM PIN code from the user, then check if PIN Code = 1234, then show the balance
to user, otherwise print “Wong PIN” and ask the user to enter the PIN again.
Only allow user to enter the PIN 3 times, if fails, print “Card is locked!”
Assume User Balance is 7500.

Input
1234
5151

Outputs
Your Balance is : 7500
Wrong PIN

*/

#include <iostream>
#include <string>
using namespace std;
string ReadPinCode()
{
	string Pincode;
	cout << "Pleas Enter PIN Code \n";
	cin >> Pincode;
	return Pincode;
}
bool Login()
{
	string PinCode;
	int Counter = 3;

	do
	{
		Counter--;
		PinCode = ReadPinCode();

		if (PinCode == "1234")
		{
			return true;
		}
		else
		{
			cout << "\nWrong PIN , you have " << Counter << " more tries \n";
			system("color 4F");
		}
	} while (PinCode != "1234" && Counter >= 1);


	return false;
}
int main()
{
	if (Login())
	{
		system("color 2F");

		cout << "\n Your account balance is " << 7500 << '\n';
	}
	else
	{
		cout << "\n Your card blocked call the bank for help. \n";
	}

	return 0;
}
