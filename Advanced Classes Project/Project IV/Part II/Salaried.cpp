#include "Salaried.h"

# include "Hourlypaid.h"

# include <iostream>

using namespace ::std;

Salaried::Salaried(double bonus){
	this-> setBonus(bonus);
}

Salaried::Salaried(const Salaried &temp){
	*this = temp;
}
 
Salaried &Salaried::operator = (const Salaried &temp){
	*this = temp;
	
	return (*this);
}

Salaried::~Salaried(){

}

void Salaried::setBonus(double bonus){
	while(bonus < 0){
		cout << "\nEl bono tienen que ser mayor que 0. Reentre: ";
		cin >> bonus;
	}
	
	this-> bonus= bonus;
}

double Salaried::getBonus()const{
	return (this-> bonus);
}

double Salaried::calculatePay(){
	return (hours.getHourR() * hours.getHourW());
}

void Salaried::pedirDatos(){
	int hour;
	double pay;
	
	cout << "\nEntre las horas trabajadas: ";
	cin >> hour;
	hours.setHourW(hour);
	
	cout << "Entre el pago por horas: $";
	cin >> pay;
	hours.setHourR(pay);
}

double Salaried::calculatePay1(){
	double salaried;
	
	hours.setHourW(80);
	hours.setHourR(7.25);
	
	salaried = calculatePay() + getBonus();
	
	return salaried;
}

void Salaried::pedirDatos1(){
	char res;
	double bon;
	cout << "\nEl trabajador tiene Bono? y/n: ";
	cin >> res;
	
	if(res == 'y'){
		cout << "Entre el Bono: $";
		cin >> bon;
		setBonus(bon);
	}
}
	
