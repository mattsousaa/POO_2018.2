#ifndef TOPIC_H
#define TOPIC_H

#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include "passageiro.h"

using namespace std;

class Topic{

private:

	int qtd_cad;
	int cad_priori;

public:

	vector <Passageiro> cadeiras;

	int getQtd_cad();

	int getCad_priori();

	void setQtd_cad(int qtd_cad);

	void setCad_priori(int cad_priori);

	Topic(int qtd_cad, int cad_priori);

	void toString();

	bool inserir(Passageiro morena);

	bool remover(string nome);

};

#endif // TOPIC_H