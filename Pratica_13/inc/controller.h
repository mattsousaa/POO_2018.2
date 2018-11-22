#ifndef CONTROLLER_H
#define CONTROLLER_H

#include <iostream>
#include <sstream>
#include <algorithm>
#include "patient.h"
#include "rep.h"
#include "doctor.h"

using namespace std;

class Controller{

    Rep<User*> Users;

public:
    string shell(string linha){
    stringstream in(linha), saida;
    string op;
    in >> op;
    if(op == "addPats"){
        string nome_user, diagnostico;
        while(getline(in, nome_user, '-')){
            in >> diagnostico;
            nome_user.erase(remove(nome_user.begin(), nome_user.end(), ' '), nome_user.end());
            Users.addFromRep(nome_user, new Patient(nome_user, diagnostico));
        }
        saida << "Done";
        
    }else if (op == "addDocs"){
        string nome_user, specialidade;
        while(getline(in, nome_user, '-')){
            in >> specialidade;
            nome_user.erase(remove(nome_user.begin(), nome_user.end(), ' '), nome_user.end());
            Users.addFromRep(nome_user, new Doctor(nome_user, specialidade));
        }
        saida << "Done";

    }else if (op == "tie"){
        string doc, pat;
        in >> doc;
        while(in >> pat)
            Users.tieFromRep(doc, pat);
        saida << "Done\n";

    }else if (op == "msg"){
        string from,to ,text;
        in >> from >> to;
        getline(in, text);
        Users.sendMsgToRep(from, to, text);
        saida << "Done";

    }else if (op == "inbox"){
        string nome_user;
        in >> nome_user;
        saida << Users.readFromRep(nome_user);

    }else if (op == "see"){
        string nome_user;
        in >> nome_user;
        saida << Users.showFromRep(nome_user);

    }else if (op == "seeAll"){
        saida << Users.showAllFromRep();
    }
    
    return saida.str();
}

    void vaiDarBom(){
        
        string linha;

        while(1){

            getline(cin,linha);
            cout << "  " << linha << endl;
            if(linha == "end")
                break;
            try{
                cout << shell(linha) << endl;
            }catch(const char * msg){
                cout << msg << endl;
            }
        }
    }
};

#endif // CONTROLLER_H