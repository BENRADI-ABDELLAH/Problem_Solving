/*

Problem #2

Write a program to ask the use to enter his / her name and
print it on screen.


*/




#include <iostream>
#include<string>
using namespace std;

string ReadName() {

    string name;

    cout << "Please enter your name:\n";
    getline(cin, name);

    return name;

}

void PrintName(string name) {

    cout << "\n Your name is: " << name << endl;

}

int main()
{

    PrintName(ReadName());
    return 0;

}


