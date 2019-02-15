#ifndef METRO_H
#define METRO_H

#include <iostream>

using namespace std;
class Metro
{
public:
    Metro(string n);
    void print() const;
    float distanceTo(Metro *e);

    string getName() const;
    void setName(const string &value);

    unsigned int getX() const;
    void setX(unsigned int value);

    unsigned int getY() const;
    void setY(unsigned int value);

private:
    string name;
    unsigned int x,y;
};

#endif // METRO_H
