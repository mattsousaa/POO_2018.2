#include <iostream>
#include <string.h>
#include <sstream>
#include <algorithm>
#include <cstdio>

using namespace std;

class Carro{

    private:
    
    int pass;
    int gas;
    int km;

    public:

    Carro(int init_pass, int init_gas, int init_km){
        this->setPass(0);
        this->setGas(0);
        this->setKm(0);
    }

    int getPass(){
    	return this->pass;
    }

    void setPass(int p){
    	this->pass = p;
    }

    int getGas(){
    	return this->gas;
    }

    void setGas(int g){
    	this->gas = g;
    }

    int getKm(){
    	return this->km;
    }

    void setKm(int k){
    	this->km = k;
    }

    
    void show(){
        cout << "pass:" << " " << this->getPass() << ", " << "gas:" << " " << 
        this->getGas() << ", " << "km:" << " " << this->getKm() << endl;
    }

    void embarcar(){
        if(this->getPass() < 2){
            this->pass += 1;
            cout << "done" << endl;
        } else{
            cout << "fail: limite de pessoas atingido" << endl;
        }
    }

    void desembarcar(){
        if(this->pass > 0){
            this->pass -= 1;
            cout << "done" << endl;
        } else{
            cout << "fail: nao ha ninguem no carro" << endl;
        }
    }

    void abastecer(int litros){

        this->setGas(0);

        if(litros >= 0 && litros <= 10){
            this->gas += litros;
        } else{
            this->setGas(10);
        }
    }

    void andar(int perc){

        int div = perc/10;

        if(this->getPass() == 0){
            cout << "fail: nao ha ninguem no carro" << endl;
        } else{   
            this->km += perc;
            this->gas -= div;     
        }
    }
};


int main(){

    string getName;
    int perc;
    int number;

    Carro c1(0,0,0);

    while(1){

        getline(cin, getName);
        cout << endl;

        //cout << getName;

        stringstream ss(getName);

        string s1, s2;	// Duas strings para string e numero

        ss >> s1;

        getline(ss, s2); // Obtém o resto da string

        s2.erase(remove(s2.begin(),s2.end(),' '),s2.end()); // Remove o espaço do número

        /*
        cout << s1 << endl;

        cout << s2 << endl;
		*/

        number = atoi(s2.c_str());	// Converte s2 em inteiro

        if(s1 == "show"){
            c1.show();

        } else if(s1 == "in"){
            c1.embarcar();

        } else if(s1 == "out"){
            c1.desembarcar();

        } else if(s1 == "fuel"){
            //cin >> comb;
            //cout << "Posso abastecer" << endl;

            c1.abastecer(number);

        } else if(s1 == "drive"){
            //cin >> perc;
            //cout << "Posso andar" << endl;

            c1.andar(number);
        }
    }

    return 0;

}