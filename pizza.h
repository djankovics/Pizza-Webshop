#ifndef PIZZA_H
#define PIZZA_H
#include <string>

using namespace std;

class Pizza
{
public:
    Pizza(string pizzaneve);


    string getFeltetek() const;
    void setFeltetek(const string &value);

    string getNev() const;
    void setNev(const string &value);

    void listPizza();
private:
    string feltetek = "";
    string nev = "";


};

#endif // PIZZA_H
