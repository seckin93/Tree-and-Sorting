/**
* Title : Algorithm Efficiency and Sorting
* Author : Abdullah Seçkin Özdil
* ID: 21201929
* Section : 1
* Assignment : 1
* Description : This file include given sorting methods and time
*/

#include "sorting.h"
#include <iostream>
#include<cstdlib>
#include <ctime>
#include <fstream>

using namespace std;

//This part belongs to insertion sort method and I took this part from book and lecture's slide
void insertionSort(int *arr, int size, int &compCount, int &moveCount){
	int unsorted, loc, nextItem;
          
	for(unsorted = 1; unsorted < size; unsorted++){
		nextItem = arr[unsorted];
		loc = unsorted;
	
		while((loc > 0) && ( arr[loc-1] > nextItem)){
			arr[loc] = arr[loc-1];
			loc--;
			compCount++;
            moveCount ++;
		}
		arr[loc] = nextItem;
		moveCount+=3;
        compCount++;
	}
}
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------

//This part belongs to merge sort and I took this part from book and lecture's slide
void merge(int theArray[], int first, int mid, int last, int MAX_SIZE, int &compCount, int &moveCount){
	int tempArray[MAX_SIZE];
	
	int first1 = first;
	int last1 = mid;
	int first2 = mid + 1;
	int last2 = last;
	
	int index = first1;
	
	for (;(first1 <= last1) && (first2 <= last2); ++index) {
		compCount = compCount +2;
      	if (theArray[first1] < theArray[first2]) {  
        	tempArray[index] = theArray[first1];
        	compCount++;
         	moveCount++;
         	++first1;
      	}
      	else {  
          	tempArray[index] = theArray[first2];
          	moveCount++;
          	++first2;
      	}
    	//index++;
   }
   
   for (; first1 <= last1; ++first1, ++index){
   		tempArray[index] = theArray[first1];
      	moveCount++;
      	compCount++;
   }
      	
   for (;first2 <= last2; ++first2, ++index){
   		tempArray[index] = theArray[first2];
      	moveCount++;
      	compCount++;
   }

   for (index = first; index <= last; ++index){
   		theArray[index] = tempArray[index];
		moveCount++;
      	compCount++; 
   }
	
}

void mSort(int arr[], int first, int last, int arrSize, int &compCount, int &moveCount){
	if (first < last) {
        
		compCount++;
      	int mid = (first + last)/2; 	

      	mSort(arr, first, mid, arrSize, compCount, moveCount);
      	mSort(arr, mid+1, last, arrSize, compCount, moveCount);

      	merge(arr, first, mid, last, arrSize, compCount, moveCount);
    }
}

void mergeSort(int *arr, int size, int &compCount, int &moveCount){
	mSort( arr, 0, size-1, size, compCount, moveCount);
}

//---------------------------------------------------------------------------
//---------------------------------------------------------------------------

//This part belongs to quck sort method and I took this part from book and lecture's slide

void swapp(int &x, int &y) {
   int temp = x;
   x = y;
   y = temp;
}

void partion(int theArray[], int first, int last, int &pivotIndex, int &compCount, int &moveCount){
	
	int pivot = theArray[last+1]; //pivot is last element of array given in question
  	moveCount++;
	
	int lastS1 = first;           
   	int firstUnknown = first + 1;
	
	for (  ; firstUnknown <= last; ++firstUnknown) {
		compCount++;
      	if (theArray[firstUnknown] < pivot) {  	// belongs to S1
		  	++lastS1;
		  	moveCount+=3;
		  	compCount++;
    	  	swap(theArray[firstUnknown], theArray[lastS1]);
		}	
	}
   	swap(theArray[first], theArray[lastS1]);
   	moveCount+=3;
   	pivotIndex = lastS1;
}

void qSort(int theArray[], int first, int last, int &compCount, int &moveCount){
	
	int pivotIndex;
	if (first < last) {
      	compCount++;
      	partion(theArray, first, last, pivotIndex, compCount, moveCount);

      	qSort(theArray, first, pivotIndex-1, compCount, moveCount);
      	qSort(theArray, pivotIndex+1, last, compCount, moveCount);
   }
}

void quickSort(int *arr, int size, int &compCount, int &moveCount){
    qSort( arr,0, size-1, compCount, moveCount);
}

//---------------------------------------------------------------------------
//---------------------------------------------------------------------------

