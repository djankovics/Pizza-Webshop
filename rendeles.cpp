#include "rendeles.h"
#include <string>

Rendeles::Rendeles(
        string tulaj,
        Pizza *p) :
    tulajdonos(tulaj),
    rendeltpizza(*p)
{

}

int Rendeles::getId() const
{
    return id;
}


string Rendeles::getTulaj() const
{
    return tulajdonos;
}


