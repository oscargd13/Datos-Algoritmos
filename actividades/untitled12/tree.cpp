#include "tree.h"

Tree::Tree():
    dios{nullptr}
{

}

void Tree::push(int value)
{
    Node* aux = new Node(value);
    if(dios){
        dios->push(aux);
    }else {
        dios=aux;
    }
}

Node *Tree::search(int value2)
{
    if(dios){
        dios->search(value2);
    }else {
     return nullptr;
    }
}

void Tree::print()
{
    if(dios){
        dios->print();
    }
}
