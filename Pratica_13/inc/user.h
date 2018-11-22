#ifndef USER_MSG
#define USER_MSG
#include <iostream>
#include <vector>
using namespace std;

class Msg{
public:
    string titulo_msg;
    string msg;
    Msg();
    Msg(string titulo_msg, string msg){
        this->titulo_msg = titulo_msg;
        this->msg = msg;
    }
    string toString(){
        return "\t[" + this->titulo_msg + ":" + this->msg + "]\n";
    }
};

class User{
public:
    string name;
    vector<Msg> inbox;
    User();
    User(string);
    virtual string toString() = 0;
    virtual void tie(void * user) = 0;
    virtual string readMsg() = 0;
    virtual void sendMsg(string, string, string) = 0;
};
#endif // USER_MSG 