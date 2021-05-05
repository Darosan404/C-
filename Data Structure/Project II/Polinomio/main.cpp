#include<iostream>
#include "Polinomio.h"
using namespace::std;

int main(){
	Polinomio poli;
	Termino term;
	for (int i = 0; i < 3; i++) {
		cin >> term;
		poli.add(term);
	} 
	
	poli.show(); 
	int evalua; 
	cout << "\nEnter a number to evaluate the fuction: "; 
	cin >> evalua; 
	
	cout << endl;
	cout << poli.eval(evalua) << endl;
	return 0;
}
