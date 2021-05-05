# include <iostream>
using namespace::std;
# include "Roomdimension.h"
# include "Feetinches.h"

RoomDimension::RoomDimension(){
	(this-> length).setFeet(1);
	(this-> length).setInches(1);
	(this-> width).setFeet(1);
	(this-> width).setInches(1);
}

RoomDimension::RoomDimension(const FeetInches &length, const FeetInches &width) :length(length), width(width){
	
}

RoomDimension::RoomDimension(const RoomDimension &obj){
	*this = obj;
}

RoomDimension::~RoomDimension(){}

void  RoomDimension::setLength(){
	cin >> length;
}

void RoomDimension::setWidth(){
	cin >> width;
}

void RoomDimension::getWidth()const{
	 cout <<  this-> width << endl;
}

void RoomDimension::getLength()const{
	 cout << length << endl;
}

FeetInches RoomDimension::getArea(){
	FeetInches temp;
	int area, feet, inches;
	
	area = (length.getFeet() * 12 + length.getInches()) * (width.getFeet() * 12 + width.getInches());
	feet = area / 144;
	inches = area - (feet * 144);
	
	temp.setFeet(feet);
	temp.setInches(inches);
	
	return (temp);
}
