#include <iostream>
#include <string>
#include "fone.h"

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