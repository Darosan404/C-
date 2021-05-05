# ifndef THEPOLICEOFFICER_H_
# define THEPOLICEOFFICER_H_

# include "Theparkingticket.h"
# include "Theparkingmeter.h"
# include "Theparkedcar.h"

# include <iostream>

using namespace::std;

class ThePoliceOfficer{
	private:
		string name, badNumber;
	public: 
		ThePoliceOfficer(string name = " ", string badNumber = " ");
		ThePoliceOfficer(const ThePoliceOfficer &);
		ThePoliceOfficer &operator=(const ThePoliceOfficer &);
		~ThePoliceOfficer();
		
		int examine(const TheParkedCar &, const TheParkingMeter &);
		void setName(string);
		void setBadNumber(string);
		void setMinutes(int);
		int getMinutes()const;
		string getName()const;
		string getBadNumber()const;
		friend ostream & operator << (ostream &, const ThePoliceOfficer &);
		friend istream & operator>>(istream &,  ThePoliceOfficer&);
};
# endif
