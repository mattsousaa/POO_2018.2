#include <iostream>
#include <sstream>
#include "operacao.h"
#include "conta.h"

Conta::Conta(int id){
	this->setId(id);
}

int Conta::getConta(){
    return this->conta;
}

float Conta::getSaldo(){
    return this->saldo;
}

int Conta::getId(){
    return this->id;
}

void Conta::setConta(int conta){
    this->conta = conta;
}

void Conta::setSaldo(int saldo){
    this->saldo = saldo;
}

void Conta::setId(int id){
    this->id = id;
}

bool Conta::saque(float valor){
	if((this->getSaldo() < valor) || (valor < 0)){
		return false;
	}

	this->saldo -= valor;
	this->extrato.push_back(Operacao("Saque: -", valor));

	return true;
}

bool Conta::deposito(float valor){
    if(valor < 1){
        return false;
    }

    this->saldo += valor;
    this->extrato.push_back(Operacao("Deposito: +", valor));

    return true;
}

string Conta::getExtrato(){
    stringstream ss;
    for (Operacao vetor : extrato){
        ss << vetor.getDescricao() << " " << vetor.getValor() << endl;
    }
    return ss.str();
}

string Conta::getExtratoN(int n){
    stringstream ss;
    int tam = (int)(extrato.size()) - n;
    for(; tam < (int)extrato.size(); tam++){
        ss << extrato[tam].getDescricao() << " " << extrato[tam].getValor() << endl;
    }
    return ss.str();
}