#ifndef OPERACAO_H
#define OPERACAO_H

#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

class Operacao{

private:
	string descricao;
	float valor;

public:

	Operacao(string descricao, int valor);

	string getDescricao();

	float getValor();

	void setDescricao(string descricao);

	void setValor(float valor);

};

#endif // OPERACAO_H