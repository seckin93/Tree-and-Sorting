/**
*Title:BinarySearchTrees
*Author: Abdullah Seçkin Özdil
*ID:21201929
*Section:1
*Assignment:2
*Description: Pointer Based implementation
*/
#ifndef PBBST_H
#define PBBST_H

#include "PbBinaryNode.h"

class PbBST
{
    public:
        PbBST(int k);
        virtual ~PbBST();
        void insert(int val);
        int getHeight();
        bool isValidBST();
        int medionOfBST();
        int inorderToMedian(PbBinaryNode *node);

    protected:

    private:
        PbBinaryNode *root;
        int size;
        double median;
        bool isBST(PbBinaryNode *node, int firstNode, int lastNode);
        int countNodes(PbBinaryNode *node);
        void addNode(int item, PbBinaryNode* &node);
        int getTotalHeight(PbBinaryNode *node);
};

#endif // PBBST_H
