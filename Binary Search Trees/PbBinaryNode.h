/**
*Title:BinarySearchTrees
*Author: Abdullah Seçkin Özdil
*ID:21201929
*Section:1
*Assignment:2
*Description: Pointer Based implementation
*/
#ifndef PBBINARYNODE_H
#define PBBINARYNODE_H
#include<iostream>



struct PbBinaryNode
{
    int data;
    PbBinaryNode *left;
    PbBinaryNode *right;
};

/*class PbBinaryNode
{
    public:
        PbBinaryNode();
        virtual ~PbBinaryNode();
        void setKey(int k);
        int getKey();
        PbBinaryNode newNode(int x);
        PbBinaryNode *left;
        PbBinaryNode *right;

    protected:

    private:
        int key;
};*/

#endif // PBBINARYNODE_H
