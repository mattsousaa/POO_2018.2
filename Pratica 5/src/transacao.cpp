#include <iostream>
#include <string>
#include "pluto_system.h"
#include "transacao.h"

using namespace std;

Transacao::Transacao(int id, string name, float value){
	this->id = id;
	this->name = name;
	this->value = value;
}

int Transacao::getId(){
	return this->id;
}

float Transacao::getValue(){
	return this->value;
}

string Transacao::getName(){
	return this->name;
}

void Transacao::setId(int id){
	this->id = id;
}

void Transacao::setValue(float value){
	this->value = value;
}

void Transacao::setName(string name){
	this->name = name;
}

