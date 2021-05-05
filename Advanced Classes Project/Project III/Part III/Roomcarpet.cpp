# include <iostream>
using namespace::std;
# include "Roomcarpet.h"
# include "Feetinches.h"
# include "Roomdimension.h"

RoomCarpet::RoomCarpet(const RoomDimension &room, int cost) :room(room){
	setCost(cost);
}

RoomCarpet::~RoomCarpet(){ }

void RoomCarpet::setCost(int cost){
	while (cost < 0){
		cout << "\nEl costo debe ser > 0. Reentre: ";
		cin >> cost;
	}
	this->cost = cost;
}

int RoomCarpet::getCost()const{
	return (this-> cost);
}

int RoomCarpet::totalCost(){
	FeetInches temp;
	temp = room.getArea();
	return (temp.getFeet() * cost);
}

