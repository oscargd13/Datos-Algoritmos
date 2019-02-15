#include "metro.h"
#include <iostream>
#include <math.h>

using namespace std;

Metro::Metro(string n):
    name{n}
{

}

void Metro::print() const
{
    cout << "Estacion: " << name << ", Coordenadas: " << x << ", " << y << endl;
}

float Metro::distanceTo(Metro *e)
{
    float d;
    int x1 = x; int x2 = e->getX();
    int y1 = y; int y2 = e->getY();

    return d = sqrt((x2 - x1)^2 + (y2 - y1)^2);
}

string Metro::getName() const
{
    return name;
}

void Metro::setName(const string &value)
{
    name = value;
}

unsigned int Metro::getX() const
{
    return x;
}

void Metro::setX(unsigned int value)
{
    x = value;
}

unsigned int Metro::getY() const
{
    return y;
}

void Metro::setY(unsigned int value)
{
    y = value;
}
