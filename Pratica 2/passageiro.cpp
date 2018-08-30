#include "passageiro.h"

	string Passageiro::getNome(){
		return this->nome;
	}

	int Passageiro::getIdade(){
		return this->idade;
	}

	bool Passageiro::getPrioridade(){
		return this->prioridade;
	}

	bool Passageiro::getExiste(){
		return this->existe;
	}

	void Passageiro::setNome(string nome){
		this->nome = nome;
	}

	void Passageiro::setIdade(int idade){
		this->idade = idade;
	}

	void Passageiro::setPrioridade(bool prioridade){
		this->prioridade = prioridade;
	}

	void Passageiro::setExiste(bool existe){
		this->existe = existe;
	}

	Passageiro::Passageiro(string nome, int idade, bool prioridade, bool existe){
		this->nome = nome;
		this->idade = idade;
		this->prioridade = prioridade;
		this->existe = existe;
	}

	string Passageiro::toString(){

		stringstream ss;

		if(getExiste()){
			ss << getNome() << ":" << getIdade();
		} else{
			if(getPrioridade()){
				ss << " @ ";
			} else{
				ss << " # ";
			}
		}

		return ss.str();
	}