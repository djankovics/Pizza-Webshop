#include "felhasznalo.h"
#include "string"

using namespace std;

Felhasznalo::Felhasznalo(
        string pnev,
        string pjelszo,
        int pszuletesiEv,
        string panyjaneve,
        int ppriviledgeLevel
        ):
    nev(pnev),
    jelszo(pjelszo),
    szuletesiEv(pszuletesiEv),
    anyjaneve(panyjaneve),
    priviledgeLevel(ppriviledgeLevel)
{

}


string Felhasznalo::getAnyjaneve() const
{
    return anyjaneve;
}

string Felhasznalo::getJelszo() const
{
    return jelszo;
}

void Felhasznalo::setJelszo(const string &value)
{
    jelszo = value;
}

string Felhasznalo::getNev() const
{
    return nev;
}

void Felhasznalo::setNev(const string &value)
{
    nev = value;
}

int Felhasznalo::getPriviledgeLevel() const
{
    return priviledgeLevel;
}

void Felhasznalo::setPriviledgeLevel(int value)
{
    priviledgeLevel = value;
}

int Felhasznalo::getSzuletesiEv() const
{
    return szuletesiEv;
}

void Felhasznalo::setSzuletesiEv(int value)
{
    szuletesiEv = value;
}

bool Felhasznalo::passwordMatch(string pass)
{
    if(pass==getJelszo()) return true;
    else return false;
}

void Felhasznalo::setAnyjaneve(const string &value)
{
    anyjaneve = value;
}
