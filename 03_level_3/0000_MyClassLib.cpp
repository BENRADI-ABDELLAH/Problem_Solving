#pragma once
#include<iostream>
using namespace std;

namespace MyClassLib{

	int RandomNumber(int from, int to) {
		
		return rand() % (to- from+ 1) + from;
	
	}

	int RowSum(int arr[3][3],int rowNumber,int cols) {
		int sum = 0;
		for (int i = 0;i < cols;i++) {
			sum += arr[rowNumber][i];
		}

		return sum;
	}
   

}


