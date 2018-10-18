#ifndef PROFESSOR
#define PROFESSOR

#include <iostream>
#include <sstream>
#include <map>
#include <vector>
#include <string>

using namespace std;

class Professor{
public:
    string nome, id;

    Professor(string nome, string id);

    string toString(Professor &professor);

};

std::ostream& operator<<(std::ostream& os, const Professor& p);

#endif // PROFESSOR