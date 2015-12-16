#ifndef SZAKACS_H
#define SZAKACS_H

#include "felhasznalo.h"

class Szakacs : public Felhasznalo
{
private:
    int szakacsSorSzam;
public:
    Szakacs();
    void addPizza();
    void deletePizza();
    void deleteRendeles();
    void editPizza();
    void listAllPizza();
    void listRendelesek();
    void logout();
};

#endif // SZAKACS_H