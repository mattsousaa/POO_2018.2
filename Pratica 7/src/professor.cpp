#include <iostream>
#include <sstream>
#include <map>
#include <vector>
#include <string>
#include "professor.h"

using namespace std;

Professor::Professor(string nome, string id){
    this->nome = nome;
    this->id = id;
}

string Professor::toString(Professor &professor){
    stringstream ss;
    ss << professor.id <<  ":" << professor.nome;
    return ss.str();
}

std::ostream& operator<<(std::ostream& os, const Professor& p){
  // write obj to stream
    os << p.id << ":" << p.nome;

  return os;
}
