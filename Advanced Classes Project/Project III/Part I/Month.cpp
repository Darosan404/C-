# include "Month.h"
# include <iostream>
# include <string>
using namespace::std;

Month::Month(string A, int monthNumber){
	setMonth(A);
	setMonthNumber(monthNumber);
}

Month::~Month(){

}

void Month::setMonth(string A){
	this->A = A;
}

void Month::setMonthNumber(int num){
	while (num < 1 || num > 12){
		cout << "El numero del mes tiene que ser entre 1 y 12. Reentre el numero: ";
		cin >> num;
	}
	monthNumber = num;
}

void Month::numberMonth(){
	if (monthNumber < 1 || monthNumber > 12)
		error();
	else if (monthNumber == 1)
		A = "enero";
	else if (monthNumber == 2)
		A = "febrero";
	else if (monthNumber == 3)
		A = "marzo";
	else if (monthNumber == 4)
		A = "abril";
	else if (monthNumber == 5)
		A = "mayo";
	else if (monthNumber == 6)
		A = "junio";
	else if (monthNumber == 7)
		A = "julio";
	else if (monthNumber == 8)
		A = "agosto";
	else if (monthNumber == 9)
		A = "septiembre";
	else if (monthNumber == 10)
		A = "octubre";
	else if (monthNumber == 11)
		A = "noviembre";
	else
		A = "diciembre";
}

string Month::getMonth()const{
	return A;
}

int Month::getMonthNumber()const{
	return monthNumber;
}

Month &Month::operator++(){
	++(this->monthNumber);
	error();
	numberMonth();
	return (*this);
}

Month Month::operator++(int){
	Month temp(A, monthNumber);
	monthNumber++;
	error();
	numberMonth();
	return (*this);
}

Month &Month::operator--(){
	--(this->monthNumber);
	error();
	numberMonth();
	return (*this);
}

Month Month::operator--(int){
	Month temp(A, monthNumber);
	monthNumber--;
	error();
	numberMonth();
	return (*this);
}

ostream &operator<<(ostream &out, const Month &obj){
	out << "Numero del mes: " << obj.monthNumber << "\nEl mes es: " << obj.A << endl << endl;
	return (out);
}
istream &operator>>(istream &in, Month &obj){
	cout << "Numero del mes: ";
	in >> obj.monthNumber;
	cin.ignore();
	cout << "Nombre del mes: ";
	getline(in, obj.A);

	return (in);
}

void Month::error(){
	if (monthNumber > 12)
		monthNumber = 1;
	else if (monthNumber < 1)
		monthNumber = 12;
}
