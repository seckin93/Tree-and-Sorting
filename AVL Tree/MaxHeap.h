/*
* Title : Heaps and AVL Trees
* Author : Abdullah Seçkin Özdil
* ID: 21201929
* Section : 1
* Assignment : 3
* Description : MaxHeap Operations
*/
#ifndef MAXHEAP_H
#define MAXHEAP_H
#define BUFFER_SIZE 1000
#include <iostream>
class MaxHeap{

	public:
		MaxHeap();
		void insert(int val); // inserts an element into heap
		int getMax(); // retrieves maximum element
		int removeMax(); // retrieves and removes the maximum element
		int getSize(); // returns the number of elements in heap
		void swap(int i1, int i2);
		void heapify(int size);
		int swapChild(int index);
		void traverse();
	private:
		int size;
		int heap[BUFFER_SIZE];

};

#endif // MAXHEAP_H
