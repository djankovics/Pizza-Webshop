#include "txttolist.h"
#include <list>
#include <fstream>
#include <iostream>
#include <string>

TxtToList::TxtToList()
{

}

list<string> TxtToList::fileReader(string filename)
{
    list <string> elements;
    ifstream txtFile(filename.c_str());
    //txtFile.open(filename.c_str());
    if (!txtFile.is_open()) throw "Nincs meg a " + filename + " fajl!";
    while (!txtFile.eof())
    {
        elements.push_back(filename);
    }
    txtFile.close();
    return elements;
}

