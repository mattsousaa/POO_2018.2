#include "topic.h"
#include "passageiro.h"

	int Topic::getQtd_cad(){
		return this->qtd_cad;
	}

	int Topic::getCad_priori(){
		return this->cad_priori;
	}

	void Topic::setQtd_cad(int qtd_cad){
		this->qtd_cad = qtd_cad;
	}

	void Topic::setCad_priori(int cad_priori){
		this->cad_priori = cad_priori;
	}

	Topic::Topic(int qtd_cad, int cad_priori){

		setQtd_cad(qtd_cad);
		setCad_priori(cad_priori);

		for(int i = 0; i < getQtd_cad(); i++){
			if(i < getCad_priori()){
				cadeiras.push_back(Passageiro("", 0, true, false));
			} else{
				cadeiras.push_back(Passageiro("", 0, false, false));
			}
		}
	}

	void Topic::toString(){

		stringstream ss;

		int i = 0;

		ss << "Topic do Lobinho[";

		for(Passageiro morena: cadeiras){

			if(morena.getExiste()){

				if(i < cad_priori){
					ss << " @";
				} else{
					ss << " #";
				}
			}

			ss << morena.toString();
			i++;
		}

		ss << "]";
		cout << ss.str() << endl;

	}

	bool Topic::inserir(Passageiro morena){

		for(int i = 0; i < cadeiras.size(); i++){
			if(cadeiras[i].getNome() == morena.getNome()){
				cout << "fail:" << morena.getNome() << "ja esta na topic" << endl;
				return false;
			}
		}

			if(morena.getIdade() < 60){
				for(int i = getCad_priori(); i < cadeiras.size(); i++){
					if(!cadeiras[i].getExiste()){
						cadeiras[i] = morena;
						return true;
					}
				}

				for(int i = 0; i < getCad_priori(); i++){
					if(!cadeiras[i].getExiste()){
						cadeiras[i] = morena;
						//toString();
						return true;
					}
				}

				cout << "fail: topic lotada" << endl;
				return true;
			} else{

				if(cadeiras[cad_priori - 1].getExiste()){

					for(int i = getCad_priori(); i < cadeiras.size(); i++){
						if(!cadeiras[i].getExiste()){
							cadeiras[i] = morena;
							toString();
							return true;
						}
					}

				cout << "fail: topic lotada" << endl;
				return false;

				} else{

				for(int i = 0; i < cadeiras.size(); i++){
					if(!cadeiras[i].getExiste()){
						cadeiras[i] = morena;
						toString();
						return true;
					}
				}

				cout << "fail: topic lotada" << endl;
					return false;
				}
			} 
	}

	bool Topic::remover(string nome){

		int i = 0;

		for(Passageiro morena: cadeiras){
			if(morena.getNome() == nome){
				if(i < getCad_priori()){
					cadeiras[i].setPrioridade(true);
				} else{
					cadeiras[i].setPrioridade(false);
				}

				cadeiras[i].setNome("");
				cadeiras[i].setIdade(0);
				cadeiras[i].setExiste(false);

				return true;
			}

			i++;
		}

	cout << "fail: " << nome << " nao esta no trem" << endl;

	return false;

	}