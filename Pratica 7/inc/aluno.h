#ifndef ALUNO
#define ALUNO

#include <iostream>
#include <sstream>
#include <map>
#include <vector>
#include <string>

using namespace std;

class Aluno{

public:
    string nome, curso, id;

    Aluno(string nome, string curso, string id);

    string toString(Aluno &aluno);
};

std::ostream& operator<<(std::ostream& os, const Aluno& a);

#endif // ALUNO