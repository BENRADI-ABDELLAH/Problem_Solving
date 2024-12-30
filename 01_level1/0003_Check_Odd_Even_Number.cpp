/*

Problem 3:

Write a program to ask the user to enter a number, then Print “ODD” if its odd, Or “Even” if its even.

*/


#include <iostream>
#include<string>
using namespace std;
enum enNumberType { Odd = 1, Even = 2 };
int ReadNumber() {

    int number = 0;

    cout << "PLease enter a number:\n";
    cin >> number;

    return number;
}

enNumberType CheckNumberType(int number) {

    if (number % 2 == 0)
        return enNumberType::Even;
    else
        return enNumberType::Odd;
}

void printNumberType(enNumberType numberType) {

    if (numberType == enNumberType::Even)
        cout << "\nNumber is even\n";
    else
        cout << "\nNumber is odd\n";
}

int main()
{

    printNumberType(CheckNumberType(ReadNumber()));
    return 0;

}


