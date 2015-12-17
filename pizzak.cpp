#include "pizzak.h"
#include <iostream>
#include <fstream>

Pizzak::Pizzak()
{

}

void Pizzak::addPizza(Pizza p)
{

}

void Pizzak::deletePizza(Pizza p)
{

}

void Pizzak::editPizza(Pizza p)
{

}

void Pizzak::feltetHozzaad(int i, string s)
{

}

void Pizzak::listAllPizza()
{
    ifstream pizzak;
    pizzak.open("pizzak.txt");
    char output[100];
    if (!pizzak.is_open()) throw "Nincs meg a pizzakat tartalmazo fajl!";
    while (!pizzak.eof())
    {
        pizzak >> output;
        cout <<"  " << output << endl;
    }
    cout <<"\n";
    pizzak.close();
}
