/**
*Title:BinarySearchTrees
*Author: Abdullah Seçkin Özdil
*ID:21201929
*Section:1
*Assignment:2
*Description: Pointer Based implementation
*/
#include "PbBST.h"
#include<iostream>

using namespace std;

PbBST::PbBST(int k)
{
    root = new PbBinaryNode;
    root->data=k;
    root->left = root->right = NULL;
}

PbBST::~PbBST()
{
    //dtor
}

void PbBST::addNode(int item, PbBinaryNode* &node)
{
    if(node==NULL)
    {
        node = new PbBinaryNode;
        node->data = item;
        node->left = NULL;
        node->right = NULL;
    }
    if(node->data > item)
    {
        addNode(item, node->left);
    }
    if(node->data < item)
    {
        addNode(item, node->right);
    }
}

void PbBST::insert(int val)
{
    addNode(val, root);
}

int PbBST::countNodes(PbBinaryNode *node)
{
    if(node==NULL){
        return 0;
    }

    return (countNodes(node->left) + countNodes(node->right)) + 1;
}

int PbBST::getTotalHeight(PbBinaryNode *node)
{
    if(node == NULL){
        return 1;
    }
    int lh = getTotalHeight(node->left);
    int rh = getTotalHeight(node->right);
    return max(lh, rh) + 1;
}

int PbBST::getHeight()
{
        return getTotalHeight(root);
}

bool PbBST::isBST(PbBinaryNode *node, int firstNode, int lastNode)
{
    if(node == NULL)
        return true;
    if(node->data < firstNode || node->data > lastNode)
        return false;
    bool a = isBST(node->left, firstNode, node->data);
    bool b = isBST(node->right, node->data, lastNode);
    return  (a&&b);
}

bool PbBST::isValidBST()
{
    int min, max = 0;
    return isBST(root, min, max);
}

int PbBST::inorderToMedian(PbBinaryNode *node)
{
    int inSize = countNodes(node);
    int *arr = new int[inSize];

    for(int i = 0; i<inSize; i++)
    {
        inorderToMedian(node->left);
        arr[i] = node->data;
        inorderToMedian(node->right);
    }

    if(inSize%2 == 0){
        median = (arr[inSize/2] + arr[(inSize/2)+1])/2;
    }
    else{
        median = arr[(inSize/2)+1];
    }
    return median;
}

int PbBST::medionOfBST()
{
    return inorderToMedian(root);
}
