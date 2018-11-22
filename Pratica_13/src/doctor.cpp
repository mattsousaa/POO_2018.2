#include "doctor.h"

Doctor::Doctor(string name = "", string spec = "") : User(name),spec(spec){}

Doctor::~Doctor(){}

string Doctor::readMsg(){
    stringstream out;
    for(size_t i = 0; i < inbox.size(); i++){
        out << inbox[i].toString();
    }
    return out.str();
}

void Doctor::sendMsg(string de_fulano, string para_fulano, string msg){
    for(size_t i = 0; i < p_list.size(); i++){
        if(p_list[i]->name == para_fulano)
            p_list[i]->inbox.push_back(Msg(de_fulano, msg));
    }
}

string Doctor::getPats(size_t i = 0){
    if(i == p_list.size())
        return "";
    return p_list[i]->name + " " + getPats(i+1);
}

string Doctor::toString(){
    return "Médicos: " + this->name + ":" + this->spec + "\tPacientes: [" + getPats() + "]" ;
}

void Doctor::sendMsg(string para_fulano, string text){
    for(size_t i = 0; i < p_list.size(); i++){
        if(p_list[i]->name == para_fulano)
            p_list[i]->inbox.push_back(Msg(para_fulano, text));
    }
}

void Doctor::tie(void * p_pac){
    Patient * pac = (Patient *) p_pac;
    stringstream pats(getPats());
    string buffer;
    for(size_t i = 0; i < pac->diag_list.size(); i++){
        if(pac->diag_list[i]->spec == this->spec)
            throw "fail: ja tem um medico com essa especialidade";
    }

    while(pats >> buffer){
        if(pac->name == buffer)
            throw "fail: Paciente ja esta na lista";
    }
    
    pac->tie(this);
    p_list.push_back(pac);
}