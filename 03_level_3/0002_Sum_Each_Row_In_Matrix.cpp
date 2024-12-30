/*
Write a program to fill a 3x3 matrix with random numbers, then print each rows sum
*/
#include<iomanip>

#include <iostream>
using namespace std;



int RandomNumber(int from, int to) {

    return rand() % (to - from + 1) + from;

}

int RowSum(int arr[3][3], int rowNumber, int cols) {
    int sum = 0;
    for (int i = 0;i < cols;i++) {
        sum += arr[rowNumber][i];
    }

    return sum;
}

void FillMatrixWithRandomNumbers(int arr[3][3], short rows, short cols) {

    for (int i = 0;i < rows;i++) {
        for (int j = 0;j < cols;j++) {

            arr[i][j] = RandomNumber(1, 100);

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

void PrintColumnsSumOfMatrixRows(int arr[3][3], int rows, int cols) {

    for (int i = 0;i < rows;i++) {
        cout << "Row " << i + 1 << " Sum = " << RowSum(arr, i, 3) << "\n";
    }

}

int main()
{
    srand((unsigned)time(NULL));
    int arr[3][3];

    FillMatrixWithRandomNumbers(arr, 3, 3);

    cout << "\nThe following is 3x3 random matrix: \n";

    PrintMatrix(arr, 3, 3);
    PrintColumnsSumOfMatrixRows(arr, 3, 3);

    return 0;


}
