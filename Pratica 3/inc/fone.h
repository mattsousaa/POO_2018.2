#ifndef FONE
#define FONE

#include <iostream>
#include <string>

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
    
    Fone(string oper, string _number);

    string getLabel();

    int getId();

    string getNumber();
};

#endif // FONE