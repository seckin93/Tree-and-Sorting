#include "AVLTree.h"
#include"analysis.h"
#include"MaxHeap.h"
#include"MinHeap.h"
#include"QuickMedian.h"
#include<iostream>

using namespace std;

int main()
{

    AVLTree avl;

    avl.insert(80);
    avl.insert(22);
    avl.insert(99);
    avl.insert(71);
    avl.insert(75);
    avl.insert(85);
    avl.insert(74);
    avl.insert(73);
    avl.insert(72);
    avl.insert(87);

    cout << "Inorder Display: " << endl;
    avl.displayIn();
    cout << "Preorder Display: " << endl;
    avl.displayPre();

    cout<<avl.getHeight()<<endl;

    heightAnalysis();

    //40, 50, 45, 30, 60, 55, 20, 35, 10, 25

    MaxHeap *a = new MaxHeap();
    a->insert(40);
    a->insert(50);
    a->insert(45);
    a->insert(30);
    a->insert(60);
    a->insert(55);
    a->insert(20);
    a->insert(35);
    a->insert(10);
    a->insert(25);

    a->traverse();
    cout<<"Max is: "<<a->getMax()<<endl;
    cout<<"Size is: "<<a->getSize()<<endl;
    cout<<"------------"<<endl;
    a->removeMax();
    a->traverse();
    cout<<"Max is: "<<a->getMax()<<endl;
    cout<<"Size is: "<<a->getSize()<<endl;

    MinHeap *b = new MinHeap();
    b->insert(40);
    b->insert(50);
    b->insert(45);
    b->insert(30);
    b->insert(60);
    b->insert(55);
    b->insert(20);
    b->insert(35);
    b->insert(10);
    b->insert(25);

    b->traverse();
    cout<<"Min is: "<<b->getMin()<<endl;
    cout<<"Size is: "<<b->getSize()<<endl;
    cout<<"------------"<<endl;
    b->removeMin();
    b->traverse();
    cout<<"Min is: "<<b->getMin()<<endl;
    cout<<"Size is: "<<b->getSize()<<endl;

//10, 40, 30, 50, 70, 60, 20, 90, 100, 110, 0, 25, 123, 11, 200
    QuickMedian *q = new QuickMedian();

    q->insert(10);
    q->insert(40);
    q->insert(30);
    q->insert(50);
    q->insert(70);
    q->insert(60);
    q->insert(20);
    q->insert(90);
    q->insert(100);
    q->insert(110);
    q->insert(0);
    q->insert(25);
    q->insert(123);
    q->insert(11);
    q->insert(200);


    q->trav();

    cout<<"Median is: "<<q->getMedian()<<endl;
}
