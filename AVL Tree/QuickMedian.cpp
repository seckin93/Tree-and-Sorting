/*
* Title : Heaps and AVL Trees
* Author : Abdullah Seçkin Özdil
* ID: 21201929
* Section : 1
* Assignment : 3
* Description : QuickMedian insert and getMedian
*/

#include "QuickMedian.h"
#include<iostream>

using namespace std;

QuickMedian::QuickMedian()
{
    MaxHeap maxH;
    MinHeap minH;
    this->maxH = maxH;
    this->minH = minH;
}

void QuickMedian::insert(int val)
{
    if((maxH.getSize() == 0) && (minH.getSize() == 0)){
        maxH.insert(val);
    }else{
        if(maxH.getMax()>val){
            maxH.insert(val);
        }
        else{
            minH.insert(val);
        }
    }

   if((maxH.getSize()- minH.getSize() == 2)||(minH.getSize()-maxH.getSize() == 2))
   {
       if(maxH.getSize() < minH.getSize())
       {
           int temp = minH.getMin();
           minH.removeMin();
           maxH.insert(temp);
       }
       else if(maxH.getSize() > minH.getSize())
       {
           int temp2 = maxH.getMax();
           maxH.removeMax();
           minH.insert(temp2);
       }
   }
}

double QuickMedian::getMedian()
{
    if(maxH.getSize() > minH.getSize()){
        return maxH.getMax();
    }
    else if(maxH.getSize() < minH.getSize()){
        return minH.getMin();
    }
    else{
        return (minH.getMin()+maxH.getMax())/2;
    }
}
void QuickMedian::trav()
{
    cout<<"MinHeap part: "<<endl;
    minH.traverse();
    cout<<"MaxHeap part: "<<endl;
    maxH.traverse();
}

