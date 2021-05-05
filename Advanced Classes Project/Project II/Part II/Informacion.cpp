# include "Informacion.h"
# include <iostream>
# include <string.h>
using namespace::std;

Informacion::Informacion(){
	name = "Nombre";
	phone = "000-000-0000";
	address = "Direccion";
	age = 0;
}

Informacion::Informacion(char *n, int age,  char *p,  char *a){
	setName(n);
	setPhone(p);
	setAge(age);
	setAddress(a);

}

Informacion::Informacion(const Informacion & A){
	name = A.name;
	age = A.age;
	phone = A.phone;
	address = A.address;
}

Informacion::~Informacion(){
	delete[]name;
	delete[]phone;
	delete[]address;

}

void Informacion::setName(char *n){
	this -> name = new char[strlen(n) + 1];
	strcpy(name, n); 
}

void Informacion::setAge(int age){
	while (age < 0){
		cout << "Error la edad tiene que ser mayor que 0. Reentre: ";
		cin >> age;
	}
	this -> age = age;
}

void Informacion::setPhone(char *p){
	this ->	phone = new char[strlen(p) + 1];
	strcpy(phone, p);
}

void Informacion::setAddress(char *a){
	this ->	address = new char[strlen(a) + 1];
	strcpy(address, a);
}

void Informacion::getInformacion()const{
	cout << endl;
	cout << "Nombre: " << getName() << endl;
	cout << "Edad: " << getAge() << endl;
	cout << "Tel" << char(130) << "fono: " << getPhone() << endl;
	cout << "Direcci" << char(162) << "n: " << getAddress() << endl;
	cout << endl;
}

char* Informacion::getName()const{
	return name;
}

char* Informacion::getPhone()const{
	return phone;
}

char* Informacion::getAddress()const{
	return address;
}

int Informacion::getAge()const{
	return age;
}
