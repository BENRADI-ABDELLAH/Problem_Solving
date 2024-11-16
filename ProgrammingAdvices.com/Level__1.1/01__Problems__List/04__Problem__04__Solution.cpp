/*

Problem 4:

Write a program to ask the user to enter his / her :
    • Age
    • Driver license
    Then Print “Hired” if his\her age is grater than 21 and s / he
    has a driver license, otherwise Print “Rejected”

*/


#include <iostream>
#include<string>
    using namespace std;

struct stInfo {
    int Age;
    bool HasDrinvingLicence;
};

stInfo ReadInfo() {

    stInfo Info;

    cout << "Please enter your age:\n";
    cin >> Info.Age;
    cout << "Do you have driver licence:\n";
    cin >> Info.HasDrinvingLicence;

    return Info;


}

bool isAccepted(stInfo Info) {

    return (Info.Age > 21 && Info.HasDrinvingLicence);

}

void PrintResult(stInfo Info) {

    if (isAccepted(Info))
        cout << "\nHired\n";
    else
        cout << "\nRejected\n";
}
int main()
{

    PrintResult(ReadInfo());
    return 0;
}
