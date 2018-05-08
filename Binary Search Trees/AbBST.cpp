/**
*Title:BinarySearchTrees
*Author: Abdullah Seçkin Özdil
*ID:21201929
*Section:1
*Assignment:2
*Description: Array Based implementation
*/
#include "AbBST.h"
#include<iostream>

using namespace std;

AbBST::AbBST()
{
    ar = new AbBinaryNode[2];
    ar[0].setKey(-1);
    ar[1].setKey(-1);
    size = 2;
    //ctor
}

AbBST::~AbBST()
{
    //dtor
}
void AbBST::arDouble()
{
    AbBinaryNode *temp = new AbBinaryNode[size*2];
    for(int i =0; i<size; i++){
        temp[i].setKey(ar[i].getKey());
        temp[size + i ].setKey(-1);
    }
    delete ar;
    ar = temp;
    size *=2;
}

void AbBST::insert(int val)
{
    int curIndex =0;
    while(true){
        if(ar[curIndex].getKey()  == -1){
            ar[curIndex].setKey(val);
            break;
        }
        if(ar[curIndex].getKey() > val) {// go left
            curIndex = 2*curIndex +1;
            if(curIndex >= size){
                arDouble();
            }
        }
        if(ar[curIndex].getKey() <= val && ar[curIndex].getKey() != -1) {// go right
            curIndex = 2*curIndex +2;
            if(curIndex >= size){
                arDouble();
            }
        }
    }
}

int AbBST::getHeight()
{
    int count = 0;

    if(size == 1)
       return 1;

    for(int i = 0; i<size; i++)
    {
        size/=2;
        count++;
    }
    return count +1;
}

void AbBST::print(){
    cout << "tree:" << endl;
    for(int i =0; i < size; i++){
        cout << ar[i].getKey() << endl;
    }

    cout<<"Height is: " << getHeight() << endl;
}
/*
int main()
{
    AbBST binary;
	binary.insert(5);
	binary.insert(16);
	binary.insert(4);
	binary.insert(9);

    binary.print();
    cout<<endl;

    binary.getHeight();

	return 0;
}*/
