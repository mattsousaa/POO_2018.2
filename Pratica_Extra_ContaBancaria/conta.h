#include <iostream>
#include <sstream>
#include "operacao.h"

using namespace std;

template <class T>

T read(){
    T t;
    cin >> t;
    return t;
}

class Conta{

private:
	int conta;
	int id;
	float saldo{0};
	vector<Operacao> extrato;

public:
	Conta(int id = 0);

	int getConta();

	float getSaldo();

    int getId();

    void setConta(int conta);

    void setSaldo(int saldo);

    void setId(int id);

	bool saque(float valor);

	bool deposito(float valor);

	string getExtrato();

    string getExtratoN(int n);

};