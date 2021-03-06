#ifndef DOCTOR_H
#define DOCTOR_H
#include <sstream>
#include <iostream>
#include <vector>
#include <string>
#include "patient.h"

using namespace std;

class Doctor : public User{
public:
    string spec;
    vector<Patient*> p_list;
    Doctor(string, string);
    virtual ~Doctor();
    string readMsg();
    void sendMsg(string, string);
    void sendMsg(string, string, string);
    string getPats(size_t);
    string toString();
    virtual void tie(void *);

};

#endif //DOCTOR_H