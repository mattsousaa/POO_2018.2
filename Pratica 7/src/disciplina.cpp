#include <iostream>
#include <sstream>
#include <map>
#include <vector>
#include <string>
#include "disciplina.h"

using namespace std;

Disciplina::Disciplina(string nome, string id){
    this->nome = nome;
    this->id = id;
}

string Disciplina::toString(Disciplina &disciplina){
    stringstream ss;
    ss << disciplina.id <<  ":" << disciplina.nome;
    return ss.str();
}

std::ostream& operator<<(std::ostream& os, const Disciplina& d){
  // write obj to stream
    os << d.id << ":" << d.nome;

  return os;
}