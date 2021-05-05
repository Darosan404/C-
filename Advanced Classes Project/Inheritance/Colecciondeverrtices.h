# ifdef COLECCIONDEVERTICES_H
# define COLECCIONDEVERTICES_H

# include "Punto.h"
# include <iostream>
using namespace::std;

class ColeccionDeVertices : public Figura{
protected:
	Punto * arregloDePuntos; // Un grupo de partes
	int cantidadDePuntos;
	virtual void pedirCantidadDeVertices( ) = 0;
public:
	ColeccionDeVertices(int cantidadDePuntos = 0, const char *tipoFigura = "COLECCION DE VERTICES");
	ColeccionDeVertices(const ColeccionDeVertices & unaColeccion);
	virtual ~ColeccionDeVertices( );
	ColeccionDeVertices & operator = (const ColeccionDeVertices & unaColeccion);
	void pedirVerticesAlUsuario( );
	int cantidadDeVertices( ) const;
	void vaciarColeccion( ) const;
	Punto & operator [ ] (int indice);
	const Punto & operator [ ] (int indice) const;
	virtual void agregarVertice(const Punto & unPunto);
	virtual void mostrarInformacion( ) const;
}; 
# endif

ColeccionDeVertices::ColeccionDeVertices(int cantidadDePuntos, const char * tipoFigura) : Figura(tipoFigura){
 	if(cantidadDePuntos > 0){
		this->arregloDePuntos = new Punto[cantidadDePuntos];
		this->cantidadDePuntos = cantidadDePuntos;
	}
	else{
		this->arregloDePuntos = NULL;
		this->cantidadDePuntos = 0;
	}
} 

ColeccionDeVertices::ColeccionDeVertices(const ColeccionDeVertices &unaColeccion) : Figura(unaColeccion){
 	if(unaColeccion.cantidadDePuntos > 0){
		this->arregloDePuntos = new Punto[unaColeccion.cantidadDePuntos];
		for(int i = 0; i < unaColeccion.cantidadDePuntos; i++){
 			(*this)[i] = unaColeccion[i];
		}
	}
	else{	
		this->arregloDePuntos = NULL;
		this->cantidadDePuntos = unaColeccion.cantidadDePuntos);
	}
}

ColeccionDeVertices::~ColeccionDeVertices( ){
	delete [ ] (this->arregloDePuntos);
}

int ColeccionDeVertices::cantidadDeVertices( ) const{
	return (this->cantidadDePuntos);
}

void ColeccionDeVertices::agregarVertice(const Punto & unPunto){
 	// Se crea el nuevo arreglo dinámico
	Punto * arreglo = new Punto[this->cantidadDePuntos + 1];
 	// Se copian los elementos del antiguo arreglo en el nuevo arreglo
	for(int i = 0; i < this->cantidadDePuntos; i++)
 		arreglo[i] = (*this)[i];
	// Se copia un punto en el nuevo arreglo
	arreglo[this->cantidadDePuntos] = unPunto;
	// Se liberan los espacios del antiguo arreglo
	delete [ ] (this->arregloDePuntos);
	// Se guarda la dirección del nuevo arreglo
	this->arregloDePuntos = arreglo;
	(this->cantidadDePuntos)++;
} 

void ColeccionDeVertices::vaciarColeccion( ){
	delete [ ] this->arregloDePuntos;
	this->arregloDePuntos = NULL;
	this->cantidadDePuntos = 0;
}

Punto & ColeccionDeVertices::operator [ ] (int index){
	return (this->arregloDePuntos)[index]);
}

const Punto & ColeccionDeVertices::operator [ ] (int index) const{
	return (this->arregloDePuntos)[index]);
}

ColeccionDeVertices & ColeccionDeVertices::operator = (const ColeccionDeVertices & unaColeccion){
	Figura::operator=(unaColeccion);
	delete [ ] this-> arregloDePuntos;
	if(unaColeccion.cantidadDePuntos > 0){
 		this->arregloDePuntos = new Punto[unaColeccion.cantidadDePuntos];
 		for(int i = 0; i < unaColeccion.cantidadDePuntos; i++)
			(*this)[i] = unaColeccion[i];
	}
	else{
 		this->arregloDePuntos = NULL;
		this->cantidadDePuntos = unaColeccion.cantidadDePuntos);
	}
	return (*this);
}

void ColeccionDeVertices::mostrarInformacion( ) const{
	Figura::mostrarInformacion( );
	cout << "\tTiene: " << this->cantidadDePuntos << "vértices"<< endl;
	cout << "\tLos vértices son:" << endl;
	for(int i = 0; i < this->cantidadDePuntos; i++)
 		cout << "\t\tVértice #" << (i + 1) << ": (" << (this->arregloDePuntos)[i].obtenerX( ) << ", " << (this->arregloDePuntos)[i].obtenerY( ) << ")" << endl;
} 

void ColeccionDeVertices::pedirVerticesAlUsuario( ){
 	double x, y;
	delete [ ] (this->arregloDePuntos);
 	this->pedirCantidadDeVertices( );
 	this->arregloDePuntos = new Punto[this->cantidadDePuntos];
	for(int i = 0; i < this->cantidadDePuntos; i++){
 		cout << "Cuál es la coordenada x del vértice #" << (i + 1) << ": ";
		cin >> x;
		cout << "Cuál es la coordenada y del vértice #" << (i + 1) << ": ";
		cin >> y;
		(*this)[i].cambiarX(x);
		(*this)[i].cambiarY(y);
	}
}
