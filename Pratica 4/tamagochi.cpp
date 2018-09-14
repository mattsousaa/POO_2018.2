#include <iostream>
#include <sstream>

using namespace std;

class Pet{

private:

string name;
unsigned char flag = 1;
int age;
bool fome;
int energyMax, hungryMax, cleanMax; 
int energy, hungry, clean;   
int diamond; // {0};
bool alive {true};

public:

Pet(string name, int energyMax, int hungryMax, int cleanMax, bool alive = true, bool fome = false, 
	int age = 0, int diamond = 0, int clean = 0, int energy = 0, int hungry = 0){
	this->name = name;
	this->age = age;
	this->alive = alive;
	this->fome = fome;
	this->clean = clean;
	this->diamond = diamond;
	this->energy = energyMax;
	this->hungry = hungryMax;
	this->clean = cleanMax;
	this->energyMax = energyMax;
	this->hungryMax = hungryMax;
	this->cleanMax = cleanMax;
}

string getName(){
	return this->name;
}

int getAge(){
	return this->age;
}

bool getalive(){
	return this->alive;
}

bool getFome(){
	return this->fome;
}

int getclean(){
	return this->clean;
}

int getenergyMax (){
	return this->energyMax ;
}

int getEnergy(){
	return this->energy;
}

int getHungry(){
	return this->hungry;
}

int getClean(){
	return this->clean;
}

int getDiamond(){
	return this->diamond;
}

void setName(){
	this->name = name;
}

void setAge(int age){
	this->age = age;
}

void setalive(bool alive){
	this->alive = alive;	
}

void setFome(bool fome){
	this->fome = fome;
}

void setclean(int clean){
	this->clean = clean;
}

void setenergyMax(int energyMax ){
	this->energyMax = energyMax;
}

void setEnergy(int energy){
	this->energy = energy;
}

void setHungry(int hungry){
	this->hungry = hungry;
}

void setDiamond(int diamond){
	this->diamond = diamond;
}

void setClean(int clean){
	this->clean = clean;
}

string toString(){
	stringstream ss;
	cout << "Tá saindo da jaula o MONSTRO!!! É 37 anos, kraleo!!!" << endl;
	ss << "N:" << name << ", " 
	   << "E:" << energy << "/" << energyMax << ", "
	   << "H:" << hungry << "/" << hungryMax << ", "
	   << "C:" << clean  << "/" << cleanMax  << ", "
	   << "D:" << diamond << ", A:" << age;
	return ss.str();
}

void feedPet(){
	if(getEnergy() > 0 || getHungry() > 0 || getClean() > 0){
		cout << "Que num vai dar OQ PORRA... Saí de casa comi pra kraleo!" << endl;
		this->energy--;
		this->clean -= 2;
		this->age++;
		this->hungry += 4;

		if(getEnergy() <= 3 || getHungry() <= 3 || getClean() <= 3){
			cout << "Ajuda o maluco que tá doente!!!" << endl;
		}

		if(getHungry() >= 10)	this->hungry = 10;	

	} else {

		if(getEnergy() < 0)		cout << "Não vai dar não! Seu PET morreu de Fraqueza!" << endl;
		if(getHungry() < 0)		cout << "Não vai dar não! Seu PET morreu de fome!" << endl;
		if(getClean() < 0)		cout << "Não vai dar não! Seu PET morreu de sujeira!" << endl;
	}
}

void playPet(){

	if(getEnergy() > 0 && getHungry() > 0 && getClean() > 0){

		if(this->flag)		cout << "Biiiiirlll! É treze, porra!" << endl;
		else				cout << "Veeeemmm Monstro! Aqui nois constroi fibra, kraleo!" << endl;
		 
		this->flag ^= 1;				

		this->energy -= 2;	//Diminui 2 na energia
		this->hungry--;		// Diminui 1 na fome
		this->clean -= 3;	// Diminui 3 da limpeza
		this->age++;		// Aumenta 1 na idade
		this->diamond++;	// Aumenta 1 no diamante

		if(getEnergy() <= 3 || getHungry() <= 3 || getClean() <= 3){
			cout << "Ajuda o maluco que tá doente!!!" << endl;
		}

	} else {

		if(getEnergy() <= 0){
			setEnergy(0);
			cout << "Não vai dar não! Seu PET morreu de Fraqueza!" << endl;
		}		
		if(getHungry() <= 0){
			setHungry(0);
			cout << "Não vai dar não! Seu PET morreu de fome!" << endl;
		}		
		if(getClean() <= 0){
			setClean(0);
			cout << "Não vai dar não! Seu PET morreu de sujeira!" << endl;

		}		
	}
}

void toSleep(){
	int turno;
	turno = getenergyMax() - getEnergy();

	if(getEnergy() > 0 && getalive() == true && turno >= 5){
		cout << "Esmaga que cresce! Vamo dormir pra ficar BLINDÃO, Monstro!" << endl;
		this->hungry--;
		this->energy = energyMax;
		this->age += turno;

		if(getEnergy() <= 3 || getHungry() <= 3 || getClean() <= 3){
			cout << "Ajuda o maluco que tá doente!!!" << endl;
		}

	} else{
		cout << "fail: QUERO MAIS, QUERO MAIS..." << endl;
	}
}

void toWash(){

	
	if(getEnergy() > 0 && getHungry() > 0 && getClean() > 0){
		cout << "É verão o ano todo... Vem, cumpade!" << endl;
		this->energy -= 3;
		this->hungry--;
		this->age += 2;
		this->clean = cleanMax;

		if(getEnergy() <= 3 || getHungry() <= 3 || getClean() <= 3){
			cout << "Ajuda o maluco que tá doente!!!" << endl;
		}

	} else {

		if(getEnergy() <= 0){
			setEnergy(0);
			cout << "Não vai dar não! Seu PET morreu de Fraqueza!" << endl;
		}		
		if(getHungry() <= 0){
			setHungry(0);
			cout << "Não vai dar não! Seu PET morreu de fome!" << endl;
		}		
		if(getClean() <= 0){
			setClean(0);
			cout << "Não vai dar não! Seu PET morreu de sujeira!" << endl;

		}		
	}
}

};



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