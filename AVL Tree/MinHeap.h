/*
* Title : Heaps and AVL Trees
* Author : Abdullah Seçkin Özdil
* ID: 21201929
* Section : 1
* Assignment : 3
* Description : MinHeap Operations
*/
#ifndef MINHEAP_H
#define MINHEAP_H
#define BUFFER_SIZE 1000
#include <iostream>
class MinHeap{

	public:
		MinHeap();
		void insert(int val); // inserts an element into heap
		int getMin(); // retrieves minimum element
		int removeMin(); // retrieves and removes the minimum element
		int getSize(); // returns the number of elements in heap
		void swap(int i1, int i2);
		void heapify(int size);
		int swapChild(int index);
		void traverse();
	private:
		int size;
		int heap[BUFFER_SIZE];

};
#endif // MINHEAP_H
