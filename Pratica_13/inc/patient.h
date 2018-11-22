#ifndef PATIENT_H
#define PATIENT_H

#include "user.h"
#include <vector>
#include <iostream>
#include <sstream>

using namespace std;

class Doctor;

class Patient : public User{
public:
    string diagnostico;
    vector<Doctor*> diag_list;
    Patient(string, string);
    string getDocs(size_t);
    void sendMsg(string, string);
    void sendMsg(string, string, string);
    string toString();
    virtual void tie(void *);
    virtual ~Patient();
    virtual string readMsg();

friend class Doctor;
};

#endif // PATIENT_H