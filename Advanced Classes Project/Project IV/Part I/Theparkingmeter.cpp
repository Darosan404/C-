# include "Theparkingmeter.h"
# include <iostream>
using namespace::std;	
	
TheParkingMeter::TheParkingMeter(int minutes){
	this-> setMinutes(minutes);
}

TheParkingMeter::TheParkingMeter(const TheParkingMeter &temp){
	*this = temp;
}

TheParkingMeter &TheParkingMeter::operator=(const TheParkingMeter &temp){
	*this = temp;
	return (*this);
}

TheParkingMeter::~TheParkingMeter(){
	
}
		
void TheParkingMeter::setMinutes(int minutes){
	while(minutes <= 0){
		cout << "\nThe minutes must be greater than 0. Reentre: ";
		cin >> minutes;
	}
	this-> minutes = minutes;
}

int TheParkingMeter::getMinutes()const{
	return (this-> minutes);
}

TheParkingMeter &TheParkingMeter::operator++(){
	++(this-> minutes);
	return (*this);
}

TheParkingMeter TheParkingMeter::operator++(int){
	return (TheParkingMeter(this-> minutes)++);
}

