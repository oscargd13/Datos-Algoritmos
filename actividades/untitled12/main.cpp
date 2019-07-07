#include <iostream>
#include"tree.h"
#include "node.h"

using namespace std;

int main()
{
    Tree treeh;
    treeh.push(20);
    treeh.push(2);
    treeh.push(5);
    treeh.push(9);
    treeh.push(4);
    treeh.push(40);
    treeh.push(7);
    treeh.push(31);
    treeh.push(25);
    treeh.push(50);
    treeh.push(76);
    treeh.push(11);
    treeh.push(14);
    treeh.push(44);
    treeh.print();

    Node * aux= treeh.search(2);
    if(aux){aux->printNode();}


    return 0;
}
