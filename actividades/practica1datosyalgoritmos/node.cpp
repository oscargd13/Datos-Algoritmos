#include "node.h"

Node::Node(Metro *m):
    next{nullptr},
    prev{nullptr},
    data{m}
{

}

void Node::push_back(Metro *m)
{
    if(next) next->push_back(m);
    else{
        next = new Node(m);
        next->setPrev(this);
    }
}

void Node::print() const
{
    Node * it = nullptr;
    for(it = getNext(); it != nullptr; it = it->getNext()){
        it->getData()->print();
    }
}

void Node::insert_after(Metro *m)
{
    Node* aux = new Node(m);
    if(next){
        aux->setNext(next);
        aux->setPrev(this);
        next = aux;
        aux->getNext()->setPrev(aux);
    }else{
        push_back(m);
    }
}

Node *Node::getNext() const
{
    return next;
}

void Node::setNext(Node *value)
{
    next = value;
}

Node *Node::getPrev() const
{
    return prev;
}

void Node::setPrev(Node *value)
{
    prev = value;
}

Metro *Node::getData() const
{
    return data;
}

void Node::setData(Metro *value)
{
    data = value;
}

