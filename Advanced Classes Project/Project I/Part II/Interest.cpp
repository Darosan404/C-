# include "Interest.h"
# include <iostream>
# include <cmath>
using namespace::std;

Interest::Interest(){
	valor = 0;
	year = 0;
	intereses = 0;
}

Interest::Interest(double val, double inte, int yea){
	valor = val;
	intereses = inte;
	year = yea;
}

Interest::~Interest(){
	
}

void Interest::setValue(double val){
	while(val < 0){
		cout << "\nEl valor tiene que ser mayor que 0. Reentre el valor: ";
		cin >> val;
	}
		valor = val;
}

void Interest::setInterest(double inte){
		while(inte < 0){
		cout << "\nLos intereses tienen que ser mayor que 0. Reentre los intereses: ";
		cin >> inte;
	}
		intereses = inte;
}

void Interest::setYear(int yea){
		while(yea <= 0){
		cout << "\nLos a" << char(164) << "os tienen que ser mayor que 0. Reentre el mes : ";
		cin >> yea;
	}
		year= yea;
}

void Interest::getValue(){
	cout << "\nEl balance de la cuenta es: $" << valor << endl;
}

void Interest::getInterest(){
	cout << "Los intereses de su cuenta es: " << intereses << "%" << endl;
}

void Interest::getYear(){
	cout << "Los a" << char(164) << "os que el dinero va a estar en la cuenta son: " << year<< endl;
}

double Interest::getFutureValue(double val, double inte, int yea){
	double F = 0, P = val, i = inte;
	int t = yea;
	
	F = P * pow((1 + i),t);
	
	return F;
}

