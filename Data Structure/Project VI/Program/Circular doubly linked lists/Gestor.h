#ifndef GESTOR_H
#define GESTOR_H

#include "ListasDobles.h"
#include "Binario.h"

static const char CHARACTER[] = {' ', '.', ',', '?', ':', '-', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L',
								 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
static const int DE_BRUIJN[] ={1, 0, 1, 0, 0, 0, 1, 0, 0, 1, 1, 0, 0, 0, 0, 0, 1, 1, 1, 0, 1, 1, 1, 1, 1, 0, 0, 1, 0, 1, 0, 1};

class Gestor{
	private:
		Linked<Binario> lista;
		string mensaje;
	
	public:
		Gestor();
		~Gestor();
		void show()const;
		void charToBin()const;
		void binToChar()const;
		void pedirMensaje();
		friend istream & operator>>(istream&, Gestor&);
};
#endif

Gestor::Gestor(){
	for(int i = 0; i < 32; i++){
		Binario newBinario(CHARACTER[i], DE_BRUIJN[i]);
		lista.add(newBinario);
	}
	
}

Gestor::~Gestor(){
	
}

void Gestor::show()const{
	lista.showLinked();
}

void Gestor::charToBin()const{
	int i = 0;
	
	while(i < int (mensaje.length())){
	lista.encode(mensaje[i]);
	i++;
	}
	
}

void Gestor::pedirMensaje(){
	cout << "Escriba un mensaje: ";
	getline(cin, mensaje);
	for(int i = 0; i < int(mensaje.length());i++){
		mensaje[i] = toupper(mensaje[i]);
		cout << mensaje[i] << endl; 
	}
}

void Gestor::binToChar()const{
	int i = 0;
	char var[4];
	
	while(i < int (mensaje.length())){	
		for(int j = 0; j < 5; j++){
			var[j] = mensaje[i];	
		i++;
		}
		cout << lista.code(var);
	}
	cout << endl;
}

istream & operator >>(istream &in, Gestor &unGestor){
	cout << "Escriba un mensaje: ";
	getline(in, unGestor.mensaje);
	
	for(int i = 0; i < int(unGestor.mensaje.length());i++){
		unGestor.mensaje[i] = toupper(unGestor.mensaje[i]);
	}
	
	return (in);
}
