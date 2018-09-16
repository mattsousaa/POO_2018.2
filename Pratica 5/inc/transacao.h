#ifndef TRANSACAO_H
#define TRANSACAO_H

#include <iostream>
using namespace std;

template <class T>
T read(){
	T t;
	cin >> t;
	return t;
}

class Transacao{

private:
	int id{0};
	float value{0.0f};
	string name = "";

public:
	Transacao(int id, string name, float value);

	int getId();

	float getValue();

	string getName();

	void setId(int id);

	void setValue(float value);

	void setName(string name);

};


#endif // TRANSACAO_H
