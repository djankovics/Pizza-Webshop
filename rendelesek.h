#ifndef RENDELESEK_H
#define RENDELESEK_H

#include "rendelo.h"
#include "rendeles.h"

class Rendelesek
{
private:
    int akt;
    int max;
public:
    Rendelesek();
    void addRendeles(Rendelo rendelo);
    void deleteRendeles(Rendeles torlendo);
    void listRendelesek();
};

#endif // RENDELESEK_H
