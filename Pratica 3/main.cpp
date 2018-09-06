#include <iostream>
#include <vector>
#include <sstream>
#include <string>
#include <algorithm>

using namespace std;

template <class T>
T read(){
    T t;
    cin >> t;
    return t;
}

class Fone{

public:
    string oper;
    string number;
    int id{0};

    Fone(string oper = "", string _number = ""){
        this->oper = oper;
        this->number = _number;
    }

    string getLabel(){
        return oper;
    }

    int getId(){
        return id;
    }

    string getNumber(){
        return number;
    }
};


class Contato{

private:
    string name;
    vector<Fone> fones;
    
public:
    Contato(string nome){
        name = nome;
    }

    string getNome(){
        return name;
    }

    vector<Fone> getFones(){
        return fones;
    }


    bool addFone(Fone _fone){
        fones.push_back(_fone);

        for(int i = 0; i < (int)fones.size(); i++){
            fones[i].id++;
        }

        return true;
    }

    bool removeFones(int id){
        for(int i = 0; i < (int)fones.size(); i++){
            if(fones[i].getId() == id){
                fones.erase(fones.begin() + i);
                return true;
            }

        }
        return false;
    }

};

class Lista{

private:
    vector<Contato> contatos;

public:
    Lista(){}

    bool addContato(Contato contato){
        for(Contato c1 : contatos){
            if(c1.getNome() == contato.getNome()){
                return false;
            }
        }
        contatos.push_back(contato);
        return true;
    }

    bool removeContatos(string nome){
        for(int i = 0; i < (int) contatos.size(); i++){
            if(nome == contatos[i].getNome()){
                contatos.erase(contatos.begin() + i);
                return true;
            }
        }
        return false;
    }

    string toString(){
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

    int addFone(string nome, string oper, string numero){
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

    int removeFones(string nome, int id){
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

    void atualiza(string nome, int id, string new_label, string new_number){
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

};

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