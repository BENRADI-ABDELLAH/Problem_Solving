/*

Problem 8:

Write a program to ask the user to enter :
• Mark

Then Print the “PASS” if mark >= 50, otherwise print “Fail”

Example Inputs :
45

Outputs
Fail

*/
#include <iostream>
#include<string>
using namespace std;

enum enPassFail { Pass = 1, Fail = 2 };
int ReadMark() {

    int mark = 0;

    cout << "Please enter your mark:\n";
    cin >> mark;

    return mark;
}
enPassFail CheckMark(int mark) {
    if (mark >= 50)
        return enPassFail::Pass;
    else
        return enPassFail::Fail;
}
void PrintResults(int mark) {

    if (CheckMark(mark) == enPassFail::Pass)
        cout << "\nYou Passed\n";
    else
        cout << "\nYou Faild\n";

}




int main()
{
    PrintResults(ReadMark());

    return 0;

}


