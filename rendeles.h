#ifndef RENDELES_H
#define RENDELES_H
#include <string>
#include "pizza.h"

using namespace std;

class Rendeles
{
private:
    int id;
    int sajatid;
    string tulajdonos = "";
public:
    Rendeles();
    Rendeles(string tulaj, Pizza *p);
    int getId() const;
    string getTulaj() const;
    void kiir();

};

#endif // RENDELES_H
