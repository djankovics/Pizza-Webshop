#ifndef ADMIN_H
#define ADMIN_H

#include "felhasznalo.h"

class Admin : public Felhasznalo
{
public:
    Admin(
            string pnev,
            string pjelszo,
            int pszuletesiEv,
            string panyjaneve,
            int ppriviledgeLevel);
    void addPizza();
    void addSzakacs();
    void deletePizza();
    void deleteSzakacs();
    void editPizza();
    void listAllPizza();
    void logout();
};

#endif // ADMIN_H
