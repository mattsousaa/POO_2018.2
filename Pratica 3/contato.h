#ifndef CONTATO_H
#define CONTATO_H

#include <iostream>
#include <vector>
#include <sstream>
#include <string>
#include <algorithm>
#include "fone.h"
#include "lista.h"

using namespace std;

class Contato{

private:
    string name;
    
public:
	vector <Fone> fones;

    Contato(string nome);

    string getNome();

    vector<Fone> getFones();

    bool addFone(Fone telefone);

    bool removeFones(int id);

};

#endif //CONTATO_H