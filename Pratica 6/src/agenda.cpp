#include <iostream>
#include "agenda.h"
#include "contato.h"
#include "fone.h"

using namespace std;

Agenda::Agenda(){
	this->size = 0;
}

bool Agenda::toInsert(string id){

    for(int i = 0; i < contacts.size(); i++){
        if(contacts[i]->id == id){
            cout << "false: id nao valido." << endl;
            return false;
        }
    }

    Contato *c1 = new Contato(id);
    contacts.push_back(c1);

    return true;
}

void Agenda::toLogin(string id){
    int id_vector = -1;

    for(int i = 0; i < contacts.size(); i++){
        if(id == contacts[i]->id){
            id_vector = i;
            break;
        }
    }
    if(id_vector == -1){
        cout << "fail: contato nao label." << endl;
    }else{
        //opcoesContato(id_vector);
    }
}

void Agenda::toShowAll(){
	cout << "contacts"<<endl;
    for(int i = 0; i < contacts.size(); i++){
        if(contacts[i] != nullptr){
            cout << endl <<"["<<contacts[i]->id <<"]"<< endl;
            for(int j = 0; j < contacts[i]->fones.size(); j++){
                if(contacts[i]->fones[j] != nullptr){
                    cout <<"["<<contacts[i]->fones[j]->data <<"]"<< endl;
                }
            }
        }
	}
}

Contato* Agenda::toRemove(string id){
	for(int i = 0; i < contacts.size(); i++){
        if(id == contacts[i]->id){
            auto *pass = contacts[i];
            contacts[i] = nullptr;
            return pass;
        }
    }
return nullptr;

}

void Agenda::toRename(string newId, int _id){
    int label = 0, i;
    for(i = 0; i < contacts.size(); i++){
        if(newId == contacts[i]->id){
            label = 1;
            cout << "fail: id invalido" << endl;
            break;
        }
    }
    if(label == 0){
        contacts[_id]->id = newId;
        cout << "sucess" << endl;
    }
}