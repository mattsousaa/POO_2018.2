#include <iostream>
#include <sstream>
#include <map>
#include <vector>
#include <string>
#include "controller.h"
#include "repositorio.h"
#include "aluno.h"
#include "professor.h"
#include "disciplina.h"

using namespace std;

Controller::Controller():
    r_al("aluno"), r_pr("professor"), r_dis("disciplina")
{}

void Controller::menu(string _in){
    stringstream ss(_in);
    string op;
    ss >> op;
    if(op == "addAlu"){
        string id, curso, nome;
        ss >> id >> curso;
        getline(ss, nome);
        r_al.toAdd(id, Aluno(id, curso, nome.substr(1)));
    } else if(op == "addPro"){
        string id, nome;
        ss >> id;
        getline(ss, nome);
        r_pr.toAdd(id, Professor(id, nome.substr(1)));
    } else if(op == "addDis"){
        string id, nome;
        ss >> id;
        getline(ss, nome);
        r_dis.toAdd(id, Disciplina(id, nome.substr(1)));
    } else if(op == "getAlu"){
        cout << r_al.at(read<string>(ss)) << endl;
    } else if(op == "getPro"){
        cout << r_pr.at(read<string>(ss)) << endl;
    } else if(op == "getDis"){
        cout << r_dis.at(read<string>(ss)) << endl;
    } else if(op == "showAlu"){
        cout << r_al.toString() << endl;
    } else if(op == "showPro"){
        cout << r_pr.toString() << endl;
    } else if(op == "showDis"){
        cout << r_dis.toString()<< endl;
    } else if(op == "rmAlu"){
        r_al.toRemove(read<string>(ss));
    } else if(op == "rmPro"){
        r_pr.toRemove(read<string>(ss));
    } else if(op == "rmDis"){
        r_dis.toRemove(read<string>(ss));
    } else{
        cout << "fail: comando invalido" << endl;
    }
}

void Controller::vaiDarBom(){
    string _in;

    while(true){
        getline(cin, _in);
        cout << "$" << _in << endl;
        if(_in == "end")
            return;
        try{
            menu(_in);
        }catch(string e){
            cout <<  e << endl;
        }
    }
}
