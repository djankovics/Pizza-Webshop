#ifndef PIZZAK_H
#define PIZZAK_H

#include "pizza.h"

class Pizzak
{
public:
    Pizzak();
    void addPizza(Pizza p);
    void deletePizza(Pizza p);
    void editPizza(Pizza p);
    void feltetHozzaad(int i, string s, Pizza p);
    void listAllPizza();


};

#endif // PIZZAK_H
