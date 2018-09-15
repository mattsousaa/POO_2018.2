#include <iostream>
#include <sstream>
#include <vector>
#include "transacao.h"
#include "pluto_system.h"

using namespace std;

int main(){

Pluto_System ps1(0);

string op;

while(1){

	cin >> op;

	if(op == "init"){
		float $ = read<float>();
	    ps1 = Pluto_System($);
	    init(ps1);
		cout << "Sistema iniciado com " << $ << " Reais." << endl;
	} else if(op == "addTran"){
		string nome = read<string>();
	    float valor = read<float>();
		cout << (ps1.addTran(nome, valor)? "sucess" : "fail: fundos insuficientes.") << endl;
	} else if(op == "addTr"){
		string nome = read<string>();
	    float valor = read<float>();
		cout << (ps1.addTran(nome, valor)? "sucess" : "fail: valor maior que divida.") << endl;
	} else if(op == "showTr")
	    cout << ps1.toStringTran() << endl;
	  else if(op == "rm")
	    cout << (ps1.removeTran(read<int>())? "sucess" : "fail") << endl;
	  else if(op == "showCli")
	    cout << ps1.toStringCli(read<string>()) << endl;
}

}