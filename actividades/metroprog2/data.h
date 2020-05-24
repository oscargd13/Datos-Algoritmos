#ifndef DATA_H
#define DATA_H
#include <iostream>

using namespace std;

class Data

{
    friend bool operator == (Data const & d1, Data const & d2);
    friend ostream & operator << (ostream & os, Data const & d);

public:

    Data(string n);

    string getValue() const;
    void setNombre(const string &value);

protected:

    string nombre;

};


bool operator == (Data const & d1, Data const & d2);
ostream & operator << (ostream & os, Data const & d);

#endif // DATA_H
