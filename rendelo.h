#ifndef RENDELO_H
#define RENDELO_H

#include "felhasznalo.h"

class Rendelo : public Felhasznalo
{
public:
    Rendelo(
            string pnev,
            string pjelszo,
            int pszuletesiEv,
            string panyjaneve,
            int ppriviledgeLevel
            );
    void listAllPizza();
    void listAllRendeles();
    void pizzaRendeles();
    void logout();
};

#endif // RENDELO_H
