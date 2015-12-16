#ifndef FELHASZNALO_H
#define FELHASZNALO_H

#include <string>

using namespace std;

class Felhasznalo
{
private:
    string anyjaneve;
    string jelszo;
    string nev;
    int priviledgeLevel;
    int szuletesiEv;
public:
    Felhasznalo(
            string pnev,
            string pjelszo,
            int pszuletesiEv,
            string panyjaneve,
            int ppriviledgeLevel
            );
    string getAnyjaneve() const;
    void setAnyjaneve(const string &value);
    string getJelszo() const;
    void setJelszo(const string &value);
    string getNev() const;
    void setNev(const string &value);
    int getPriviledgeLevel() const;
    void setPriviledgeLevel(int value);
    int getSzuletesiEv() const;
    void setSzuletesiEv(int value);
    void kiir();
    bool passwordMatch(string pass);

};

#endif // FELHASZNALO_H
