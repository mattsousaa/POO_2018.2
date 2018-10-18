#ifndef REPOSITORIO
#define REPOSITORIO

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

    Repositorio(string name);

    T* toAdd(string id, T t);

    T * get(string id);

    T& at(string id);

    bool has(string id);

    void toRemove(string id);

    string toString(string __in = "\n");

    vector<T> getValues();

    vector<string> getKeys();

};

#endif // REPOSITORIO