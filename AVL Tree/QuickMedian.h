/*
* Title : Heaps and AVL Trees
* Author : Abdullah Seçkin Özdil
* ID: 21201929
* Section : 1
* Assignment : 3
* Description : QuickMedian insert and getMedian
*/
#ifndef QUICKMEDIAN_H
#define QUICKMEDIAN_H
#include"MaxHeap.h"
#include"MinHeap.h"


class QuickMedian
{
    public:
        QuickMedian();
        void insert(int val); // inserts an element into QuickMedian
        double getMedian(); // returns the median of elements
        void trav();
    private:
        MaxHeap maxH;
        MinHeap minH;
};

#endif // QUICKMEDIAN_H
