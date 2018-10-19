#ifndef CONTATO
#define CONTATO

#include <iostream>
#include <vector>
#include <string>
#include "fone.h"

using namespace std;

class Contato{
private:
    string name;
    vector<Fone> fones;
    
public:
    Contato(string nome);

    string getNome();

    vector<Fone> getFones();

    bool addFone(Fone _fone);

    bool removeFones(int id);
};

#endif //CONTATO