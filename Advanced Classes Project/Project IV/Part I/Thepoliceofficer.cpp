# include "Thepoliceofficer.h"
# include "Theparkingticket.h"
# include "Theparkedcar.h"
# include "Theparkingmeter.h"

# include <iostream>

using namespace::std;

ThePoliceOfficer::ThePoliceOfficer(string name, string badNumber){
	this-> setName(name);
	this-> setBadNumber(badNumber);
}

ThePoliceOfficer::ThePoliceOfficer(const ThePoliceOfficer &temp){
	*this = temp;
}

ThePoliceOfficer &ThePoliceOfficer::operator=(const ThePoliceOfficer &temp){
	*this = temp;
	return (*this);
}

ThePoliceOfficer::~ThePoliceOfficer(){
	
}

void ThePoliceOfficer::setName(string name){
	this-> name = name;
}

void ThePoliceOfficer::setBadNumber(string badNumber){
	this-> badNumber = badNumber;
}

string ThePoliceOfficer::getName()const{
	return (this-> name);
}

string ThePoliceOfficer::getBadNumber()const{
	return (this-> badNumber);
}

int ThePoliceOfficer::examine(const TheParkedCar &car, const TheParkingMeter &meter){
	
    int illegalMinutes = car.getMinutes()- meter.getMinutes();
	
	return illegalMinutes;
}

ostream & operator << (ostream &out, const ThePoliceOfficer &temp){
	out << "Information Officer" << endl;
	out << "Name: " << temp.getName() << "\nBadge Number: " << temp.getBadNumber() << endl;
	return (out);
}

istream & operator>>(istream &in, ThePoliceOfficer &officer){
	char* name = new char [45];
	char* badNum = new char [20];
	
	cout << "\nEnter the Information Police" << endl;
	cout << "Name: "; in.getline(name, 45, '\n'); officer.name = name; delete[] name;
	cout << "Badge Number: "; in.getline(badNum, 20, '\n'); officer.badNumber = badNum; delete[] badNum;
	return (in);
	
}
