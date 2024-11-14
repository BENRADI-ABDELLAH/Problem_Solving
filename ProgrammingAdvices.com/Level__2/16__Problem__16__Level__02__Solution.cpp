/*
Problem 16 level 2: All word from aaa to zzz

Write a program to print all words from AAA to ZZZ

Output:
AAA
AAB
AAC
.
.
.
ZZZ
*/


#include<iostream>
#include<string>
using namespace std;
void PrintWordsFromAAAtoZZZ() {

    cout << "\n";
    string word = "";

    for (int i = 65; i <= 90; i++) {

        for (int j = 65; j <= 90; j++) {

            for (int k = 65; k <= 90; k++) {

                word = word + char(i);
                word = word + char(j);
                word = word + char(k);
                cout << word << endl;
                word = "";

            }
        }

        cout << "\n____________________________\n";

    }
}
int main() {

    PrintWordsFromAAAtoZZZ();
    return 0;

}

