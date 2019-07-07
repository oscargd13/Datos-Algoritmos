#include "node.h"

Node::Node(int _data):
    data{_data},
    padre{nullptr},
    ramas{nullptr, nullptr, nullptr, nullptr}

{

}

void Node::push(Node *d)
{
    if(d->getData() == data|| d->getData()%data == 0){
        if(ramas.at(0)){
            ramas.at(0)->push(d);
        }else {
            ramas.at(0)= d;
            d->setPadre(this);
}
        return;
    }
    if(data%d->getData()==0){
        if(ramas.at(1)){
            ramas.at(1)->push(d);
        }else {
            ramas.at(1)= d;
            d->setPadre(this);
}
        return;
    }
    if(d->getData()%2==0){
        if(ramas.at(2)){
            ramas.at(2)->push(d);
        }else {
            ramas.at(2)= d;
            d->setPadre(this);
}
        return;
    }
    if(d->getData()%2 !=0){
        if(ramas.at(3)){
            ramas.at(3)->push(d);
        }else {
            ramas.at(3)= d;
            d->setPadre(this);
}
        return;
    }

}

Node *Node::search(int value)
{
    if(value == data){
        return(this);
    }
    if(value%data == 0){
        if(ramas.at(0)){
           return ramas.at(0)->search(value);
        }
    }
    if(data%value == 0){
        if(ramas.at(1)){
           return ramas.at(1)->search(value);
        }
    }
    if(value%2 == 0){
        if(ramas.at(2)){
           return ramas.at(2)->search(value);
        }
    }
    if(value%2 != 0){
        if(ramas.at(3)){
           return ramas.at(3)->search(value);
        }
    }
         return nullptr;

}

void Node::print()
{
   cout << data << "    ";
   for(auto e: ramas){
       if(e){
           e->print();
       }
   }
}

void Node::printNode()
{
    cout << "Node: " <<  data << endl;
    cout << "Ramas: " << endl;
    for(auto e: ramas){
        if(e){
           cout << " - " << e->getData() << endl;
        }
    }
}

int Node::getData() const
{
    return data;
}

void Node::setPadre(Node *value)
{
    padre = value;
}
