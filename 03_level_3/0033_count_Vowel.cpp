/*
write  a program to read a string then count all vowel in that string
*/

#include<string>
#include<iostream>
using namespace std;
string ReadString() {
	string S1;
	cout << "\nPlease Enter a string expression?\n";
	getline(cin, S1);
	return S1;
}
bool IsVowel(char Ch1) {
	Ch1 = tolower(Ch1);
	return ((Ch1 == 'a') || (Ch1 == 'e') || (Ch1 == 'i') || (Ch1 == 'o') || (Ch1 == 'u'));
}

short CountVowels(string S1) {
	int counter = 0;
	for (int i = 0;i < S1.length();i++) {
		if (IsVowel(S1[i]))
			counter++;
	}
	return counter;
}
int main() {
	string S1 = ReadString();
	cout << "\nNumber of vowels is: " << CountVowels(S1);
	system("Pause>0");
}
