#include <iostream>
#include <sstream>
#include <vector>
#include "conta.h"
#include "operacao.h"

using namespace std;

int main(){

    Conta conta;
    string op;
    int cont_init;
    cout << "Digite menu: " << endl;

    while(op != "sair"){
        cin >> op;

        if(op == "menu"){
            stringstream menu;
            menu << "init _id" << endl
                 << "show" << endl
                 << "saque _valor" << endl
                 << "deposito _valor" << endl
                 << "extrato" << endl
                 << "extratoN _n" << endl
                 << "fim" << endl;

            cout << menu.str();
        }

        else if(op == "init"){

            cin >> cont_init;
            //conta = Conta(read<int>());
            conta.deposito(0);
            conta.setConta(cont_init);
            cout << "ok" << endl;
        }
        else if(op == "show"){
            cout << "conta: " << conta.getConta() << endl;
            cout << "saldo: " << conta.getSaldo() << endl;
        }
        else if(op == "deposito"){
            cout << (conta.deposito(read<float>())? "ok" : "erro") << endl;
        }
        else if(op == "saque"){
            cout << (conta.saque(read<float>())? "ok" : "erro") << endl;
        }
        else if(op == "extrato"){
            cout << conta.getExtrato();
            cout << "Saldo Atual: " << conta.getSaldo() << endl;
        }
        else if(op == "extratoN"){
            cout << conta.getExtratoN(read<int>());
            cout << "Saldo Atual: " << conta.getSaldo() << endl;
        }
    }
}
