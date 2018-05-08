/**
 * CS 202 - HW 1
 * A minimalistic main file
 * Please make sure that your code compiles and runs with this main file
 */
#include "sorting.cpp"
#include "sorting.h"
#include <iostream>

using namespace std;

void display(int arr[], int arrsize){
    for(int i = 0; i < arrsize; i++ )
        cout<<" "<<arr[i]<<endl;
}

int main() {
	int arr[8] = {1, 5, 20, 10, 15, 123, 90, 66};
	int compCount = 0, moveCount = 0;
	
	display(arr,8);
	
	// call insertionSort
	insertionSort(arr, 8, compCount, moveCount);
	display(arr,8);
	// reset counters and call mergeSort
	
	compCount = 0, moveCount = 0;
	mergeSort(arr, 8, compCount, moveCount);
	display(arr,8);
	// reset counters and call quickSort
	
	compCount = 0, moveCount = 0;
	quickSort(arr, 8, compCount, moveCount);
	display(arr,8);
	
	// call performanceAnalysis
	
	performanceAnalysis();

	return 0;
}
