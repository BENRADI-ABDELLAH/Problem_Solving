/*
Problem 5:
Write a program to ask the user to enter his / her :
    • Age
    • Driver license
    • Has Recommendation!
    Then Print “Hired” if his\her age is grater than 21 and s / he has a driver license,
    otherwise Print “Rejected” Or Hire him\her without conditions!
*/

#include <iostream>
#include<string>
    using namespace std;

struct stInfo {
    int Age;
    bool HasDrinvingLicence;
    bool HasRocommendation;
};

stInfo ReadInfo() {

    stInfo Info;

    cout << "Please enter your age:\n";
    cin >> Info.Age;
    cout << "Do you have driver licence:\n";
    cin >> Info.HasDrinvingLicence;
    cout << "Do you have recommendation:\n";
    cin >> Info.HasRocommendation;

    return Info;

}

bool isAccepted(stInfo Info) {

    if (Info.HasRocommendation)
        return true;
    else
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

