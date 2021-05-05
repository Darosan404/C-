# include "Informacion.h"
# include <string>
# include <iostream>
using namespace::std;

Informacion::Informacion(){
	name = "Nombre";
	phone = "000-000-0000";
	address = "Direccion";
	age = 0;
}

Informacion::Informacion(string name, int age, string phone, string address){
	this -> name = name;
	this -> age = age;
	this -> phone = phone;
	this -> address = address;
}

Informacion::Informacion(const Informacion & A){
	name = A.name;
	age = A.age;
	phone = A.phone;
	address = A.address;
}

Informacion::~Informacion(){
	
}

void Informacion::setName(){
	cout << "Entre su nombre: ";
	getline(cin,name);
} 

void Informacion::setAge(){
	cout << "Entre su edad: ";
	cin >> age;
	cin.ignore(256,'\n');
	
	while (age < 1){
		cout << "La edad tiene que ser mayor que 0. Reentre: ";
		cin >> age;
		cin.ignore(256,'\n');
	}
}

void Informacion::setPhone(){
	cout << "Escriba su n" << char(163) <<"mero de Tel" << char(130) << "fono(000-000-0000): ";
	getline(cin,phone);
}

void Informacion::setAddress(){
	cout << "Escriba su Direcci" << char(162) << "n: ";
	getline(cin,address);
}

void Informacion::getInformacion()const{
	cout << endl;
	cout << "Informaci" << char(162) << "n Entrada:" << endl;
	cout << "Nombre: " << name << endl;
	cout << "Edad: " << age << endl;
	cout << "Tel" << char(130) << "fono: " << phone << endl;
	cout << "Direcci" << char(162) << "n: " << address << endl;
	cout << endl;
}
