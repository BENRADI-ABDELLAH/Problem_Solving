/*
Problem 9:

Write a program to ask the user to enter :
• Number1, Number2, Number3

Then Print the Sum of entered numbers

Example Inputs :
10
20
30

Outputs
60

*/

#include <iostream>
#include<string>
using namespace std;

void ReadNumbers(int& number1, int& number2, int& number3) {

    cout << "PLease enter your number1:\n";
    cin >> number1;
    cout << "PLease enter your number2:\n";
    cin >> number2;
    cout << "PLease enter your number3:\n";
    cin >> number3;

}

int SumOf3Numbers(int number1, int number2, int number3) {

    int sum = number1 + number2 + number3;

    return sum;
}

void PrintResult(int total) {

    cout << "Sum= " << total;

}



int main()
{
    int number1 = 0, number2 = 0, number3 = 0;
    ReadNumbers(number1, number2, number3);
    PrintResult(SumOf3Numbers(number1, number2, number3));

    return 0;

}


