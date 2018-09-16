#include "pluto_system.h"
#include "transacao.h"
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

Pluto_System::Pluto_System(float balanco){
	this->balanco = balanco;
};

bool Pluto_System::addTran(string name,float valor){
	if(valor < 0){
		if(valor * (-1) > balanco){
			return false;
		}

		transacoes.push_back(Transacao(nextId, name, valor));
		balanco += valor;
		nextId += 1;
		return true;
	} else{

		transacoes.push_back(Transacao(nextId, name, valor));
		balanco += valor;
		nextId += 1;
		return true;
	}

}

bool Pluto_System::removeTran(int id){
    for(int i = 0; i < (int) transacoes.size(); i++){
        if(transacoes[i].getId() == id){
            balanco -= transacoes[i].getValue();
            transacoes.erase(transacoes.begin() + i);
            return true;
        }
    }
    return false;
}

string Pluto_System::toStringTran(){
    stringstream ss;
    ss << "Lista de Transações:" << endl;
    for(Transacao t1 : transacoes){
        ss << "id:" << t1.getId() << " [" << t1.getName() << " " << t1.getValue() << "]"<< endl;
    }
    return ss.str();

}

string Pluto_System::toStringCli(string nome){
        stringstream ss;
        float saldo = 0;
        ss << "Lista de transações de " << nome << endl;
        for(Transacao t1 : transacoes){
            if(t1.getName() == nome){
                ss << t1.getId() << " " << t1.getName() << " " << t1.getValue() << endl;
                saldo += t1.getValue();
            }
        }
        ss << "Saldo: " << saldo << endl;
        return ss.str();
}

float Pluto_System::getBalanco(){
	return this->balanco;
}

void init(Pluto_System& s1){
    s1.addTran("Mateus", 1000);
    s1.addTran("Pedro", -2000);
    s1.addTran("Alisson", 500);
    s1.addTran("DK", -100);
    s1.addTran("Rebanho", -500);
}