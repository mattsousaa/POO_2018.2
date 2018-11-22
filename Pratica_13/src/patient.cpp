#include "patient.h"
#include "doctor.h"
#include <sstream>
#include <iostream>
#include <string>

using namespace std;

Patient::Patient(string name = "", string diagostico = ""){}
Patient::~Patient(){}

string Patient::readMsg(){
    stringstream saida;
    for(size_t i = 0; i < inbox.size(); i++){
        saida << inbox[i].toString();
    }
    return saida.str();
}

void Patient::tie(void * d_doc){
    Doctor * doutor = (Doctor *)d_doc;
    this->diag_list.push_back(doutor);
}

void Patient::sendMsg(string de_fulano, string para_fulano, string msg){
    for(size_t i = 0; i < diag_list.size(); i++){
        if(diag_list[i]->name == para_fulano){
            diag_list[i]->inbox.push_back(Msg(de_fulano, msg));
            return;
        }
    }
    throw "fail: Deu ruuuimm mah";
}

void Patient::sendMsg(string para_fulano, string msg){
    for(size_t i = 0; i < diag_list.size(); i++){
        if(diag_list[i]->name == para_fulano)
            diag_list[i]->inbox.push_back(Msg(para_fulano, msg));
    }
}

string Patient::getDocs(size_t i = 0){
    if(i == diag_list.size())
        return "";
    
    return diag_list[i]->name + " " + getDocs(i+1);
}

string Patient::toString(){
    return "Pacientes: " + this->name + ":" + this->diagnostico + "\tMédicos: [" + getDocs() + "]" ;
}