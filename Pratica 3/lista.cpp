#include <iostream>
#include <vector>
#include <sstream>
#include <string>
#include <algorithm>
#include "fone.h"
#include "lista.h"
#include "contato.h"

using namespace std;

bool Lista::addContato(Contato contato){
    for(Contato c1 : contatos){
        if(c1.getNome() == contato.getNome()){
            return false;
        }
    }
    contatos.push_back(contato);
    return true;
}

bool Lista::removeContatos(string nome){
    for(int i = 0; i < (int) contatos.size(); i++){
        if(nome == contatos[i].getNome()){
            contatos.erase(contatos.begin() + i);
            return true;
        }
    }
    return false;
}

string Lista::toString(){
    stringstream ss;

    for(Contato c1 : contatos){
        vector<Fone> fones = c1.getFones();
        ss << "- " << c1.getNome() << " ";
            for(Fone f1 : fones){
                ss << "[" << f1.id << ":" << f1.oper << ":" << f1.getNumber() << "] ";
            }
        ss << endl;
    }
    return ss.str();
}

int Lista::addFone(string nome, string oper, string numero){
    for(Contato& c1 : contatos){
        if(c1.getNome() == nome){
            vector<Fone> fones = c1.getFones();
            for(Fone& f1 : fones){
                if(f1.getLabel() == oper){
                    return -1;
                }
            }

            //Não permite números inválidos
            string data = "1234567890()- ";
                for(auto c : numero){
                    if(data.find(c) == string::npos)
                        return -2;
                }

            c1.addFone(Fone(oper, numero));

            return -3;
        }
    }
}

int Lista::removeFones(string nome, int id){
    for(Contato& c1 : contatos){
        if(c1.getNome() == nome){
            vector<Fone> fones = c1.getFones();
            for(Fone& f1 : fones){
                if(f1.getId() == id){
                    c1.removeFones(id);
                    return 1;
                }
            }
            return -2;
        }
    }
    return -1;
}

void Lista::atualiza(string nome, int id, string new_label, string new_number){
    for(Contato& c1 : contatos){
        if(c1.getNome() == nome){
            vector<Fone> fones = c1.getFones();
            for(Fone& f1 : fones){
                if(f1.getId() == id){
                    c1.removeFones(id);
                }
            }

            //Não permite números inválidos
            string data = "1234567890()- ";
                for(auto c : new_number){
                    if(data.find(c) == string::npos)
                        cout << "failure: fone invalido" << endl;
                }

            c1.addFone(Fone(new_label, new_number));
        }
    }
}

void init_Lista(Lista& lista){
    
    lista.addContato(Contato("DK"));
    lista.addContato(Contato("Robert"));
    lista.addContato(Contato("Joao"));
    lista.addContato(Contato("Jhonny"));
    lista.addContato(Contato("Camila"));
    lista.addContato(Contato("Rafa"));
    lista.addFone("DK", "oi", "4321");
    lista.addFone("DK", "tim", "1234");
    lista.addFone("Robert", "fixo", "3343");
    lista.addFone("Joao", "recado", "6789");
    lista.addFone("Jhonny", "casa", "9876");
    lista.addFone("Jhonny", "oi", "9872");
    lista.addFone("Camila", "tim", "9871");
    lista.addFone("Rafa", "vivo", "0921");
    lista.addFone("Rafa", "work", "8265");
    lista.addFone("Rafa", "home", "1922");
    lista.addFone("Rafa", "tim", "0918");
}