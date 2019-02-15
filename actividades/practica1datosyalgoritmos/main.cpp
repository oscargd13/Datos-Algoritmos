#include <iostream>
#include "metro.h"
#include "node.h"

using namespace std;

int main()
{
    string n1,n2,n3,n4;
    unsigned int x1,y1,x2,y2,x3,y3,x4,y4;
    cout << "Nombre primera estacion: ";
    cin >> n1;
    cout << "Sus coordenadas: ";
    cin >> x1; cin >> y1;
    cout << "Nombre segunda estacion: ";
    cin >> n2;
    cout << "Sus coordenadas: ";
    cin >> x2; cin >> y2;
    cout << "Nombre tercera estacion: ";
    cin >> n3;
    cout << "Sus coordenadas: ";
    cin >> x3; cin >> y3;
    cout << "Nombre cuarta estacion: ";
    cin >> n4;
    cout << "Sus coordenadas: ";
    cin >> x4; cin >> y4;

    Metro *e1 = new Metro(n1); e1->setX(x1); e1->setY(y1);
    Metro *e2 = new Metro(n2); e2->setX(x2); e2->setY(y2);
    Metro *e3 = new Metro(n3); e3->setX(x3); e3->setY(y3);
    Metro *e4 = new Metro(n4); e4->setX(x4); e4->setY(y4);

    Node *metro = new Node();

    metro->push_back(e1);
    metro->push_back(e2);
    metro->push_back(e3);
    metro->push_back(e4);
    metro->print();
    return 0;
}
