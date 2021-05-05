#ifndef _DATE_H
#define _DATE_H

#include <iostream>
#include <string>
using namespace std;

class Date{
	friend ostream &operator<<( ostream &, const Date & );
	
	public:
	Date( int m = 1, int d = 1, int y = 1900 ); // default constructor
	void setDate( int, int, int ); // set month, day, year
	const Date &operator+=( int ); // add days, modify object
	static bool leapYear( int ); // is date in a leap year?
	bool endOfMonth( int ) const; // is date at the end of month?
	void pedirDatos();
	bool operator <= (const Date &) const;
	bool operator >= (const Date &) const;   
 
	private:
	int month;
	int day;
	int year;

	static const int days[]; // array of days per month
	void helpIncrement(); // utility function for incrementing date
 }; // end class Date
 #endif
 
const int Date::days[] =
 { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

 // Date constructor
Date::Date( int month, int day, int year ){
 	setDate( month, day, year );
} // end Date constructor

 // set month, day and year
void Date::setDate( int mm, int dd, int yy ){
	if ( mm >= 1 && mm <= 12 )
		month = mm;
	else
 		cout << "Month must be 1-12" << endl;

	if ( yy >= 1900 && yy <= 2100 )
		year = yy;
	else
		cout <<"Year must be >= 1900 and <= 2100"  << endl;

	// test for a leap year
	if ( ( month == 2 && leapYear( year ) && dd >= 1 && dd <= 29 ) ||( dd >= 1 && dd <= days[ month ] ) )
		day = dd;
	else
		cout << "Day is out of range for current month and year" << endl;
} // end function setDate

 // if the year is a leap year, return true; otherwise, return false
bool Date::leapYear( int testYear ){
	if ( testYear % 400 == 0 || ( testYear % 100 != 0 && testYear % 4 == 0 ) )
		return true; // a leap year
	else
		return false; // not a leap year
} // end function leapYear

 // determine whether the day is the last day of the month
bool Date::endOfMonth( int testDay ) const{
	if ( month == 2 && leapYear( year ) )
		return testDay == 29; // last day of Feb. in leap year

	else
		return testDay == days[ month ];
} // end function endOfMonth

// function to help increment the date
void Date::helpIncrement(){
	// day is not end of month
	if ( !endOfMonth( day ) )
		++day; // increment day
	else
 		if ( month < 12 ){ // day is end of month and month < 12
			++month; // increment month
			day = 1; // first day of new month
		} // end if
		else{ // last day of year
			++year; // increment year
			month = 1; // first month of new year
			day = 1; // first day of new month
		} // end else
} // end function helpIncrement

// overloaded output operator
ostream &operator<<( ostream &output, const Date &d ){
	static string monthName[ 13 ] = { "", "January", "February","March", "April", "May", "June", "July", "August",
									"September", "October", "November", "December" };
	
	output << monthName[ d.month ] << ' ' << d.day << ", " << d.year;
	return output; // enables cascading
} // end function operator<<

void Date::pedirDatos(){
	int dia, mes, anio;
	cout << "\nFecha:"<< endl;
	
	cout << "Entre el dia: ";
	cin >> dia;
	
	cout << "Entre el mes: ";
	cin >> mes;
	
	cout << "Entre el a" << char(164) << "o: ";
	cin >> anio;
	
	this->setDate(mes, dia, anio);	 
}

bool Date::operator <=(const Date & aDate) const{
	bool bandera = (this->day <= aDate.day && this->month <= aDate.month && this->year <= aDate.year);
	
	return bandera;
}   

bool Date::operator >=(const Date & aDate) const{
	bool bandera = (this->day >= aDate.day && this->month >= aDate.month && this->year >= aDate.year);
	
	return bandera;
}   
