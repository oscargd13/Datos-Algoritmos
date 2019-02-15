#ifndef NODE_H
#define NODE_H

#include "metro.h"

class Node
{
public:
    Node(Metro *m = new Metro{""});
    void push_back(Metro *m);
    void print() const;
    void insert_after(Metro* m);

    Node *getNext() const;
    void setNext(Node *value);

    Node *getPrev() const;
    void setPrev(Node *value);

    Metro *getData() const;
    void setData(Metro *value);

private:
    Node * next;
    Node * prev;
    Metro * data;
};

#endif // NODE_H
