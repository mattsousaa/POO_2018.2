#ifndef SISTEMA
#define SISTEMA

#include <iostream>
#include <vector>
#include <string>
#include <sstream> 

using namespace std;

class Sistema{
private:
    vector<Usuario> usuarios;
public:

    Sistema();

    //não pode ter dois nomes de usuario iguais
    bool addUser(string username, string password);

    Usuario * getUser(string username, string password);

    vector<string> getUsernames();
};

void commandLine(Sistema& sistema);

void initialize(Sistema &sistema);

#endif // SISTEMA