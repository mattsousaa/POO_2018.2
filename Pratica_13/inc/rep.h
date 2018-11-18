#ifndef _REP_H_
#define _REP_H_
#include <map>
#include <iostream>
#include <sstream>

using namespace std;

template <typename T>

class Rep{
public:
    map<string, T> data;

    void add(string name, T t){
        auto it = data.find(name);
        if(it != data.end())
            throw "fail: ja existe";
        data[name] = t;
    }

    void rm(string name){
        auto it = data.find(name);
        if(it == data.end())
            throw "fail: não existe";
        delete it->second;
        data.erase(it);
    }

    void rep_tie(string doc, string pat){
        auto it_doc = data.find(doc);
        auto it_pat = data.find(pat);
        if(it_pat == data.end() || it_doc == data.end())
            throw "fail: Usuario(s) inválido(s)";
        data[doc]->tie(it_pat->second);
    }

    string show(string name){
        stringstream out;
        auto it = data.find(name);
        if(it == data.end())
            throw "fail: Usuario nao existe";
        out << it->second->toString() << endl;
        return out.str();
    }

    string rep_read(string name){
        auto it = data.find(name);
        if(it == data.end())
            throw "Fail: Usuario nao existe";
        return it->second->readMsg();
    }

    void rep_sendMsg(string from, string to, string text){
        auto it_from = data.find(from);
        auto it_to = data.find(to);
        if(it_from == data.end() || it_to == data.end())
            throw "fail: Usuario nao existe";
        it_from->second->sendMsg(from, to, text);
    }
    string show_All(){
        stringstream out;
        out << endl;
        for(auto it = data.begin(); it != data.end(); it++){
            out << it->second->toString() << endl;
        }
        return out.str();
    }

};


#endif //_REP_H_