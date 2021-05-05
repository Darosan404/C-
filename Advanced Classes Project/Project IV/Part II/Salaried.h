#ifndef SALARIED_H
#define SALARIED_H

# include "Hourlypaid.h"

# include <iostream>

using namespace::std;

class Salaried
{
	public:
		Salaried(double bonus = 0.0);
		Salaried(const Salaried &);
		Salaried &operator = (const Salaried &);
		~Salaried();
		
		void setBonus(double);
		double getBonus()const;	
		double calculatePay();
		void pedirDatos();
		double calculatePay1();
		void pedirDatos1();

	private:
		double bonus;
		Hourly hours;
};

#endif
