#ifndef TXTTOLIST_H
#define TXTTOLIST_H
#include <list>
#include <string>

using namespace std;

class TxtToList
{
private:

public:
    TxtToList();
    list<string> fileReader(string filename);
};

#endif // TXTTOLIST_H
