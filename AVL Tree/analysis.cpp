/*
* Title : Heaps and AVL Trees
* Author : Abdullah Seçkin Özdil
* ID: 21201929
* Section : 1
* Assignment : 3
* Description : Height Analysis
*/
#include "analysis.h"
#include"AVLTree.h"
#include<iostream>
#include<cstdlib>
#include <ctime>
#include <fstream>
#include<new>

using namespace std;

void insertionSort(int* arr, int size);
void revArr(int *arr, int size);

void heightAnalysis()
{
    AVLTree avl1, avl2, avl3, avl4, avl5, avl6, avl7, avl8, avl9, avl10, avl11,
    avl12, avl13, avl14, avl15, avl16, avl17, avl18, avl19, avl20;

    double rand1, asc1, dsc1 = 0;
    double rand2, asc2, dsc2 = 0;
    double rand3, asc3, dsc3 = 0;
    double rand4, asc4, dsc4 = 0;
    double rand5, asc5, dsc5 = 0;
    double rand6, asc6, dsc6 = 0;
    double rand7, asc7, dsc7 = 0;
    double rand8, asc8, dsc8 = 0;
    double rand9, asc9, dsc9 = 0;
    double rand10, asc10, dsc10 = 0;
    double rand11, asc11, dsc11 = 0;
    double rand12, asc12, dsc12 = 0;
    double rand13, asc13, dsc13 = 0;
    double rand14, asc14, dsc14 = 0;
    double rand15, asc15, dsc15 = 0;
    double rand16, asc16, dsc16 = 0;
    double rand17, asc17, dsc17 = 0;
    double rand18, asc18, dsc18 = 0;
    double rand19, asc19, dsc19 = 0;
    double rand20, asc20, dsc20 = 0;

    int s1 = 1000;
    int s2 = 2000;
    int s3 = 3000;
    int s4 = 4000;
    int s5 = 5000;
    int s6 = 6000;
    int s7 = 7000;
    int s8 = 8000;
    int s9 = 9000;
    int s10 = 10000;
    int s11 = 11000;
    int s12 = 12000;
    int s13 = 13000;
    int s14 = 14000;
    int s15 = 15000;
    int s16 = 16000;
    int s17 = 17000;
    int s18 = 17000;
    int s19 = 19000;
    int s20 = 20000;

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
    int *arr11 = new int[s11];
    int *arr12 = new int[s12];
    int *arr13 = new int[s13];
    int *arr14 = new int[s14];
    int *arr15 = new int[s15];
    int *arr16 = new int[s16];
    int *arr17 = new int[s17];
    int *arr18 = new int[s18];
    int *arr19 = new int[s19];
    int *arr20 = new int[s20];

    for(int i = 0; i < 1000; i++)
        arr1[i] = rand()%1000+1;
	for(int i = 0; i < 2000; i++)
		arr2[i] = rand()%2000+1;
	for(int i = 0; i < 3000; i++)
		arr3[i] = rand()%3000+1;
    for(int i = 0; i < 4000; i++)
		arr4[i] = rand()%4000+1;
	for(int i = 0; i < 5000; i++)
		arr5[i] = rand()%5000+1;
	for(int i = 0; i < 6000; i++)
		arr6[i] = rand()%6000+1;
    for(int i = 0; i < 7000; i++)
		arr7[i] = rand()%7000+1;
	for(int i = 0; i < 8000; i++)
		arr8[i] = rand()%8000+1;
	for(int i = 0; i < 9000; i++)
		arr9[i] = rand()%9000+1;
    for(int i = 0; i < 10000; i++)
		arr10[i] = rand()%10000+1;
    for(int i = 0; i < 11000; i++)
        arr11[i] = rand()%11000+1;
	for(int i = 0; i < 12000; i++)
		arr12[i] = rand()%12000+1;
	for(int i = 0; i < 13000; i++)
		arr13[i] = rand()%13000+1;
    for(int i = 0; i < 14000; i++)
		arr14[i] = rand()%14000+1;
	for(int i = 0; i < 15000; i++)
		arr15[i] = rand()%15000+1;
	for(int i = 0; i < 16000; i++)
		arr16[i] = rand()%16000+1;
    for(int i = 0; i < 17000; i++)
		arr17[i] = rand()%17000+1;
	for(int i = 0; i < 18000; i++)
		arr18[i] = rand()%18000+1;
	for(int i = 0; i < 19000; i++)
		arr19[i] = rand()%19000+1;
    for(int i = 0; i < 20000; i++)
		arr20[i] = rand()%20000+1;

    //Random created
    for(int i = 0; i < 1000; i++){
        avl1.insert(arr1[i]);
    }
    rand1 = avl1.getHeight();

    for(int i = 0; i < 2000; i++){
        avl2.insert(arr2[i]);
    }
    rand2 = avl2.getHeight();

    for(int i = 0; i < 3000; i++){
        avl3.insert(arr3[i]);
    }
    rand3 = avl3.getHeight();

    for(int i = 0; i < 4000; i++){
        avl4.insert(arr4[i]);
    }
    rand4 = avl4.getHeight();

    for(int i = 0; i < 5000; i++){
        avl5.insert(arr5[i]);
    }
    rand5 = avl5.getHeight();

    for(int i = 0; i < 6000; i++){
        avl6.insert(arr6[i]);
    }
    rand6 = avl6.getHeight();

    for(int i = 0; i < 7000; i++){
        avl7.insert(arr7[i]);
    }
    rand7 = avl7.getHeight();

    for(int i = 0; i < 8000; i++){
        avl8.insert(arr8[i]);
    }
    rand8 = avl8.getHeight();

    for(int i = 0; i < 9000; i++){
        avl9.insert(arr9[i]);
    }
    rand9 = avl9.getHeight();

    for(int i = 0; i < 10000; i++){
        avl10.insert(arr10[i]);
    }
    rand10 = avl10.getHeight();

    for(int i = 0; i < 10000; i++){
        avl11.insert(arr10[i]);
    }
    rand11 = avl11.getHeight();

    for(int i = 0; i < 12000; i++){
        avl12.insert(arr12[i]);
    }
    rand12 = avl12.getHeight();

    for(int i = 0; i < 13000; i++){
        avl13.insert(arr13[i]);
    }
    rand13 = avl13.getHeight();

    for(int i = 0; i < 14000; i++){
        avl14.insert(arr14[i]);
    }
    rand14 = avl14.getHeight();

    for(int i = 0; i < 15000; i++){
        avl15.insert(arr15[i]);
    }
    rand15 = avl15.getHeight();

    for(int i = 0; i < 16000; i++){
        avl16.insert(arr16[i]);
    }
    rand16 = avl16.getHeight();

    for(int i = 0; i < 17000; i++){
        avl17.insert(arr17[i]);
    }
    rand17 = avl17.getHeight();

    for(int i = 0; i < 18000; i++){
        avl18.insert(arr18[i]);
    }
    rand18 = avl18.getHeight();

    for(int i = 0; i < 19000; i++){
        avl19.insert(arr19[i]);
    }
    rand19 = avl19.getHeight();

    for(int i = 0; i < 20000; i++){
        avl20.insert(arr20[i]);
    }
    rand20 = avl20.getHeight();


    //Ascending Order
    insertionSort(arr1, s1);
    insertionSort(arr2, s2);
    insertionSort(arr3, s3);
    insertionSort(arr4, s4);
    insertionSort(arr5, s5);
    insertionSort(arr6, s6);
    insertionSort(arr7, s7);
    insertionSort(arr8, s8);
    insertionSort(arr9, s9);
    insertionSort(arr10, s10);
    insertionSort(arr11, s11);
    insertionSort(arr12, s12);
    insertionSort(arr13, s13);
    insertionSort(arr14, s14);
    insertionSort(arr15, s15);
    insertionSort(arr16, s16);
    insertionSort(arr17, s17);
    insertionSort(arr18, s18);
    insertionSort(arr19, s19);
    insertionSort(arr20, s20);

    for(int i = 0; i < 1000; i++){
        avl1.insert(arr1[i]);
    }
    asc1 = avl1.getHeight();

    for(int i = 0; i < 2000; i++){
        avl2.insert(arr2[i]);
    }
    asc2 = avl2.getHeight();

    for(int i = 0; i < 3000; i++){
        avl3.insert(arr3[i]);
    }
    asc3 = avl3.getHeight();

    for(int i = 0; i < 4000; i++){
        avl4.insert(arr4[i]);
    }
    asc4 = avl4.getHeight();

    for(int i = 0; i < 5000; i++){
        avl5.insert(arr5[i]);
    }
    asc5 = avl5.getHeight();

    for(int i = 0; i < 6000; i++){
        avl6.insert(arr6[i]);
    }
    asc6 = avl6.getHeight();

    for(int i = 0; i < 7000; i++){
        avl7.insert(arr7[i]);
    }
    asc7 = avl7.getHeight();

    for(int i = 0; i < 8000; i++){
        avl8.insert(arr8[i]);
    }
    asc8 = avl8.getHeight();

    for(int i = 0; i < 9000; i++){
        avl9.insert(arr9[i]);
    }
    asc9 = avl9.getHeight();

    for(int i = 0; i < 10000; i++){
        avl10.insert(arr10[i]);
    }
    asc10 = avl10.getHeight();

    for(int i = 0; i < 10000; i++){
        avl11.insert(arr10[i]);
    }
    asc11 = avl11.getHeight();

    for(int i = 0; i < 12000; i++){
        avl12.insert(arr12[i]);
    }
    asc12 = avl12.getHeight();

    for(int i = 0; i < 13000; i++){
        avl13.insert(arr13[i]);
    }
    asc13 = avl13.getHeight();

    for(int i = 0; i < 14000; i++){
        avl14.insert(arr14[i]);
    }
    asc14 = avl14.getHeight();

    for(int i = 0; i < 15000; i++){
        avl15.insert(arr15[i]);
    }
    asc15 = avl15.getHeight();

    for(int i = 0; i < 16000; i++){
        avl16.insert(arr16[i]);
    }
    asc16 = avl16.getHeight();

    for(int i = 0; i < 17000; i++){
        avl17.insert(arr17[i]);
    }
    asc17 = avl17.getHeight();

    for(int i = 0; i < 18000; i++){
        avl18.insert(arr18[i]);
    }
    asc18 = avl18.getHeight();

    for(int i = 0; i < 19000; i++){
        avl19.insert(arr19[i]);
    }
    asc19 = avl19.getHeight();

    for(int i = 0; i < 20000; i++){
        avl20.insert(arr20[i]);
    }
    asc20 = avl20.getHeight();

    //Descending Order

    revArr(arr1, s1);
    revArr(arr2, s2);
    revArr(arr3, s3);
    revArr(arr4, s4);
    revArr(arr5, s5);
    revArr(arr6, s6);
    revArr(arr7, s7);
    revArr(arr8, s8);
    revArr(arr9, s9);
    revArr(arr10, s10);
    revArr(arr11, s11);
    revArr(arr12, s12);
    revArr(arr13, s13);
    revArr(arr14, s14);
    revArr(arr15, s15);
    revArr(arr16, s16);
    revArr(arr17, s17);
    revArr(arr18, s18);
    revArr(arr19, s19);
    revArr(arr20, s20);

    for(int i = 0; i < 1000; i++){
        avl1.insert(arr1[i]);
    }
    dsc1 = avl1.getHeight();

    for(int i = 0; i < 2000; i++){
        avl2.insert(arr2[i]);
    }
    dsc2 = avl2.getHeight();

    for(int i = 0; i < 3000; i++){
        avl3.insert(arr3[i]);
    }
    dsc3 = avl3.getHeight();

    for(int i = 0; i < 4000; i++){
        avl4.insert(arr4[i]);
    }
    dsc4 = avl4.getHeight();

    for(int i = 0; i < 5000; i++){
        avl5.insert(arr5[i]);
    }
    dsc5 = avl5.getHeight();

    for(int i = 0; i < 6000; i++){
        avl6.insert(arr6[i]);
    }
    dsc6 = avl6.getHeight();

    for(int i = 0; i < 7000; i++){
        avl7.insert(arr7[i]);
    }
    dsc7 = avl7.getHeight();

    for(int i = 0; i < 8000; i++){
        avl8.insert(arr8[i]);
    }
    dsc8 = avl8.getHeight();

    for(int i = 0; i < 9000; i++){
        avl9.insert(arr9[i]);
    }
    dsc9 = avl9.getHeight();

    for(int i = 0; i < 10000; i++){
        avl10.insert(arr10[i]);
    }
    dsc10 = avl10.getHeight();

    for(int i = 0; i < 10000; i++){
        avl11.insert(arr10[i]);
    }
    dsc11 = avl11.getHeight();

    for(int i = 0; i < 12000; i++){
        avl12.insert(arr12[i]);
    }
    dsc12 = avl12.getHeight();

    for(int i = 0; i < 13000; i++){
        avl13.insert(arr13[i]);
    }
    dsc13 = avl13.getHeight();

    for(int i = 0; i < 14000; i++){
        avl14.insert(arr14[i]);
    }
    dsc14 = avl14.getHeight();

    for(int i = 0; i < 15000; i++){
        avl15.insert(arr15[i]);
    }
    dsc15 = avl15.getHeight();

    for(int i = 0; i < 16000; i++){
        avl16.insert(arr16[i]);
    }
    dsc16 = avl16.getHeight();

    for(int i = 0; i < 17000; i++){
        avl17.insert(arr17[i]);
    }
    dsc17 = avl17.getHeight();

    for(int i = 0; i < 18000; i++){
        avl18.insert(arr18[i]);
    }
    dsc18 = avl18.getHeight();

    for(int i = 0; i < 19000; i++){
        avl19.insert(arr19[i]);
    }
    dsc19 = avl19.getHeight();

    for(int i = 0; i < 20000; i++){
        avl20.insert(arr20[i]);
    }
    dsc20 = avl20.getHeight();

    cout<<"Part e - Performance analysis of AVL Trees"<<endl;
    cout<<"---------------------------------------------------------------"<<endl;
    cout<<"Array Size"<<"      "<<"Random"<<"             "<<"Ascending"<<"           "<<"Descending"<<endl;
    cout<<"---------------------------------------------------------------"<<endl;
    cout<<"1000"<<"            "<<rand1<<"                 "<<asc1<<"                   "<<dsc1<<endl;
    cout<<"2000"<<"            "<<rand2<<"                 "<<asc2<<"                   "<<dsc2<<endl;
    cout<<"3000"<<"            "<<rand3<<"                 "<<asc3<<"                   "<<dsc3<<endl;
    cout<<"4000"<<"            "<<rand4<<"                 "<<asc4<<"                   "<<dsc4<<endl;
    cout<<"5000"<<"            "<<rand5<<"                 "<<asc5<<"                   "<<dsc5<<endl;
    cout<<"6000"<<"            "<<rand6<<"                 "<<asc6<<"                   "<<dsc6<<endl;
    cout<<"7000"<<"            "<<rand7<<"                 "<<asc7<<"                   "<<dsc7<<endl;
    cout<<"8000"<<"            "<<rand8<<"                 "<<asc8<<"                   "<<dsc8<<endl;
    cout<<"9000"<<"            "<<rand9<<"                 "<<asc9<<"                   "<<dsc9<<endl;
    cout<<"10000"<<"           "<<rand10<<"                "<<asc10<<"                  "<<dsc10<<endl;
    cout<<"11000"<<"           "<<rand11<<"                "<<asc11<<"                  "<<dsc11<<endl;
    cout<<"12000"<<"           "<<rand12<<"                "<<asc12<<"                  "<<dsc12<<endl;
    cout<<"13000"<<"           "<<rand13<<"                "<<asc13<<"                  "<<dsc13<<endl;
    cout<<"14000"<<"           "<<rand14<<"                "<<asc14<<"                  "<<dsc14<<endl;
    cout<<"15000"<<"           "<<rand15<<"                "<<asc15<<"                  "<<dsc15<<endl;
    cout<<"16000"<<"           "<<rand16<<"                "<<asc16<<"                  "<<dsc16<<endl;
    cout<<"17000"<<"           "<<rand17<<"                "<<asc17<<"                  "<<dsc17<<endl;
    cout<<"18000"<<"           "<<rand18<<"                "<<asc18<<"                  "<<dsc18<<endl;
    cout<<"19000"<<"           "<<rand19<<"                "<<asc19<<"                  "<<dsc19<<endl;
    cout<<"20000"<<"           "<<rand20<<"                "<<asc20<<"                  "<<dsc20<<endl;
}
