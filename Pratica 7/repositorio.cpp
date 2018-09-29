#include <iostream>
#include <sstream>
#include <map>
#include <vector>
#include <string>

using namespace std;

template <class T>
T read(stringstream& msg){
    T t;
    msg >> t;
    return t;
}

template <class T>
class Repositorio{

private:
    map<string, T> elements;
    string name;

public:

    Repositorio(string name = ""){
        this->name = name;
    }

    T* toAdd(string id, T t){
        if(elements.count(id) == 1)
            throw "fail: " + name + " " + id + "ja existe";
        elements[id] = t;
        return &elements[id];
    }

    T * get(string id){
        if(elements.count(id) == 0)
            throw "fail: " + name + " " + id + "nao existe";
        return &elements[id];
    }

    T& at(string id){
        if(elements.count(id) == 0)
            throw "fail: " + name + " " + id + "nao existe";
        return elements[id];
    }

    bool has(string id){
        return elements.count(id);
    }

    void toRemove(string id){
        if(!elements.erase(id))
            throw "fail: " + name + " " + id + " nao existe";
    }

    string toString(string __in = "\n"){
        stringstream ss;

        if(elements.size() == 0)
            return "";
        
        for(auto it = elements.begin(); it != elements.end(); it++)
            ss << it->second << __in;

        string final = ss.str();
        return final.substr(0, final.size() - __in.size());
    }

    vector<T> getValues(){
        std::vector<T> vet;
        for(auto it = elements.begin(); it != elements.end(); it++)
            vet.push_back(it->second);
        return vet;
    }

    vector<string> getKeys(){
        vector<string> vet;
        for(auto it = elements.begin(); it != elements.end(); it++)
            vet.push_back(it->first);
        return vet;
    }

};

class Aluno{
public:
    string nome, curso, id;

    Aluno(string nome = "", string curso = "", string id = ""){
        this->nome = nome;
        this->curso = curso;
        this->id = id;
    }

    string toString(Aluno &aluno){
        stringstream ss;
        ss << aluno.id << ":" << aluno.curso << ":" << aluno.nome;
        return ss.str();
    }
};

std::ostream& operator<<(std::ostream& os, const Aluno& a){
  // write obj to stream
    os << a.id << ":" << a.curso << ":" << a.nome;

  return os;
}

class Professor{
public:
    string nome, id;

    Professor(string nome = "", string id = ""){
        this->nome = nome;
        this->id = id;
    }

    string toString(Professor &professor){
        stringstream ss;
        ss << professor.id <<  ":" << professor.nome;
        return ss.str();
    }

};

std::ostream& operator<<(std::ostream& os, const Professor& p){
  // write obj to stream
    os << p.id << ":" << p.nome;

  return os;
}

class Disciplina{
public:
    string nome, id;

    Disciplina(string nome = "", string id = ""){
        this->nome = nome;
        this->id = id;
    }

    string toString(Disciplina &disciplina){
        stringstream ss;
        ss << disciplina.id <<  ":" << disciplina.nome;
        return ss.str();
    }

};

std::ostream& operator<<(std::ostream& os, const Disciplina& d){
  // write obj to stream
    os << d.id << ":" << d.nome;

  return os;
}

class Controller{
public:
    Repositorio<Aluno> r_al;
    Repositorio<Professor> r_pr;
    Repositorio<Disciplina> r_dis;

    Controller():
        r_al("aluno"), r_pr("professor"), r_dis("disciplina")
    {}

    void menu(string _in){
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

    void vaiDarBom(){
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

};

int main(){
    Controller controller;
    controller.vaiDarBom();
    return 0;
}

