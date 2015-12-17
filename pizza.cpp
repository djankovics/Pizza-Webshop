#include "pizza.h"

Pizza::Pizza(string pizzaneve) : nev(pizzaneve)
{

}

string Pizza::getFeltetek() const
{
    return feltetek;
}

void Pizza::setFeltetek(const string &value)
{
    feltetek = value;
}

string Pizza::getNev() const
{
    return nev;
}

void Pizza::setNev(const string &value)
{
    nev = value;
}

void Pizza::listPizza()
{

}

