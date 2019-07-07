#ifndef TREE_H
#define TREE_H
#include<iostream>
#include"node.h"

using namespace std;

class Tree
{
public:
    Tree();

    void push(int value);
    Node* search(int value2);
    void print();

private:
    Node * dios;



};

#endif // TREE_H
