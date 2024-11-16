
/*
        Problem 1:
        
        Write a program to print your name on screen.

*/


#include <iostream>
#include<string>
using namespace std;

void PrintArray(string arr[], int lenght) {

    for (int i = 0;i < lenght;i++) {
        for (int j = 0;j < lenght;j++) {


            cout << arr[i][j];
            cout << "\n";
        }
    }


}



int main()
{

    string maghrebCountry[3] = { "Maroc","algerie","tunisie" };// [@1][@2][@3]
    string euroCountry[3] = { "espagne","portugal","france" };
    string americainCountry[3] = { "usa","argentine","brazil" };

    string* allArr[3] = { maghrebCountry ,euroCountry ,americainCountry };
    //PrintArray(  maghrebCountry, 3);

    string T[2][3] = { {"l1.c1","l1.c2","l1.c3"},{"l2.c1","l2.c2","l2.c3"} };

    
    cout << T[0][1];
    

    return 0;

}
/*

Problem 41 level 2: Is Palindrome Array

Write a program to fill array with numbers then check if it is Palindrome array or not,

 Note: Palindrome array can be read the same from right to left and from left to right.

Input:
10 20 30 30 20 10

Output:

Array Elements:
10 20 30 30 20 10

Yes array is Palindrome


*/

#include<iostream>
using namespace std;
void FillArray(int arr[100], int& arrLength) {
	// 10 20 30 30 20 10
	arrLength = 6;
	arr[0] = 10;
	arr[1] = 20;
	arr[2] = 30;
	arr[3] = 30;
	arr[4] = 20;
	arr[5] = 10;
}
void PrintArray(int arr[100], int arrLength) {

	for (int i = 0; i < arrLength; i++)
		cout << arr[i] << " ";
	cout << "\n";
}
bool IsPalindromeArray(int arr[100], int Length) {

	for (int i = 0; i < Length; i++) {

		if (arr[i] != arr[Length - i - 1]) {
			return false;
		}
	};
	return true;
}
int main() {

	int arr[100], Length = 0;

	FillArray(arr, Length);

	cout << "\nArray Elements:\n";

	PrintArray(arr, Length);

	if (IsPalindromeArray(arr, Length))
		cout << "\nYes array is Palindrome\n";
	else        cout << "\nNO array is NOT Palindrome\n";

	return 0;
}


