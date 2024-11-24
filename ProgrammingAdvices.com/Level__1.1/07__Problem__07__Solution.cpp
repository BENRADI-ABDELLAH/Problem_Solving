/*

Problem 7:
Write a program to ask the user to enter :
• Number

Then Print the “Half of the <Number> is < ? ? ? >”.

Example Inputs :
60
50

Outputs
Half of 60 is 30
Half of 50 is 25

*/

#include <iostream>
#include<string>
using namespace std;

int ReadNumber() {

    int number = 0;

    cout << "PLease enter a number:\n";
    cin >> number;

    return number;
}

float CalculateHAlfNumber(int number) {
    return (float)number / 2;
}

void PrintResults(int number) {

    string Result = "Half of " + to_string(number) + " is " + to_string(CalculateHAlfNumber(number));

    cout << Result;
}

int main()
{
    PrintResults(ReadNumber());
    return 0;

}
