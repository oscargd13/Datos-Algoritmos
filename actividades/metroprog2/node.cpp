#include "node.h"

#include <limits>



#include <stdlib.h>



Node::Node(Data* d):

    data{d},
    visited{false},
    next{nullptr},
    prev{nullptr},
    pathWeight{std::numeric_limits<float>::max()}

{

}

Data *Node::getData() const

{
    return data;
}

void Node::setData(Data *value)

{
    data = value;
}

set<Node *> Node::getNeighbours() const

{
    return neighbours;
}

void Node::setNeighbours(const set<Node *> &value)

{
    neighbours = value;
}


void Node::addNeighbour(Node * n)

{
    neighbours.insert(n);
}

Node* Node::computePath(Node *dest)

{
    if(visited) return nullptr;

    next = nullptr;
    visited = true;

    if(dest == this) return this;

    for(auto p:neighbours){
        Node* aux = p->computePath(dest);
        if(aux){
            next = p;
            return aux;
        }
    }

    return nullptr;

}

void Node::resetVisited(){

    pathWeight = std::numeric_limits<float>::max();

    if(!visited) return;
    visited = false;
    for(auto n:neighbours)
        n->resetVisited();

}

Node *Node::computeDijkstraPath(Node *dest, set<Node *> &allNodes)

{

    if(visited) throw string{"This should not happen"};
    visited = true;

    if(this == dest) return this;
    for(auto n: neighbours){
        const float dist = pathWeight + distanceTo(n);

        if(dist < n->getPathWeight()){
            n->setPathWeight(pathWeight + distanceTo(n));
            n->setPrev(this);
        }
    }

    Node* aux = nullptr;
    float dist = std::numeric_limits<float>::max();

    for(auto p: allNodes){

        if(!p->getVisited() && p->getPathWeight() < dist){
            aux = p;
            dist = p->getPathWeight();
        }
    }

    if(aux) return aux->computeDijkstraPath(dest, allNodes);
    throw string{"Path not found"};

}

void Node::printPath()

{
    cout << *data << " - ";
    if(next) next->printPath();
}

bool Node::getVisited() const

{
    return visited;
}

float Node::distanceTo(Node *n)

{
    return 1;
}

Node *Node::getPrev() const

{
    return prev;
}

void Node::setPrev(Node *value)

{
    prev = value;
}

float Node::getPathWeight() const

{
    return pathWeight;
}

void Node::setPathWeight(float value)

{
    pathWeight = value;
}

bool operator ==(const Node &n1, const Node &n2)

{
    return (*(n1.data) == *(n2.data));
}

ostream &operator <<(ostream &os, const Node &n)

{
    os << *(n.data);
    return os;
}
