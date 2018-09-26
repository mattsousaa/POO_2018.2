#ifndef FONE
#define FONE

#include <string.h>
#include <sstream>

using namespace std;

class Fone{
private:

public:
	string fone;
	string data;
	string oper;

	Fone(string oper, string fone);

	string toString();
};

#endif // FONE