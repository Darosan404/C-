# ifndef THEPARKINGMETER_H_
# define THEPARKINGMETER_H_
# include <iostream>
using namespace::std;

class TheParkingMeter{
	private:
		int minutes;
	public: 
		TheParkingMeter(int minutes = 1);
		TheParkingMeter(const TheParkingMeter &);
		TheParkingMeter &operator=(const TheParkingMeter &);
		~TheParkingMeter();
		
		void setMinutes(int);
		int getMinutes()const;
		TheParkingMeter &operator++();
		TheParkingMeter operator++(int);
};
# endif
