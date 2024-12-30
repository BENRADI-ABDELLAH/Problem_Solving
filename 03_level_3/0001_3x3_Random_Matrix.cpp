/*
* 
Write a program to fill a 3x3 matrix with rundom numbers from 1 to 100.
*/


#include<iomanip>
#include "MyClassLib.h"

#include <iostream>
using namespace std;


void FillMatrixWithRandomNumbers(int arr[3][3], short rows, short cols) {

    for (int i = 0;i < rows;i++) {
        for (int j = 0;j < cols;j++) {

            arr[i][j] = MyClassLib::RandomNumber(1, 100);

        }

    }

}

void PrintMatrix(int arr[3][3], short rows, short cols) {


    for (int i = 0;i < rows;i++) {
        for (int j = 0;j < cols;j++) {

            cout << setw(3) << arr[i][j] << "  ";

        }
        cout << "\n";

    }

}


int main()
{
    srand((unsigned)time(NULL));
    int arr[3][3];

    FillMatrixWithRandomNumbers(arr, 3, 3);

    cout << "\nThe following is 3x3 random matrix: \n";
    PrintMatrix(arr, 3, 3);

    return 0;


}

