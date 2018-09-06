#include <iostream>
#include <vector>
#include <sstream>
#include <string>
#include <algorithm>
#include "fone.h"
#include "lista.h"
#include "contato.h"

using namespace std;

Contato::Contato(string nome){
    name = nome;
}

string Contato::getNome(){
    return name;
}

vector<Fone> Contato::getFones(){
    return fones;
}


bool Contato::addFone(Fone telefone){
    fones.push_back(telefone);

    for(int i = 0; i < (int)fones.size(); i++){
        fones[i].id++;
    }

    return true;
}

bool Contato::removeFones(int id){
    for(int i = 0; i < (int)fones.size(); i++){
        if(fones[i].getId() == id){
            fones.erase(fones.begin() + i);
            return true;
        }

    }
    return false;
}