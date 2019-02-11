#include <iostream>

using namespace std;


class Data{

public:
    Data(): dato1{0}, dato2{0}{

    }
    Data(int dato1, int dato2): dato1{dato1}, dato2{dato2} {

    }
    int getDato1() const;
    void setDato1(int value);

private:
    int dato1;
    int dato2;
};

class Node{
public:

    Node(): next{nullptr}{
        data = Data(0,0);
    }

    Node(int dato1, int dato2): next{nullptr}{
        data = Data(dato1,dato2);
    }

    Node(const Data & value): next{nullptr}, data{value}{

    }

    Node(Node* n): next{nullptr}{
        data = Data(n->getData());
    }

    void push_back(Data d){
        if(next) next->push_back(d);
        else next = new Node(d);
    }

    Data pop_back(){
        if(next){
            if (next->getNext() == nullptr){
                return next->getData();
                delete next;
                next = nullptr;
            }else return next->pop_back();
        }else{
            throw string{"empty list"};
        }
    }

    Data & getData();
    void setData(const Data &value);

    Node *getNext() const;
    void setNext(Node *value);

private:
    Data data;
    Node* next;
};

void push_front(Node* first, Data d){
    Node* aux = new Node(d);
    aux->setNext(first->getNext());
    first->setNext(aux);
}

Data pop_front(Node* first){
    Data result = first->getNext()->getData();
    Node * aux = first->getNext();
    first->setNext(aux->getNext());
    delete aux;
}


Node * filter_greater_than(Node* first, Data const & d){
    Node* it = nullptr;
    Node * result = new Node();
    for(it = first->getNext(); it != nullptr; it->setNext(it->getNext())){
        if(it->getData().getDato1() > d.getDato1()){
            result->push_back(it->getData());
        }
    }

    return result;
}


int main()
{
    Node * lista = new Node();

    lista->push_back(Data(2,3));
    lista->push_back(Data(3,7));


    Data aux = lista->pop_back();

    push_front(lista, Data(1,2));
    push_front(lista, Data(3,2));

    Data aux2 = pop_front(lista);

    cout << aux2.getDato1() << endl;



}

int Data::getDato1() const
{
return dato1;
}

void Data::setDato1(int value)
{
dato1 = value;
}

Data &Node::getData()
{
return data;
}

void Node::setData(const Data &value)
{
data = value;
}

Node *Node::getNext() const
{
return next;
}

void Node::setNext(Node *value)
{
next = value;
}
