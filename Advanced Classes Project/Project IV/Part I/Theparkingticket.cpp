# include "Theparkingticket.h"

# include <iostream>

using namespace::std;

TheParkingTicket::TheParkingTicket(float pena, int minutes){
	this-> setPena(0.0);
	this -> setMinutes(minutes);
	calculateFine(this-> minutes);
}

TheParkingTicket::TheParkingTicket(const TheParkingTicket &temp){
	*this = temp;
}

TheParkingTicket &TheParkingTicket::operator=(const TheParkingTicket &temp){
	*this = temp;
	return (*this);
}

TheParkingTicket::~TheParkingTicket(){
	
}
		
void TheParkingTicket::setPena(float pena){
	this -> pena = pena;
}

void TheParkingTicket::setMinutes(int minutes){
	this-> minutes = minutes;
}

int TheParkingTicket::getMinutes()const{
	return (this-> minutes);
}

float TheParkingTicket::getPena()const{
	return (this-> pena);
}

void TheParkingTicket::calculateFine(int minutes){

    double hours = minutes / 60.0;
    int hoursAsInt = (int) hours;

    if ((hours - hoursAsInt) > 0) {
        // Assign the base fine.
    	pena = BASE_FINE;
    }

   
 
    // Add the additional hourly fines.
     pena += (hoursAsInt * HOURLY_FINE);
	 
}

ostream & operator << (ostream &out, const TheParkingTicket &temp){
	out << "Ticket Generated" << endl;
	out << "Illegal Minutes Parked: " << temp.getMinutes() << "\nPenalty Fee: $" << temp.getPena() << endl;
	return (out);
}
