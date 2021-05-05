# include "Feetinches.h"
# include <iostream>
# include <cstdlib>
using namespace::std;

FeetInches::FeetInches(int f, int i){
	feet = f;
	inches = i;
}

FeetInches::FeetInches(const FeetInches & right){
	this->feet = right.feet;
	this->inches = right.inches;

}

FeetInches::~FeetInches(){

}

void FeetInches::setFeet(int f){
	feet = f;
}

void FeetInches::setInches(int i){
	inches = i;
}

int FeetInches::getFeet()const{
	return feet;
}

int FeetInches::getInches()const{
	return inches;
}

FeetInches FeetInches::operator + (const FeetInches &right){
	FeetInches temp;
	temp.inches = inches + right.inches;
	temp.feet = feet + right.feet;
	return temp;
}

FeetInches FeetInches::operator-(const FeetInches &right){
	FeetInches temp;
	temp.inches = inches - right.inches;
	temp.feet = feet - right.feet;
	return temp;
}

FeetInches FeetInches::operator*(const FeetInches &right){
		FeetInches temp;
		temp.inches = inches * right.inches;
		temp.feet = feet * right.feet;
		return temp;
}

FeetInches FeetInches::operator++(){
	++inches;
	return *this;
}

FeetInches FeetInches::operator++(int){
	FeetInches temp(feet, inches);
	inches++;
	return temp;
}

bool FeetInches::operator > (const FeetInches &right){
	bool status;
	if (feet > right.feet)
		status = true;
	else if (feet == right.feet &&  inches > right.inches)
		status = true;
	else
		status = false;
	return status;
}
	
bool FeetInches::operator < (const FeetInches &right){
	bool status;
	if (feet < right.feet)
		status = true;
	else if (feet == right.feet &&  inches < right.inches)
		status = true;
	else
		status = false;
	return status;
}

bool FeetInches::operator == (const FeetInches &right){
	bool status;
	if (feet == right.feet)
		status = true;
	else if (inches == right.inches)
		status = true;
	else
		status = false;
	return status;
}

ostream &operator << (ostream &strm, const FeetInches &right){
		strm << right.feet << " feet, " << right.inches << " inches";
		return strm;
}

istream &operator >> (istream &strm, FeetInches &right){
	cout << "Feet: ";
	strm >> right.feet;

	cout << "Inches: ";
	strm >> right.inches;

	return strm;
}

