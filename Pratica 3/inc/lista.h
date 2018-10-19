#ifndef LISTA
#define LISTA

#include <iostream>
#include <vector>
#include <string>
#include "contato.h"

using namespace std;

class Lista{

private:
    vector<Contato> contatos;
public:
    Lista();

    bool addContato(Contato contato);

    bool removeContatos(string nome);

    string toString();

    int addFone(string nome, string oper, string numero);

    int removeFones(string nome, int id);

    void atualiza(string nome, int id, string new_label, string new_number);

};

void init_Lista(Lista& lista);

#endif //LISTA