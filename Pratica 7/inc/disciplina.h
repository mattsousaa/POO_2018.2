#ifndef DISCIPLINA
#define DISCIPLINA

#include <iostream>
#include <sstream>
#include <map>
#include <vector>
#include <string>

using namespace std;

class Disciplina{
public:
    string nome, id;

    Disciplina(string nome, string id);

    string toString(Disciplina &disciplina);

};

std::ostream& operator<<(std::ostream& os, const Disciplina& d);

#endif // DISCIPLINA