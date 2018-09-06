#include <iostream>
#include <vector>
#include <sstream>
#include <string>
#include <algorithm>
#include "fone.h"
#include "lista.h"
#include "contato.h"

using namespace std;

Fone::Fone(string oper = "", string _number = ""){
    this->oper = oper;
    this->number = _number;
}

string Fone::getLabel(){
    return oper;
}

int Fone::getId(){
    return id;
}

string Fone::getNumber(){
    return number;
}