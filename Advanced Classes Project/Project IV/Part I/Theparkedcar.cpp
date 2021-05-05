# include "Theparkedcar.h"
# include "Theparkingmeter.h"

# include <iostream>

using namespace::std;

TheParkedCar::TheParkedCar(string make, string model, string color, string licNum, int minute){
	this-> setMake(make);
	this-> setModel(model);
	this-> setColor(color);
	this-> setLicNum(licNum);
	this-> setMinute(minute);
}

TheParkedCar::TheParkedCar(const TheParkedCar & tmp){
	*this = tmp;
}

TheParkedCar &TheParkedCar::operator=(const TheParkedCar & tmp){
	*this = tmp;
	return (*this);
}

TheParkedCar::~TheParkedCar(){ }

void  TheParkedCar::setMake(string make){
	this-> make = make;
}

void TheParkedCar::setModel(string model){
	this-> model = model;
}

void TheParkedCar::setColor(string color){
	this-> color = color;
}

void TheParkedCar::setLicNum(string licNum){
	this-> licNum = licNum;
}

void TheParkedCar::setMinute(int minute){
	this-> minute = minute;
	
}

string TheParkedCar::getMake()const{
	return (this-> make);
}

string TheParkedCar::getModel()const{
	return (this-> model);
}

string TheParkedCar::getColor()const{
	return (this-> color);
}

string TheParkedCar::getLicNum()const{
	return (this-> licNum);
}

int TheParkedCar::getMinutes()const{
	return (this-> minute);
}

ostream & operator<<(ostream &out, const TheParkedCar &temp){
	out << "Information Car" << endl;
	out << "Make:  " << temp.getMake() << "\nModel: " << temp.getModel() << "\nColor: " << temp.getColor() << "\nLicense Number: " << temp.getLicNum() << "\nMinutes Parked: " << temp.getMinutes() << endl;
	return (out);
}

istream & operator>>(istream &in, TheParkedCar &car){
	char* make = new char [15];
	char* model = new char [15];
	char* color = new char [10];
	char* lic = new char [15];
	
	cout << "Enter the Information Car" << endl;
	cout << "Make: "; in.getline(make, 15, '\n'); car.make = make; delete[] make;
	cout << "Model: "; in.getline(model, 15, '\n'); car.model = model; delete[] model;
	cout << "Color: "; in.getline(color, 10, '\n'); car.color = color; delete[] color;
	cout << "License Number: "; in.getline(lic, 15, '\n'); car.licNum = lic; delete[] lic;
	cout << "Minutes Parked: "; in >> car.minute;
	in.ignore(256,'\n');
	
	return (in);
	
}
