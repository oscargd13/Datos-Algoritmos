#include "data.h"



Data::Data(string n):

    nombre{n}
{

}

string Data::getValue() const
{
    return nombre;
}

void Data::setNombre(const string &value)
{
    nombre = value;
}


bool operator ==(const Data &d1, const Data &d2)

{
    return (d1.nombre == d2.nombre);
}

ostream &operator <<(ostream &os, const Data &d)

{
    os << d.nombre;

    return os;
}
