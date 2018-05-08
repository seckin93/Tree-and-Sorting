/**
*Title:BinarySearchTrees
*Author: Abdullah Seçkin Özdil
*ID:21201929
*Section:1
*Assignment:2
*Description: Array Based implementation
*/
#include "AbBinaryNode.h"

AbBinaryNode::AbBinaryNode()
{
    key = -1;
}

AbBinaryNode::~AbBinaryNode()
{
    //dtor
}

int AbBinaryNode::getKey(){
    return key;
}

void AbBinaryNode::setKey(int k){
    key = k;
}
