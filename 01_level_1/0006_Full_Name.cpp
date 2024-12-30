/*
Problem 6:
Write a program to ask the user to enter :
• First Name
• Last Name

Then Print Full Name on screen.

Example Input :
Abdellah
Benradi

Output
Abdellah Benradi

*/

#include <iostream>
#include<string>
using namespace std;

struct stInfo {
    string FirstName;
    string LastName;
};
stInfo ReadInfo() {

    stInfo Info;

    cout << "Please enter your first name:\n";
    cin >> Info.FirstName;
    cout << "Please enter your last name\n";
    cin >> Info.LastName;

    return Info;

}
string GetFullName(stInfo Info) {

    string fullName = "";

    fullName = Info.FirstName + " " + Info.LastName;

    return fullName;

}

void PrintFullName(string fullName) {
    cout << "\nYour fullName is : " << fullName << endl;
}

int main()
{

    PrintFullName(GetFullName(ReadInfo()));
    return 0;
}

