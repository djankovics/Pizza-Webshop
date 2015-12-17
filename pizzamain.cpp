#include "pizzamain.h"
#include "felhasznalo.h"
#include <fstream>
#include <string>
#include <iostream>

using namespace std;

PizzaMain::PizzaMain()
{

}

void PizzaMain::addFelhasznalo(int priviledgeLevel, string nev, string jelszo, int szuletesiEv, string anyjaNeve)
{
    //Felhasznalo felhasznalo = new Felhasznalo(nev, jelszo, szuletesiEv, anyjaNeve, priviledgeLevel);
}

void PizzaMain::authenticate(int a)
{

}

void PizzaMain::clrscr()
{
    system("cls");
}

void PizzaMain::felhasznalokatkiir()
{
    ifstream felhasznalokListaja;
    felhasznalokListaja.open("felhasznalok.txt");
    char output[100];
    if (!felhasznalokListaja.is_open()) throw "Nincs meg a felhasznalokat tartalmazo fajl!";
    while (!felhasznalokListaja.eof())
    {
        felhasznalokListaja >> output;
        cout <<"  " << output << endl;
    }
    cout <<"\n";
    felhasznalokListaja.close();
}

void PizzaMain::felhasznalotTorol(string s)
{

}

void PizzaMain::reg(string a, string p1, string p2)
{

}

