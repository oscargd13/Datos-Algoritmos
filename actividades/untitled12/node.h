#ifndef NODE_H
#define NODE_H
#include<iostream>
#include<array>
using namespace std;

class Node
{
public:
    Node(int _data);
    void push(Node * d);
    Node* search(int value);
    void print();
    void printNode();

    int getData() const;

    void setPadre(Node *value);

private:
    int data;
    Node * padre;
    array<Node*,4>ramas;


};

#endif // NODE_H
