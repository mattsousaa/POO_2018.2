#include <iostream>
#include <sstream>
#include <vector>
#include <map>

using namespace std;

class Fone {
public:
    string id;
    string number;

    Fone(string id = "", string number = ""){
        this->id = id;
        this->number = number;
    }

    static bool validate(string number) {
        string data = "1234567890()- ";
        for(auto c : number)
            if(data.find(c) == string::npos)
                return false;
        return true;
    }
};

class Contato {
    string name;
    vector<Fone> fones;
    bool isFavorited{false};

public:
    Contato(string name = ""){
        this->name = name;
    }

    string getName(){
        return name;
    }

    void addFone(Fone fone){
        if(!Fone::validate(fone.number))
            throw string("fone " + fone.number + " invalido");
        fones.push_back(fone);
    }

    void rmFone(size_t indice){
        if(indice < 0 || indice >= fones.size())
            throw string("indice " + to_string(indice) + " nao existe");
        fones.erase(fones.begin() + indice);
    }

    vector<Fone> getFones(){
        vector<Fone> resp;
        for(auto fone: fones)
            resp.push_back(fone);
        return resp;
    }

    string toString(){
        string saida = this->name + " C ";
        int i = 0;
        for(auto fone : getFones())
            saida += "[" + to_string(i++) + ":" + fone.id + ":" + fone.number + "]";
        return saida;
    }

    void setFavorito(bool _fav){
        isFavorited = _fav;
    }

    bool getFavorito(){
        return isFavorited;
    }

};

class Agenda {
    map<string, Contato> contatos;
    map<string, Contato*> favoritos;

public:
    void addContato(Contato cont){
        string name = cont.getName();
        if(contatos.count(name) == 1)
            throw string("contato " + name + " ja existe");
        contatos[name] = cont;
    }

    void rmContato(string name) {
        contatos.erase(name);
    }

    Contato * getContato(string name){
        if(contatos.count(name))
            return &contatos[name];
        throw string("  contato " + name + " nao existe");
    }

    vector<Contato> getContatos(){
        vector<Contato> resp;
        for(auto& par : contatos)
            resp.push_back(par.second);
        return resp;
    }

    vector<Contato> search(string pattern){
        vector<Contato> resp;
        for(auto& par : contatos)
            if(par.second.toString().find(pattern) != string::npos)
                resp.push_back(par.second);
        return resp;
    }

    string toString(){
        string saida = "";
        for(auto contato : getContatos())
            saida += contato.toString() + "\n";
        return saida;
    }

/*******************************************************************************************/

/* Implementação das funções pedidas (Parte 1)
(1) - Favoritar
(2) - Desfavoritar
(3) - Mostrar favoritos */

    bool favoritar(string _nome){

        Contato elemento;
        //for(Contato& elemento : contatos){
        auto it = contatos.find(_nome);

        if(it != contatos.end()){
            contatos.at(_nome).setFavorito(true);
            favoritos.insert(make_pair(_nome, &contatos.at(_nome)));

        } else{
            cout << "Usuario inexistente" << endl;
        }


        /*
        if(elemento.getName() == _nome){
            elemento.setFavorito(true);
            favoritos.push_back(elemento);
            return true;
        }*/

        return true;
    }

    bool desfavoritar(string _nome){

        //Contato elemento;
        auto it = contatos.find(_nome);

        if(it != contatos.end()){
            contatos.at(_nome).setFavorito(false);
            favoritos.erase(_nome);
        } else{
            cout << "Usuário inexistente" << endl;
        }

        return false;
    }

    void showFavoritos(){
        stringstream ss;
        for(auto it : contatos){
            if(it.second.getFavorito()){
                ss << "@" <<it.second.toString() << endl;
            }
        }

        cout << ss.str();
    }

/*******************************************************************************************/

};

class Controller {

    Agenda agenda;
public:

    void shell(string line){
        stringstream ss(line);
        string op;
        ss >> op;

        if(op == "addContato"){
            string name, id_number;
            ss >> name;
            Contato cont(name);
            while(ss >> id_number){
                string id, fone;
                stringstream ssfone(id_number);
                getline(ssfone, id, ':');
                ssfone >> fone;
                cont.addFone(Fone(id, fone));
            }
            agenda.addContato(cont);
        }
        else if(op == "rmFone"){
            string name;
            int indice;
            ss >> name >> indice;
            agenda.getContato(name)->rmFone(indice);
        }
        else if(op == "rmContato"){
            string name;
            ss >> name;
            agenda.rmContato(name);
        }
        else if(op == "agenda"){
            cout << agenda.toString();
        }
        else if(op == "search"){
            string pattern;
            ss >> pattern;
            auto resp = agenda.search(pattern);
            for(auto contato : resp)
                cout << contato.toString() << endl;
        }
        else if(op == "fav"){
            string name;
            ss >> name;
            agenda.favoritar(name);
            cout << "done";
        }
        else if(op == "showFav"){
            string name;
            ss >> name;
            agenda.showFavoritos();
            cout << "done";
        }
        else if(op == "desfav"){
            string name;
            ss >> name;
            agenda.desfavoritar(name);
            cout << "done";
        }

        /*
        if(op == "fav"){
            string name;
            ss >> name;
            agenda.favoritar(name);
            return "done";
        }
        if(op == "desfav"){
            string name;
            ss >> name;
            agenda.desfavoritar(name);
            return "done";
        }
        if(op == "showFav"){
            string saida = "";
            auto favs = agenda.getFavoritos();
            for(auto contato : favs)
                saida += contato.toString() + "\n";
            return saida;
        }
        */
        else
            cout << "comando invalido" << endl;
    }


    void exec() {
        string line = "";
        while(true){
            getline(cin, line);
            cout << "$" << line << endl;
            if(line == "end")
                return;
            try {
                shell(line);
            } catch(const string& e) {
                cout << e << endl;
            }
        }
    }
};

int main()
{
    Controller controller;
    controller.exec();
    return 0;
}
