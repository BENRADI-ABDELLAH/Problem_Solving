

/*

write a program to read a string then count each word in that string
*/

#include<string>
#include<iostream>
using namespace std;
string  ReadString() {
	string S1;
	cout << "Please Enter Your String?\n";
	getline(cin, S1);
	return S1;
}
short CountWords(string S1) {
	short Counter = 0;
	string delim = " "; // delimiter      
	cout << "\nYour string wrords are: \n\n";
	short pos = 0;
	string sWord; // define a string variable  // use find() function to get the position of the delimiters  
	while ((pos = S1.find(delim)) != std::string::npos) {
		sWord = S1.substr(0, pos); // store the word   
		if (sWord != "") {
			Counter++;
		}
		S1.erase(0, pos + delim.length());  /* erase() until positon and move to next word. */
	}
	if (S1 != "") {
		Counter;
	}

	return Counter;
}
int main() {
	string S1 = ReadString();
	cout << "\nThe number of words in your string is: ";
	cout << CountWords(S1);
	system("pause>0");
}
