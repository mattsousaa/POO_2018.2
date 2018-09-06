#ifndef LISTA_H
#define LISTA_H

#include <vector>
#include "fone.h"
#include "contato.h"

using namespace std;

class Lista{

private:
    
public:
    vector<Contato> contatos;
    Lista(){}

    bool addContato(Contato contato);

    bool removeContatos(string nome);

    string toString();

    int addFone(string nome, string oper, string numero);

    int removeFones(string nome, int id);

    void atualiza(string nome, int id, string new_label, string new_number);

};

void init_Lista(Lista& lista);

#endif //LISTA_H