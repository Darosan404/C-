#ifndef _POLINOMIO_
#define _POLINOMIO_
#include "Termino.h"
#include "ArrayBag.h"
#include <iostream>
using namespace::std;

class Polinomio{
private:
	ArrayBag<Termino> termino;
public:	
	Polinomio();
	~Polinomio();
	void add(const Termino& newEntry);
	void show();
	int eval(int);
};
#endif

Polinomio::Polinomio(){
	
}

Polinomio::~Polinomio(){
	
}

void Polinomio::add(const Termino & newEntry){
	termino.add(newEntry);
}

void Polinomio::show(){
	cout << "f(x) = "; 
	termino.printList();
}

int Polinomio::eval(int x){
	termino.eval(x);
}
