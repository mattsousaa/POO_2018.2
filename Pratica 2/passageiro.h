
#ifndef PASSAGEIRO_H
#define PASSAGEIRO_H

#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

class Passageiro{

private:

	string nome;
	int idade;
	bool prioridade;
	bool existe;

public:

	string getNome();

	int getIdade();

	bool getPrioridade();

	bool getExiste();

	void setNome(string nome);

	void setIdade(int idade);

	void setPrioridade(bool prioridade);

	void setExiste(bool existe);

	Passageiro(string nome, int idade, bool prioridade, bool existe);

	string toString();
};

#endif // PASSAGEIRO_H