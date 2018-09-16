#ifndef PLUTO_SYSTEM
#define PLUTO_SYSTEM

#include <vector>
#include <string>
#include "transacao.h"

using namespace std;

class Pluto_System{

private:
	int nextId{0};
	vector<Transacao> transacoes;
	float balanco{0.0f};

public:
	Pluto_System(float balanco);

	bool addTran(string name,float valor);

	bool removeTran(int id);

	string toStringTran();

	string toStringCli(string nome);

	float getBalanco();

};

void init(Pluto_System& s1);

#endif // PLUTO_SYSTEM