# ifndef THEPARKINGTICKET_H_
# define THEPARKINGTICKET_H_

# include "Theparkingticket.h"
# include <iostream>

using namespace::std;

const double BASE_FINE = 25.0;
const double HOURLY_FINE = 10.0;

class TheParkingTicket{
	private:
		int minutes;
		float pena;
		void calculateFine(int);	
	public: 
		TheParkingTicket(float pena = 0.0, int minutes = 0);
		TheParkingTicket(const TheParkingTicket &);
		TheParkingTicket &operator=(const TheParkingTicket &);
		~TheParkingTicket();
		
		void setMinutes(int);
		void setPena(float);
		float getPena()const;
		int getMinutes()const;
		friend ostream & operator << (ostream &, const TheParkingTicket &);
};
# endif
