#include <iostream>
#include <sstream>
#include "pet.h"

using namespace std;

int main(){

Pet p1("Batata Doce", 20, 10, 15);

string op;

while(1){

	cin >> op;

	if(op == "play")
		p1.playPet();
	else if(op == "show")
		cout << p1.toString() << endl;
	else if(op == "eat")
		p1.feedPet();
	else if(op == "sleep")
		p1.toSleep();
	else if(op == "clean")
		p1.toWash();
}		

}