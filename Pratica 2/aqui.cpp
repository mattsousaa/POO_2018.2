#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include "passageiro.h"
#include "topic.h"

using namespace std;

int main(){

	string escolha;
	string nome;
	int idade;
	int qtd_priori;
	int qtd_cad;

	Topic sddsMorena(0, 0);

while(1){

	cin >> escolha;

	if(escolha == "in"){

		cin >> nome;

		cin >> idade;

		if(idade < 60){

			if(sddsMorena.inserir(Passageiro(nome, idade, false, true)))
				cout << "done" << endl;
		} else{

			if(sddsMorena.inserir(Passageiro(nome, idade, true, true)))
				cout << "done." << endl;
		}

	} else if(escolha == "new"){

		cin >> qtd_cad;
		cin >> qtd_priori;

		sddsMorena = Topic(qtd_cad, qtd_priori);

		cout << "done" << endl;

	} else if(escolha == "out"){

		cin >> nome;

		if(sddsMorena.remover(nome))
			cout << "done" << endl;
	
	} else if(escolha == "show")

		sddsMorena.toString();
}

}