void reverseArray(int * arr, int arrSize){ //This method will be using to create descending order arrays
    int temp = arrSize-1;
    for(int i = 0; i < arrSize/2; i++){
        swapp(arr[i],arr[temp--]);
    }
}

//This part belongs to performance analysis part

void performanceAnalysis(){
	//These are the sizes of arrays which will be using for sort's calculation times
	int s1 = 1000; 
	int s2 = 10000; 
	int s3 = 20000; 

	//Here, creating arays for each sort and their duration variables
	//Insertion Sort
	int *arr1 = new int[s1];
	double duration1;
	int *arr2 = new int[s2];
	double duration2;
	int *arr3 = new int[s3];
	double duration3;
	
	//Merge Sort
	int *arr4 = new int[s1];
	double duration4;
	int *arr5 = new int[s2];
	double duration5;
	int *arr6 = new int[s3];
	double duration6;
		
	//Quick Sort
	int *arr7 = new int[s1];
	double duration7;
	int *arr8 = new int[s2];
	double duration8;
	int *arr9 = new int[s3];
	double duration9;
	
	for(int i = 0; i < 1000; i++)
		arr1[i] = rand()%1000+1;
	for(int i = 0; i < 10000; i++)
		arr2[i] = rand()%10000+1;
	for(int i = 0; i < 20000; i++)
		arr3[i] = rand()%20000+1;
		
	for(int i = 0; i < 1000; i++)
		arr4[i] = arr1[i];
	for(int i = 0; i < 10000; i++)
		arr5[i] = arr2[i];
	for(int i = 0; i < 20000; i++)
		arr6[i] = arr3[i];
	
	for(int i = 0; i < 1000; i++)
		arr7[i] = arr1[i];
	for(int i = 0; i < 10000; i++)
		arr8[i] = arr2[i];
	for(int i = 0; i < 20000; i++)
		arr9[i] = arr3[i];
		
	
	clock_t startTime = clock();
	int cCountArr1, mCountArr1 = 0;
	insertionSort(arr1, 1000, cCountArr1, mCountArr1);
	duration1 = 1000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
	
	startTime = clock();
	int cCountArr2, mCountArr2 = 0;
	insertionSort(arr2, 10000, cCountArr2, mCountArr2);
	duration2 = 1000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
	
	startTime = clock();
	int cCountArr3, mCountArr3 = 0;
	insertionSort(arr3, 20000, cCountArr3, mCountArr3);
	duration3 = 1000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
	
	startTime = clock();
	int cCountArr4, mCountArr4 = 0;
	mergeSort(arr4, 1000, cCountArr4, mCountArr4);
	duration4 = 1000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
	
	startTime = clock();
	int cCountArr5, mCountArr5 = 0;
	mergeSort(arr5, 10000, cCountArr5, mCountArr5);
	duration5 = 1000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
	
	startTime = clock();
	int cCountArr6, mCountArr6 = 0;
	mergeSort(arr6, 20000, cCountArr6, mCountArr6);
	duration6 = 1000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
	
	startTime = clock();
	int cCountArr7, mCountArr7 = 0;
	quickSort(arr7, 1000, cCountArr7, mCountArr7);
	duration7 = 1000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
	
	startTime = clock();
	int cCountArr8, mCountArr8 = 0;
	quickSort(arr8, 10000, cCountArr8, mCountArr8);
	duration8 = 1000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
	
	startTime = clock();
	int cCountArr9, mCountArr9 = 0;
	quickSort(arr9, 20000, cCountArr9, mCountArr9);
	duration9 = 1000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
	
	cout<<"Part b1 - Performance analysis of random integers array"<<endl;
    cout<<"----------------------------------------------------------"<<endl;
    cout<<"                 Elapsed Time compCount moveCount"<<endl;
    cout<<"Array Size: 1000 "<<endl;
    cout<<"Insertion Sort:    "<<duration1<<"          "<< cCountArr1<<"       "<<mCountArr1<<endl;
    cout<<"Merge Sort:        "<<duration4<<"          "<< cCountArr4<<"       "<<mCountArr4<<endl;
    cout<<"Quick Sort:        "<<duration7<<"          "<< cCountArr7<<"       "<<mCountArr7<<endl;
    cout<<"----------------------------------------------------------"<<endl;
    cout<<"                 Elapsed Time compCount moveCount"<<endl;
    cout<<"Array Size: 10000 "<<endl;
    cout<<"Insertion Sort:    "<<duration2<<"          "<< cCountArr2<<"       "<<mCountArr2<<endl;
    cout<<"Merge Sort:        "<<duration5<<"          "<< cCountArr5<<"       "<<mCountArr5<<endl;
    cout<<"Quick Sort:        "<<duration8<<"          "<< cCountArr8<<"       "<<mCountArr8<<endl;
    cout<<"----------------------------------------------------------"<<endl;
    cout<<"                 Elapsed Time compCount moveCount"<<endl;
    cout<<"Array Size: 20000"<<endl;
    cout<<"Insertion Sort:    "<<duration3<<"          "<< cCountArr3<<"       "<<mCountArr3<<endl;
    cout<<"Merge Sort:        "<<duration6<<"          "<< cCountArr6<<"       "<<mCountArr6<<endl;
    cout<<"Quick Sort:        "<<duration9<<"          "<< cCountArr9<<"       "<<mCountArr9<<endl;
    cout<<"----------------------------------------------------------"<<endl;
    
    //For part b2, we can use sorted arrays
    cCountArr1 = 0;
	mCountArr1 = 0;
    startTime = clock();
	insertionSort(arr1, 1000, cCountArr1, mCountArr1);
	duration1 = 1000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
	
	cCountArr2 = 0;
	mCountArr2 = 0;
	startTime = clock();
	insertionSort(arr2, 10000, cCountArr2, mCountArr2);
	duration2 = 1000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
	
	cCountArr3 = 0;
	mCountArr3 = 0;
	startTime = clock();
	insertionSort(arr2, 20000, cCountArr3, mCountArr3);
	duration3 = 1000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
	
	cCountArr4 = 0;
	mCountArr4 = 0;
	startTime = clock();
	mergeSort(arr4, 1000, cCountArr4, mCountArr4);
	duration4 = 1000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
	
	cCountArr5 = 0;
	mCountArr5 = 0;
	startTime = clock();
	mergeSort(arr5, 10000, cCountArr5, mCountArr5);
	duration5 = 1000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
	
	cCountArr6 = 0;
	mCountArr6 = 0;
	startTime = clock();
	mergeSort(arr6, 20000, cCountArr6, mCountArr6);
	duration6 = 1000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
	
	cCountArr7 = 0;
	mCountArr7 = 0;
	startTime = clock();
	quickSort(arr7, 1000, cCountArr7, mCountArr7);
	duration7 = 1000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
	
	cCountArr8 = 0;
	mCountArr8 = 0;
	startTime = clock();
	quickSort(arr8, 10000, cCountArr8, mCountArr8);
	duration8 = 1000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
	
	cCountArr9 = 0;
	mCountArr9 = 0;
	startTime = clock();
	quickSort(arr9, 20000, cCountArr9, mCountArr9);
	duration9 = 1000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
	
	cout<<"Part b2 - Performance analysis of ascending  integers array"<<endl;
    cout<<"----------------------------------------------------------"<<endl;
    cout<<"                 Elapsed Time compCount moveCount"<<endl;
    cout<<"Array Size: 1000 "<<endl;
    cout<<"Insertion Sort:    "<<duration1<<"          "<< cCountArr1<<"       "<<mCountArr1<<endl;
    cout<<"Merge Sort:        "<<duration4<<"          "<< cCountArr4<<"       "<<mCountArr4<<endl;
    cout<<"Quick Sort:        "<<duration7<<"          "<< cCountArr7<<"       "<<mCountArr7<<endl;
    cout<<"----------------------------------------------------------"<<endl;
    cout<<"                 Elapsed Time compCount moveCount"<<endl;
    cout<<"Array Size: 10000 "<<endl;
    cout<<"Insertion Sort:    "<<duration2<<"          "<< cCountArr2<<"       "<<mCountArr2<<endl;
    cout<<"Merge Sort:        "<<duration5<<"          "<< cCountArr5<<"       "<<mCountArr5<<endl;
    cout<<"Quick Sort:        "<<duration8<<"          "<< cCountArr8<<"       "<<mCountArr8<<endl;
    cout<<"----------------------------------------------------------"<<endl;
    cout<<"                 Elapsed Time compCount moveCount"<<endl;
    cout<<"Array Size: 20000"<<endl;
    cout<<"Insertion Sort:    "<<duration3<<"          "<< cCountArr3<<"       "<<mCountArr3<<endl;
    cout<<"Merge Sort:        "<<duration6<<"          "<< cCountArr6<<"       "<<mCountArr6<<endl;
    cout<<"Quick Sort:        "<<duration9<<"          "<< cCountArr9<<"       "<<mCountArr9<<endl;
    cout<<"----------------------------------------------------------"<<endl;
    
    //For part b3, we can reverse already sorted arrays
    reverseArray(arr1,1000);
    reverseArray(arr4,1000);
    reverseArray(arr7,1000);
    reverseArray(arr2,10000);
    reverseArray(arr5,10000);
    reverseArray(arr8,10000);
    reverseArray(arr3,20000);
    reverseArray(arr6,20000);
    reverseArray(arr9,20000);
    
    cCountArr1 = 0;
	mCountArr1 = 0;
    startTime = clock();
	insertionSort(arr1, 1000, cCountArr1, mCountArr1);
	duration1 = 1000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
	
	cCountArr2 = 0;
	mCountArr2 = 0;
	startTime = clock();
	insertionSort(arr2, 10000, cCountArr2, mCountArr2);
	duration2 = 1000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
	
	cCountArr3 = 0;
	mCountArr3 = 0;
	startTime = clock();
	insertionSort(arr2, 20000, cCountArr3, mCountArr3);
	duration3 = 1000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
	
	cCountArr4 = 0;
	mCountArr4 = 0;
	startTime = clock();
	mergeSort(arr4, 1000, cCountArr4, mCountArr4);
	duration4 = 1000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
	
	cCountArr5 = 0;
	mCountArr5 = 0;
	startTime = clock();
	mergeSort(arr5, 10000, cCountArr5, mCountArr5);
	duration5 = 1000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
	
	cCountArr6 = 0;
	mCountArr6 = 0;
	startTime = clock();
	mergeSort(arr6, 20000, cCountArr6, mCountArr6);
	duration6 = 1000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
	
	cCountArr7 = 0;
	mCountArr7 = 0;
	startTime = clock();
	quickSort(arr7, 1000, cCountArr7, mCountArr7);
	duration7 = 1000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
	
	cCountArr8 = 0;
	mCountArr8 = 0;
	startTime = clock();
	quickSort(arr8, 10000, cCountArr8, mCountArr8);
	duration8 = 1000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
	
	cCountArr9 = 0;
	mCountArr9 = 0;
	startTime = clock();
	quickSort(arr9, 20000, cCountArr9, mCountArr9);
	duration9 = 1000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
	
	cout<<"Part b3 - Performance analysis of descending  integers array"<<endl;
    cout<<"----------------------------------------------------------"<<endl;
    cout<<"                 Elapsed Time compCount moveCount"<<endl;
    cout<<"Array Size: 1000 "<<endl;
    cout<<"Insertion Sort:    "<<duration1<<"          "<< cCountArr1<<"       "<<mCountArr1<<endl;
    cout<<"Merge Sort:        "<<duration4<<"          "<< cCountArr4<<"       "<<mCountArr4<<endl;
    cout<<"Quick Sort:        "<<duration7<<"          "<< cCountArr7<<"       "<<mCountArr7<<endl;
    cout<<"----------------------------------------------------------"<<endl;
    cout<<"                 Elapsed Time compCount moveCount"<<endl;
    cout<<"Array Size: 10000 "<<endl;
    cout<<"Insertion Sort:    "<<duration2<<"          "<< cCountArr2<<"       "<<mCountArr2<<endl;
    cout<<"Merge Sort:        "<<duration5<<"          "<< cCountArr5<<"       "<<mCountArr5<<endl;
    cout<<"Quick Sort:        "<<duration8<<"          "<< cCountArr8<<"       "<<mCountArr8<<endl;
    cout<<"----------------------------------------------------------"<<endl;
    cout<<"                 Elapsed Time compCount moveCount"<<endl;
    cout<<"Array Size: 20000"<<endl;
    cout<<"Insertion Sort:    "<<duration3<<"          "<< cCountArr3<<"       "<<mCountArr3<<endl;
    cout<<"Merge Sort:        "<<duration6<<"          "<< cCountArr6<<"       "<<mCountArr6<<endl;
    cout<<"Quick Sort:        "<<duration9<<"          "<< cCountArr9<<"       "<<mCountArr9<<endl;
    cout<<"----------------------------------------------------------"<<endl;
    /*
   	delete arr1;
   	delete arr2;
   	delete arr3;
	delete arr4;
	delete arr5;
	delete arr6;
	delete arr7;
	delete arr8;
	delete arr9;
	*/
	//**************************************************************************************
	//**************************************************************************************
}








