#ifndef _USERMSG_H_
#define _USERMSG_H_

#include <iostream>
#include <vector>

using namespace std;

class Msg{
public:
    string title;
    string text;

    Msg();
    Msg(string title, string text){
        this->title = title;
        this->text = text;
    }
    string toString(){
        return "\t[" + this->title + ":" + this->text + "]\n";
    }
};

class User{
public:
    string name;
    vector<Msg> inbox;
    User();
    User(string);
    virtual string readMsg() = 0;
    virtual void sendMsg(string, string, string) = 0;
    virtual string toString() = 0;
    virtual void tie(void * user) = 0;
};

#endif //_USERMSG_H_