#ifndef ADMIN_H
#define ADMIN_H

#include "felhasznalo.h"

class Admin : public Felhasznalo
{
public:
    Admin();
    void addPizza();
    void addSzakacs();
    void deletePizza();
    void deleteSzakacs();
    void editPizza();
    void listAllPizza();
    void logout();
};

#endif // ADMIN_H
