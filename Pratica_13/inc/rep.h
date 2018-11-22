#ifndef REP
#define REP
#include <map>
#include <iostream>
#include <sstream>

using namespace std;

template <typename T>

class Rep{

public:
    map<string, T> msg_map;

    void addFromRep(string name, T t){
        auto it = msg_map.find(name);
        if(it != msg_map.end())
            throw "fail: nome ja existe";
        msg_map[name] = t;
    }

    void rmFromRep(string name){
        auto it = msg_map.find(name);
        if(it == msg_map.end())
            throw "fail: nome ainda não existe";
        delete it->second;
        msg_map.erase(it);
    }

    void tieFromRep(string doc, string pat){
        auto it_doc = msg_map.find(doc);
        auto it_pat = msg_map.find(pat);

        if(it_pat == msg_map.end() || it_doc == msg_map.end())
            throw "fail: Lista invalida de usuarios ";
        msg_map[doc]->tie(it_pat->second);
    }

    string showFromRep(string name){
        stringstream out;
        auto it = msg_map.find(name);
        if(it == msg_map.end())
            throw "fail: Usuario nao existe";
        out << it->second->toString() << endl;
        return out.str();
    }

    string readFromRep(string name){
        auto it = msg_map.find(name);
        if(it == msg_map.end())
            throw "Fail: Usuario nao existe";
        return it->second->readMsg();
    }

    void sendMsgToRep(string from, string to, string text){
        auto it_from = msg_map.find(from);
        auto it_to = msg_map.find(to);
        if(it_from == msg_map.end() || it_to == msg_map.end())
            throw "fail: Usuario nao existe";
        it_from->second->sendMsg(from, to, text);
    }

    string showAllFromRep(){
        stringstream out;
        out << endl;
        for(auto it = msg_map.begin(); it != msg_map.end(); it++){
            out << it->second->toString() << endl;
        }
        return out.str();
    }

};

#endif // REP 