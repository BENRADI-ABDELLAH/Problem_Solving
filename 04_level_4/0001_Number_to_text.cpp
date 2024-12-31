/*
	write a program to read a number and print the text of that number

		exemple:
			input : 5843
			output: Five thousands eight hundreds forty three
*/

#include<iostream>
#include<string>
using namespace std;
#include<cstdint>


string NumberToText(int Number) {

	if (Number == 0) {
		return"";
	}

	if (Number >= 1 && Number <= 19) {
		string arr[] = { "", "One","Two","Three","Four","Five","Six","Seven", "Eight","Nine","Ten",
			"Eleven","Twelve","Thirteen","Fourteen", "Fifteen","Sixteen","Seventeen","Eighteen","Nineteen" };
		return  arr[Number] + " ";
	}

	if (Number >= 20 && Number <= 99) {
		string arr[] = { "","","Twenty","Thirty","Forty","Fifty","Sixty","Seventy","Eighty","Ninety" };
		return  arr[Number / 10] + " " + NumberToText(Number % 10);
	}

	if (Number >= 100 && Number <= 199) {
		return"One Hundred " + NumberToText(Number % 100);
	}
	if (Number >= 200 && Number <= 999) {
		return   NumberToText(Number / 100) + "Hundred " + NumberToText(Number % 100);
	}

	if (Number >= 1000 && Number <= 1999) {
		return"One Thousand " + NumberToText(Number % 1000);
	}
	if (Number >= 2000 && Number <= 999999) {
		return   NumberToText(Number / 1000) + "Thousands " + NumberToText(Number % 1000);
	}

	if (Number >= 1000000 && Number <= 1999999) {
		return"One Million " + NumberToText(Number % 1000000);
	}
	if (Number >= 2000000 && Number <= 999999999) {
		return   NumberToText(Number / 1000000) + "Millions " + NumberToText(Number % 1000000);
	}



	if (Number >= 1000000000 && Number <= 1999999999) {
		return"One Billion " + NumberToText(Number % 1000000000);
	}
	else if (Number >= 2000000000 && Number <= 999999999999) {
		return  "--" + NumberToText(Number / 1000000000) + "Billions " + NumberToText(Number % 1000000000);
	}


}

int ReadNumber() {

	int Number;

	cout << "\nEnter a Number? ";
	cin >> Number;

	return Number;
}

int main() {

	char again;

	do {
		cout << NumberToText(ReadNumber());


		cout << "\n\n\n\nRetry... Y/N?";
		cin >> again;

	} while (tolower(again) == 'y');

	system("pause>0");
	return 0;
}
