# include "Date.h"
# include <iostream>
using namespace::std;
	
Date::Date(int month, int day, int year){
	setMonth(month);
	setDay(day);
	setYear(year);
	dateS();
}

Date::~Date(){
	
}

void Date::setMonth(int month){
	while(month < 1 || month > 12){
		cout << "Error!! ->los meses tienen que ser entre 1 y 12. Reentre: ";
		cin >> month;
	}

	this -> month = month;		
	dateS();
}

void Date::setDay(int day){
	while(day < 1 || day > 31){
		cout << "Error!! ->los dias tienen que ser entre 1 y 31. Reentre: ";
		cin >> day;
	}
	this -> day = day;
}

void Date::setYear(int year){
	this -> year = year;
}

int Date::getMonth()const{
	return month;
}

int Date::getDay()const{
	return day;
}

int Date::getYear()const{
	return year;
}

void Date::getFormat1()const{
	cout << month << "/" << day << "/" << year << endl;
	
}

void Date::getFormat2()const{
	cout << day << " de " << A << " de " << year << endl;
}

void Date::dateS(){
	if (month < 1 || month > 12)
		valiMonth();
	else if(month == 1)
		A = "enero";
	else if(month == 2)
		A = "febrero";
	else if (month == 3)
		A = "marzo";
	else if (month == 4)
		A = "abril";
	else if (month == 5)
		A = "mayo";
	else if (month == 6)
		A = "junio";
	else if (month == 7)
		A = "julio";
	else if (month == 8)
		A = "agosto";
	else if (month == 9)
		A = "septiembre";
	else if (month == 10)
		A = "octubre";
	else if (month == 11)
		A = "noviembre";
	else if (month == 12)
		A = "diciembre";
}

Date Date::operator-(const Date &obj)const{
	return (Date(this->day - obj.day));
}

Date &Date::operator++(){
	++(this-> day);
	valiDay();
	return (*this);
}

Date Date::operator++(int){
	Date temp(month, day, year);
	day++;
	valiDay();
	return (*this);
}

Date &Date::operator--(){
	--(this-> day);
	valiDay();
	return (*this);
}

Date Date::operator--(int){
	Date temp(month, day, year);
	day--;
	valiDay();
	return (*this);
}

ostream &operator<<(ostream &out, const Date &obj){
	out << obj.A << " " << obj.day << ", " << obj.year << endl;
	return (out);
}
istream &operator>>(istream &in, Date &obj){
	cout << "Dia: ";
	in >> obj.day;
		
	cout << "Mes: ";
	in >> obj.month;
	
	cout << "A" << char(164) << "o: ";
	in >> obj.year;
	
	return (in);
}

void Date::valiDay(){
	if(day < 1){
		for(int i = 0; i < 4; i++){
			if (month == AA[i]){
				day = 30;
				month--;
				valiMonth();
				dateS();
				}
			else{
				day == 31;
				month--;
				valiMonth();
				dateS();
			}
		}	
 	}
	else if(month == 2 && day > 28){
		day = 1;
		month++;
		dateS();
	}
	else if (day == 31){
		for(int i = 0; i < 4; i++){
			if (month == AA[i]){
				day = 1;
				month++;
				valiMonth();
				dateS();
			}
		}
	}
	else if(day > 31){
		day = 1;
		month++;
		valiMonth();
		dateS();
	}	 
} 

void Date::valiMonth(){
	if(month > 12){
		year ++;
		month = 1;
		dateS();
	}	
	else if(month < 1){
		year --;
		month = 12;
		dateS();
	}		
}

