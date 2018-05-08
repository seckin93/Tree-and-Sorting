/**
*Title:BinarySearchTrees
*Author: Abdullah Seçkin Özdil
*ID:21201929
*Section:1
*Assignment:2
*Description: Performance class and make file
*/

#include "analysis.h"
#include"AbBST.h"
#include"PbBST.h"
#include<iostream>
#include<cstdlib>
#include <ctime>
#include <fstream>
#include<new>
using namespace std;
/////////////////////////////////////////////////////////
/*
*When I call this method in main class,
*I get a run time error which can be fixed
*by using try-catch. However, it didn't work
*for my code.
*/
/////////////////////////////////////////////////////////
void performanceAnalysis()
{
    PbBST *root = new PbBST(NULL);
    AbBST binary;

    int s1 = 2000;
    int s2 = 4000;
    int s3 = 6000;
    int s4 = 8000;
    int s5 = 10000;
    int s6 = 12000;
    int s7 = 14000;
    int s8 = 16000;
    int s9 = 18000;
    int s10= 20000;

    int *arr1 = new int[s1];
    int *arr2 = new int[s2];
    int *arr3 = new int[s3];
    int *arr4 = new int[s4];
    int *arr5 = new int[s5];
    int *arr6 = new int[s6];
    int *arr7 = new int[s7];
    int *arr8 = new int[s8];
    int *arr9 = new int[s9];
    int *arr10 = new int[s10];

	double Aduration1;
	double Pduration1;
	double Aduration2;
	double Pduration2;
	double Aduration3;
	double Pduration3;
	double Aduration4;
	double Pduration4;
	double Aduration5;
	double Pduration5;
	double Aduration6;
	double Pduration6;
	double Aduration7;
	double Pduration7;
	double Aduration8;
	double Pduration8;
	double Aduration9;
	double Pduration9;
	double Aduration10;
	double Pduration10;

    for(int i = 0; i < 2000; i++)
        arr1[i] = rand()%2000+1;
	for(int i = 0; i < 4000; i++)
		arr2[i] = rand()%4000+1;
	for(int i = 0; i < 6000; i++)
		arr3[i] = rand()%6000+1;
    for(int i = 0; i < 8000; i++)
		arr4[i] = rand()%8000+1;
	for(int i = 0; i < 10000; i++)
		arr5[i] = rand()%10000+1;
	for(int i = 0; i < 12000; i++)
		arr6[i] = rand()%12000+1;
    for(int i = 0; i < 14000; i++)
		arr7[i] = rand()%14000+1;
	for(int i = 0; i < 16000; i++)
		arr8[i] = rand()%16000+1;
	for(int i = 0; i < 18000; i++)
		arr9[i] = rand()%18000+1;
    for(int i = 0; i < 20000; i++)
		arr10[i] = rand()%20000+1;

    ////////////////////////////////////////////////////////////////////////

    clock_t startTime = clock();
    for(int i = 0; i<2000; i++){
        binary.insert(arr1[i]);
    }
    Aduration1 = 1000 * double( clock() - startTime ) / CLOCKS_PER_SEC;

    startTime=clock();
    for(int j = 0; j<2000; j++){
        root->insert(arr1[j]);
    }
    Pduration1 = 1000 * double( clock() - startTime ) / CLOCKS_PER_SEC;

    /////////////////////////////////////////////////////////////////////////

    ////////////////////////////////////////////////////////////////////////

    startTime = clock();
    for(int i = 0; i<4000; i++){
        binary.insert(arr2[i]);
    }
    Aduration2 = 1000 * double( clock() - startTime ) / CLOCKS_PER_SEC;

    startTime=clock();
    for(int j = 0; j<4000; j++){
        root->insert(arr2[j]);
    }
    Pduration2 = 1000 * double( clock() - startTime ) / CLOCKS_PER_SEC;

    /////////////////////////////////////////////////////////////////////////

    ////////////////////////////////////////////////////////////////////////

    startTime = clock();
    for(int i = 0; i<6000; i++){
        binary.insert(arr3[i]);
    }
    Aduration3 = 1000 * double( clock() - startTime ) / CLOCKS_PER_SEC;

    startTime=clock();
    for(int j = 0; j<6000; j++){
        root->insert(arr3[j]);
    }
    Pduration3 = 1000 * double( clock() - startTime ) / CLOCKS_PER_SEC;

    /////////////////////////////////////////////////////////////////////////

    ////////////////////////////////////////////////////////////////////////

    startTime = clock();
    for(int i = 0; i<8000; i++){
        binary.insert(arr4[i]);
    }
    Aduration4 = 1000 * double( clock() - startTime ) / CLOCKS_PER_SEC;

    startTime=clock();
    for(int j = 0; j<8000; j++){
        root->insert(arr4[j]);
    }
    Pduration4 = 1000 * double( clock() - startTime ) / CLOCKS_PER_SEC;

    /////////////////////////////////////////////////////////////////////////

    ////////////////////////////////////////////////////////////////////////

    startTime = clock();
    for(int i = 0; i<10000; i++){
        binary.insert(arr5[i]);
    }
    Aduration5 = 1000 * double( clock() - startTime ) / CLOCKS_PER_SEC;

    startTime=clock();
    for(int j = 0; j<10000; j++){
        root->insert(arr5[j]);
    }
    Pduration5 = 1000 * double( clock() - startTime ) / CLOCKS_PER_SEC;

    /////////////////////////////////////////////////////////////////////////

    ////////////////////////////////////////////////////////////////////////

    startTime = clock();
    for(int i = 0; i<12000; i++){
        binary.insert(arr6[i]);
    }
    Aduration6 = 1000 * double( clock() - startTime ) / CLOCKS_PER_SEC;

    startTime=clock();
    for(int j = 0; j<12000; j++){
        root->insert(arr6[j]);
    }
    Pduration6 = 1000 * double( clock() - startTime ) / CLOCKS_PER_SEC;

    /////////////////////////////////////////////////////////////////////////

    ////////////////////////////////////////////////////////////////////////

    startTime = clock();
    for(int i = 0; i<14000; i++){
        binary.insert(arr7[i]);
    }
    Aduration7 = 1000 * double( clock() - startTime ) / CLOCKS_PER_SEC;

    startTime=clock();
    for(int j = 0; j<14000; j++){
        root->insert(arr7[j]);
    }
    Pduration7 = 1000 * double( clock() - startTime ) / CLOCKS_PER_SEC;

    /////////////////////////////////////////////////////////////////////////

    ////////////////////////////////////////////////////////////////////////

    startTime = clock();
    for(int i = 0; i<16000; i++){
        binary.insert(arr8[i]);
    }
    Aduration8 = 1000 * double( clock() - startTime ) / CLOCKS_PER_SEC;

    startTime=clock();
    for(int j = 0; j<16000; j++){
        root->insert(arr8[j]);
    }
    Pduration8 = 1000 * double( clock() - startTime ) / CLOCKS_PER_SEC;

    /////////////////////////////////////////////////////////////////////////

    ////////////////////////////////////////////////////////////////////////

    startTime = clock();
    for(int i = 0; i<18000; i++){
        binary.insert(arr9[i]);
    }
    Aduration9 = 1000 * double( clock() - startTime ) / CLOCKS_PER_SEC;

    startTime=clock();
    for(int j = 0; j<18000; j++){
        root->insert(arr9[j]);
    }
    Pduration9 = 1000 * double( clock() - startTime ) / CLOCKS_PER_SEC;

    /////////////////////////////////////////////////////////////////////////

    ////////////////////////////////////////////////////////////////////////

    startTime = clock();
    for(int i = 0; i<20000; i++){
        binary.insert(arr10[i]);
    }
    Aduration10 = 1000 * double( clock() - startTime ) / CLOCKS_PER_SEC;

    startTime=clock();
    for(int j = 0; j<20000; j++){
        root->insert(arr10[j]);
    }
    Pduration10 = 1000 * double( clock() - startTime ) / CLOCKS_PER_SEC;

    /////////////////////////////////////////////////////////////////////////


    cout<<"Part e - Performance analysis of BST implementations"<<endl;
    cout<<"------------------------------------------------------------"<<endl;
    cout<<"Array Size"<<"              "<<"Array Based"<<"             "<<"Pointer Based"<<endl;
    cout<<"------------------------------------------------------------"<<endl;
    cout<<"2000"<<"                     "<<Aduration1<<" ms"<<"         "<<Pduration1<<" ms"<<endl;
    cout<<"4000"<<"                     "<<Aduration2<<" ms"<<"         "<<Pduration2<<" ms"<<endl;
    cout<<"6000"<<"                     "<<Aduration3<<" ms"<<"         "<<Pduration3<<" ms"<<endl;
    cout<<"8000"<<"                     "<<Aduration4<<" ms"<<"         "<<Pduration4<<" ms"<<endl;
    cout<<"10000"<<"                    "<<Aduration5<<" ms"<<"         "<<Pduration5<<" ms"<<endl;
    cout<<"12000"<<"                    "<<Aduration6<<" ms"<<"         "<<Pduration6<<" ms"<<endl;
    cout<<"14000"<<"                    "<<Aduration7<<" ms"<<"         "<<Pduration7<<" ms"<<endl;
    cout<<"16000"<<"                    "<<Aduration8<<" ms"<<"         "<<Pduration8<<" ms"<<endl;
    cout<<"18000"<<"                    "<<Aduration9<<" ms"<<"         "<<Pduration9<<" ms"<<endl;
    cout<<"20000"<<"                    "<<Aduration10<<" ms"<<"        "<<Pduration10<<" ms"<<endl;

}
