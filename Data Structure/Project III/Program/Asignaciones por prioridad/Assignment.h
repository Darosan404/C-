#ifndef _ASSIGNMENT_
#define _ASSIGNMENT_

#include<iostream>
#include "Date.h"
using namespace::std;

class Assignment{
	private:
		string nombre, curso, secc, trimestre, descripcion;
		Date fecha; 
	
	public:
		Assignment(string nombre = "", string curso = "", string secc = "", string trimestre = "", string descripcion = "",
					int dia = 1, int mes = 1, int anio = 2018);
		Assignment(const Assignment &);
		Assignment & operator =(const Assignment &);
		~Assignment();
		string getName()const;
		bool operator <= (const Assignment &) const;
		bool operator >= (const Assignment &) const;   
		friend ostream & operator <<(ostream &, const Assignment &); 
		friend istream & operator >>(istream &, Assignment &);
};
#endif

Assignment::Assignment(string nombre, string curso, string secc, string trimestre, string descripcion,
						int mes, int dia, int anio) :fecha(mes, dia, anio){
	this->nombre = nombre;
	this->curso = curso;
	this->secc = secc;
	this->trimestre = trimestre;
	this->descripcion = descripcion;
}

Assignment::Assignment(const Assignment & anAssignment) : fecha(anAssignment.fecha){
	(*this) = anAssignment;
}

Assignment & Assignment::operator =(const Assignment  & anAssignment) {
	this->nombre = anAssignment.nombre;
	this->curso = anAssignment.curso;
	this->secc = anAssignment.secc;
	this->trimestre = anAssignment.trimestre;
	this->descripcion = anAssignment.descripcion;
}

Assignment::~Assignment(){
	
}

ostream & operator <<(ostream &out, const Assignment &anAssignment){
	out << "Nombre: " << anAssignment.nombre << endl;
	out << "Curso: " << anAssignment.curso << endl;
	out << "Seccion: " << anAssignment.secc << endl;
	out << "Trimestre: " << anAssignment.trimestre << endl;
	out << "Descripcion: " << anAssignment.descripcion << endl;
	out << "Fecha: " << anAssignment.fecha << endl;
	
	return(out); 
}

istream & operator >>(istream &in, Assignment &anAssignment){
	in.ignore();
	cout << "Nombre: ";
	getline(in, anAssignment.nombre);
	
	cout << "Curso: ";
	getline(in, anAssignment.curso);
	
	cout << "Seccion: ";
	getline(in, anAssignment.secc);
	
	cout << "Trimestre: ";
	getline(in, anAssignment.trimestre);
	
	cout << "Descripcion: ";
	getline(in, anAssignment.descripcion);
	
	anAssignment.fecha.pedirDatos();
	
	return (in);
}

bool Assignment::operator <=(const Assignment & anAssignment) const{
	return (this->fecha <= anAssignment.fecha);
}   

bool Assignment::operator >=(const Assignment & anAssignment) const{
	return (this->fecha >= anAssignment.fecha);
}
