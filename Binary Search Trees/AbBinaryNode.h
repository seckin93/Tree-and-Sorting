/**
*Title:BinarySearchTrees
*Author: Abdullah Seçkin Özdil
*ID:21201929
*Section:1
*Assignment:2
*Description: Array Based implementation
*/
#ifndef ABBINARYNODE_H
#define ABBINARYNODE_H


class AbBinaryNode
{
    public:
        AbBinaryNode();
        virtual ~AbBinaryNode();
        void setKey(int k);
        int getKey();

    protected:

    private:
        int key;
};

#endif // ABBINARYNODE_H
