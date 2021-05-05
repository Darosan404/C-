# include "SimpleVector.h"
# include "Tabla.h"
# include <iomanip>
# include <iostream>
using namespace::std;

const int size = 10;

Tabla::Tabla():number(size){
	for (int i = 0; i < size; i++){
		number[i] = 0;
	}
}

Tabla::Tabla(const Tabla &obj){
	*this = obj;
}

Tabla &Tabla::operator = (const Tabla &obj){
	*this = obj;
	return (*this);
} 

Tabla::~Tabla(){
	
}

void Tabla::mostrarTabla(){
	cout << "_____________________________________________________________________" << endl;
	cout << "Part Description " << setw(45) << "Number of Parts in the Bin " << endl;
	cout << "_____________________________________________________________________" << endl;
	for(int i = 0; i < size; i++){
		cout << i + 1 <<". " << name[i] << "  \t\t\t\t\t  "<< number[i] << endl;
	}
	cout << "_____________________________________________________________________" << endl;	
}

void Tabla::cambiarParts(int i){
	cout << "\nEntre la nueva cantidad para la parte (0-30): ";
	cin >> number[i - 1];
	
	while(number[i - 1] < 0 || number[i - 1] > 30){
	cout << "Error. El numero tiene que ser entre (0-30): ";
	cin >> number[i - 1];
	}
	
}

