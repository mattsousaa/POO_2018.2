#include <iostream>
#include <sstream>
#include "nota.h"
#include "usuario.h"
#include "sistema.h"

using namespace std;

Sistema::Sistema(){
}

//não pode ter dois usernames iguais
bool Sistema::addUser(string username, string password){
    for(auto usuario : usuarios)
        if(usuario.getUsername() == username)
            return false;
    usuarios.push_back(Usuario(username, password));
    return true;
}

Usuario * Sistema::getUser(string username, string password){
    for(auto& usuario : usuarios)
        if((usuario.getUsername() == username) && (usuario.checkPassword(password)))
            return &usuario;
    return nullptr;
}

vector<string> Sistema::getUsernames(){
    vector<string> names;
    for(auto& user : usuarios)
        names.push_back(user.getUsername());
    return names;
}

void commandLine(Sistema& sistema){

string op = "";

Usuario * usuario = nullptr;

while(op != "fim"){

cout << "Digite help ou comando: ";
cin >> op;
if(op == "help"){
    cout << "addUser $username $password" << endl
         << "updatePass $oldpass $newpass" << endl
         << "addNote $titulo $texto" << endl
         << "rmNote $titulo" << endl
         << "users" << endl
         << "login $username $password" << endl
         << "logout" << endl
         << "show" << endl;
}

if(op == "users"){
    cout << "Usuarios: [ ";
    for(auto st : sistema.getUsernames())
        cout << st << " ";
    cout << "]"  << endl;
}

if(op == "addUser"){
    string name, pass;
    cin >> name >> pass;
    if(sistema.addUser(name, pass))
        cout << "sucesso" << endl;
    else
        cout << "username duplicado" << endl;
}

if(op == "login"){
    string name, pass;
    cin >> name >> pass;
    usuario = sistema.getUser(name, pass);
    if(usuario == nullptr)
        cout << "erro de login" << endl;
    else
        cout << "sucesso" << endl;
}

if(op == "show"){
    if(usuario == nullptr)
        cout << "ninguem logado" << endl;
    else
        cout << usuario->toString() << endl;
}

if(op == "rmNote"){
    string titulo;
    cin >> titulo;
    if(usuario == nullptr)
        cout << "ninguem logado" << endl;
    else
        cout << (usuario->rmNota(titulo)? "ok":"falhou") << endl;
}

if(op == "logout"){
    if(usuario != nullptr){
        usuario = nullptr;
        cout << "logout efetuado" << endl;
    }else{
        cout << "ninguem logado" << endl;
    }

}

if(op == "updatePass"){
    string old, newp;
    cin >> old >> newp;
    if(usuario == nullptr)
        cout << "ninguem logado" << endl;
    else
        cout << (usuario->updatePass(old, newp)? "ok" : "senha invalida") << endl;
}

if(op == "addNote"){
    string titulo, texto;
    cin >> titulo;
    getline(cin, texto);
    if(usuario)
        cout << (usuario->addNota(Nota(titulo, texto)) ? "nota adicionada" : "titulo duplicado") << endl;
    else
        cout << "usuario nao logado" << endl;

        }
    }
}

void initialize(Sistema &sistema){
    sistema.addUser("matt", "sousa");
    sistema.addUser("morena", "morena");
    Usuario * matt = sistema.getUser("matt", "sousa");
    matt->addNota(Nota("ligar", "morena"));
    matt->addNota(Nota("ouvir", "marília mendonça"));
    matt->addNota(Nota("chorar", "pela prova de eletrônica que deu ruim"));
    Usuario * morena = sistema.getUser("morena", "morena");
    morena->addNota(Nota("volta", "morena"));
    morena->addNota(Nota("saudades", "morena"));
    morena->addNota(Nota("Hey", "saudades"));
}