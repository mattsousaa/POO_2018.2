#include "fone.h"
#include "contato.h"

using namespace std;

Fone::Fone(string oper = "", string fone = ""){
	stringstream ss;
	this->oper = oper;
	this->fone = fone;
	ss << oper << ":" << fone;
	this->data = ss.str();
}

string Fone::toString(){
	stringstream ss;
	ss << data;
	return ss.str();
}