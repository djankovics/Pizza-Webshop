#ifndef RENDELO_H
#define RENDELO_H

#include "felhasznalo.h"

class Rendelo : public Felhasznalo
{
public:
    Rendelo();
    void listAllPizza();
    void listAllRendeles();
    void pizzaRendeles();
    void logout();
};

#endif // RENDELO_H
