# include "Hourlypaid.h"

# include <iostream>

using namespace ::std;

Hourly::Hourly(int hourW, int hourR){
	this-> setHourW(hourW);
	this-> setHourR(hourR);
}

Hourly::Hourly(const Hourly &temp){
	*this = temp;
}

Hourly &Hourly::operator = (const Hourly &temp){
	*this = temp;
	
	return (*this);
}

Hourly::~Hourly(){

}
		
void Hourly::setHourW(int hourW){
	while(hourW < 0 || hourW > 80){
		cout << "\nLas horas tienen que ser entre 0 y 80. Reentre: ";
		cin >> hourW;
	}
	
	this-> hourW = hourW;
}

void Hourly::setHourR(double hourR){
	this-> hourR = hourR;
}
		
int Hourly::getHourW()const{
	return (this-> hourW);
}

int Hourly::getHourR()const{
	return (this-> hourR);
}

