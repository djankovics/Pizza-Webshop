#ifndef PIZZAMAIN_H
#define PIZZAMAIN_H

#include <string>

using namespace std;

class PizzaMain
{
private:
    int akt;
    int max;
    int nevem;

public:
    PizzaMain();

    void addFelhasznalo(
            int priviledgeLevel,
            string nev,
            string jelszo,
            int szuletesiEv,
            string anyjaNeve
        );
    void authenticate(int a);
    void felhasznalokatkiir();
    void felhasznalotTorol(string s);
    void reg(string a, string p1, string p2);
    static void clrscr();

};

#endif // PIZZAMAIN_H
