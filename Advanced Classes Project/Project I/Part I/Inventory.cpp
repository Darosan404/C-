# include "Inventory.h"
# include <iostream>
using namespace::std;

Inventory::Inventory(){
	itemNumber = 0;
	quantity = 0;
	cost = 0;
	totalCost = 0;
}

Inventory::Inventory(int num, int quan, double Cost){
	setItemNumber(num);
	setQuantity(quan);
	setCost(Cost);
	setTotalCost();

}

Inventory::~Inventory(){

}

void Inventory::setItemNumber(int num){
		while (num < 0){
		cout << "Error no se aceptan valores negativos para la numeraci" << char(162) << "n de los art" << char(161) << "culos. Reentre el valor: ";
		cin >> num;
	}
		itemNumber = num;
}

void Inventory::setQuantity(int quan){
		while (quan< 0){
		cout << "Error no se aceptan valores negativos para la cantidad. Reentre el valor: ";
		cin >> quan;
	}
		quantity = quan;
}

void Inventory::setCost(double Cost){
		while (Cost< 0){
		cout << "Error no se aceptan valores negativos para el costo. Reentre el valor: ";
		cin >> Cost;
	}
		cost = Cost;
}

void Inventory::setTotalCost(){
	 totalCost = cost * double(quantity);
	
}

int Inventory::getItemNumber(){
	return itemNumber;
}

int Inventory::getQuantity(){
	return quantity;
}

double Inventory::getCost(){
	return cost;
}
double Inventory::getTotalCost(){
	 setTotalCost();
	return totalCost;

}
