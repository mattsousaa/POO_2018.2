#include <iostream>
#include <sstream>
#include <map>
#include <vector>
#include <string>
#include "aluno.h"

using namespace std;

Aluno::Aluno(string nome, string curso, string id){
    this->nome = nome;
    this->curso = curso;
    this->id = id;
}

string Aluno::toString(Aluno &aluno){
    stringstream ss;
    ss << aluno.id << ":" << aluno.curso << ":" << aluno.nome;
    return ss.str();
}

std::ostream& operator<<(std::ostream& os, const Aluno& a){
  // write obj to stream
    os << a.id << ":" << a.curso << ":" << a.nome;

  return os;
}
