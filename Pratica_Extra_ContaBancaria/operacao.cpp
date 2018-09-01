#include <iostream>
#include <sstream>
#include "operacao.h"
#include "conta.h"

using namespace std;

Operacao::Operacao(string descricao, int valor){
	this->setDescricao(descricao);
	this->setValor(valor);
}

string Operacao::getDescricao(){
	return this->descricao;
}

float Operacao::getValor(){
	return this->valor;
}

void Operacao::setDescricao(string descricao){
	this->descricao = descricao;
}

void Operacao::setValor(float valor){
	this->valor = valor;
}