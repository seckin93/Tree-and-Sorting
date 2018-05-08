/**
*Title:BinarySearchTrees
*Author: Abdullah Seçkin Özdil
*ID:21201929
*Section:1
*Assignment:2
*Description: Main class and make file
*/
#include "main.h"
#include "PbBST.h"
#include"AbBST.h"
#include"analysis.h"

using namespace std;
int main()
{
    PbBST *root = new PbBST(40);
    root->insert(50);
    root->insert(45);
    root->insert(30);
    root->insert(60);
    root->insert(55);
    root->insert(20);
    root->insert(35);
    root->insert(10);
    root->insert(25);

    cout<<root->isValidBST()<<endl;

    cout<<"Median is: "<<root->medionOfBST();

    //performanceAnalysis();//There is a comment in analysis.cpp file. Please read.
}

