/*
* Title : Heaps and AVL Trees
* Author : Abdullah Seçkin Özdil
* ID: 21201929
* Section : 1
* Assignment : 3
* Description : MinHeap Operations
*/
#include "MinHeap.h"
#include<iostream>

using namespace std;

MinHeap::MinHeap()
{
    for(int i = 0; i < BUFFER_SIZE; i++)
    {
        heap[i] = -1;
    }
    size = 0;
}

void MinHeap::insert(int val)
{
    heap[size] = val;
	heapify(size);
	size++;
}

int MinHeap::getMin()
{
    return heap[0];
}

int MinHeap::removeMin()
{
    int temp = heap[0];
	heap[0] = heap[size];
	int i = 0;
	while(i < size && i != -1){
		i = swapChild(i);
	}
	size--;
	return temp;
}

int MinHeap::getSize()
{
    return size;
}

int MinHeap::swapChild(int index)
{
	if(heap[1+2*index]>heap[2*index]){
		swap(index,2*index+1);
		return 2*index+1;
	}
	if(heap[2*index] > heap[2*index+1]){
		swap(index, index*2);
		return 2*index;
	}
	return -1;
}

void MinHeap::swap(int i1, int i2)
{
	if(i1 <= size && i1>= 0 && i2 <= size && i2>= 0){
		int temp = heap[i1];
		heap[i1] = heap[i2];
		heap[i2] = temp;
	}
	else{
		cout << "error size\n";
	}
}

void MinHeap::heapify(int index){
	if(index != 0){
		if(heap[index] < heap[index/2]){
			swap(index, index/2);
			heapify(index/2);

		}
	}
}

void MinHeap::traverse(){
	for(int i = 0; i < size; i++){
		cout << heap[i] << "\t";
	}
	cout << endl;
}
