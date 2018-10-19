#include <iostream>
#include <vector>
#include <sstream>
#include <string>
#include <algorithm>
#include "lista.h"
#include "fone.h"
#include "contato.h"

using namespace std;

int main(){
    Lista lista;    
    string op = "";
    init_Lista(lista);

    while(1){
        cin >> op;
        if(op == "cmds"){
            cout << "init" << endl
                 << "rmC #name" << endl
                 << "show" << endl
                 << "add #name #label #number" << endl
                 << "update #name #id #new_label #new_number" << endl
                 << "rm #name #label" << endl;
        }

        if(op == "init"){
            string nome = read<string>();
            if(lista.addContato(Contato(nome)))
                cout << "sucess!" << endl;
            else
                cout << "failure: contato nao existe" << endl;
        }

        if(op == "rmC"){
            if(lista.removeContatos(read<string>()))
                cout << "sucess!" << endl;
            else
                cout << "failure: contato nao existe" << endl;
        }

        if(op == "show"){
            cout << lista.toString() << endl;
        }

        if("add" == op){
            string nome = read<string>();
            string oper = read<string>();
            string number = read<string>();
            int s = lista.addFone(nome, oper, number);
            if(s == -1)
                cout << "failure: label ja existe" << endl;
            else if(s == -2)
                cout << "failure: fone invalido" << endl;
            else if(s == -3)
                cout << "sucess" << endl;
        }

        if(op == "rm"){
            string name = read<string>();
            int oper = read<int>();
            int s = lista.removeFones(name, oper);
            if(s == 1)
                cout << "sucess" << endl;
            else if(s == -1)
                cout << "failure: nome nao encontrado" << endl;
            else if(s == -2)
                cout << "failure: label nao existe" << endl;
        }

        if(op == "update"){
            string name = read<string>();            
            int id = read<int>();
            string new_label = read<string>();
            string new_number = read<string>();
            lista.atualiza(name, id, new_label, new_number);
        }
    }
    return 0;
}