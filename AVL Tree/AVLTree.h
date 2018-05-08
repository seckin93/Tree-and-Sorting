/*
* Title : Heaps and AVL Trees
* Author : Abdullah Seçkin Özdil
* ID: 21201929
* Section : 1
* Assignment : 3
* Description : AVL Tree
*/
#ifndef AVLTREE_H
#define AVLTREE_H

struct Node
{
    int key;
    Node* left;
    Node* right;
};

class AVLTree
{
    public:
        AVLTree();
        virtual ~AVLTree();
        void insert(int val);
        int getHeight();
        void displayIn();
        void displayPre();
        void insertionSort(int *arr, int size);
        void revArr(int *arr, int size);

    private:
        Node* singleRR(Node* &n);//Single Right Rotation
        Node* singleLR(Node* &n);//Single Left Rotation
        Node* doubleRR(Node* &n);//Double Rotation --> left to right
        Node* doubleLR(Node* &n);//Double Rotation --> right to left
        Node* insert(Node* &root, int key);
        int findHeight(Node* n);
        int isBalanced(Node* n);
        void inOrderTODisplay(Node* n);
        void preOrdertoDisplay(Node* n);
        Node* root;
        int *arr;
};

#endif // AVLTREE_H
