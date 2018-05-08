/**
*Title:BinarySearchTrees
*Author: Abdullah Seçkin Özdil
*ID:21201929
*Section:1
*Assignment:2
*Description: Array Based implementation
*/
#ifndef ABBST_H
#define ABBST_H
#include "AbBinaryNode.h"
class AbBST
{
    public:
        AbBST();
        virtual ~AbBST();
        void insert(int val);
        int getHeight();
        void print();

    protected:

    private:
        AbBinaryNode *ar;
        int size;
        void arDouble();
};

#endif // ABBST_H
