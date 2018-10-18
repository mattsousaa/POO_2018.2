#include <iostream>
#include <sstream>
#include <map>
#include <vector>
#include <string>
#include "repositorio.h"

using namespace std;

template <class T>
Repositorio<T>::Repositorio(string name){
    this->name = name;
}

template <class T> T* Repositorio<T>::toAdd(string id, T t){
    if(elements.count(id) == 1)
        throw "fail: " + name + " " + id + "ja existe";
    elements[id] = t;
    return &elements[id];
}

template <class T> T * Repositorio<T>::get(string id){
    if(elements.count(id) == 0)
        throw "fail: " + name + " " + id + "nao existe";
    return &elements[id];
}

template <class T> T& Repositorio<T>::at(string id){
    if(elements.count(id) == 0)
        throw "fail: " + name + " " + id + "nao existe";
    return elements[id];
}

template <class T> bool Repositorio<T>::has(string id){
    return elements.count(id);
}

template <class T> void Repositorio<T>::toRemove(string id){
    if(!elements.erase(id))
        throw "fail: " + name + " " + id + " nao existe";
}

template <class T> string Repositorio<T>::toString(string __in){
    stringstream ss;

    if(elements.size() == 0)
        return "";
    
    for(auto it = elements.begin(); it != elements.end(); it++)
        ss << it->second << __in;

    string final = ss.str();

    return final.substr(0, final.size() - __in.size());
}

template <class T> vector<T> Repositorio<T>::getValues(){
    std::vector<T> vet;
    for(auto it = elements.begin(); it != elements.end(); it++)
        vet.push_back(it->second);
    return vet;
}

template <class T> vector<string> Repositorio<T>::getKeys(){
    vector<string> vet;
    for(auto it = elements.begin(); it != elements.end(); it++)
        vet.push_back(it->first);
    return vet;
}