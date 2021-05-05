#ifndef _BINARIO_
#define _BINARIO_

#include <iostream>
using namespace::std;

class Binario{
	private:
		char character;
		int numBinario;
	public:
		Binario(char character = ' ', int numBinario = -1);
		~Binario();
		friend ostream & operator <<(ostream &, const Binario&); 
		bool operator ==(const Binario &)const;
		int getNumBinario()const;
		char getCharacter()const;
};
#endif

Binario::Binario(char character, int numBinario){
	this->character = character;
	this->numBinario = numBinario;
}

Binario::~Binario(){
	
}

ostream & operator <<(ostream &out, const Binario &unBinario){
	out << unBinario.numBinario;
	return(out);	
}

bool Binario::operator ==(const Binario & unBinario)const{
	return (this->character == unBinario.character);
}

int Binario::getNumBinario()const{
	return this->numBinario;
}

char Binario::getCharacter()const{
	return this->character;
}




