# ifdef PUNTO_H
# define PUNTO_H

# include <iostream>
# include <cmath>
using namespace::std;

class Punto : public Figura{
private:
	double x; // Atributo del objeto
	double y; // Atributo del objeto
public:
	Punto(double x = 0.0, double y = 0.0); // Constructor
	Punto(const Punto & unPunto); // Constructor
	virtual ~Punto( ); // Destructor
	Punto & operator = (const Punto & unPunto);
	double obtenerX( ) const; // Servicio del objeto
	double obtenerY( ) const; // Servicio del objeto
	void cambiarX(double largo); // Servicio del objeto
	void cambiarY(double ancho); // Servicio del objeto
	double distancia(const Punto & unPunto) const;
	void mostrarCoordenadas( ) const; // Servicio del objeto
	void mostrarPosicionEnElPlano( ) const; // Servicio del objeto
	void pedirCoordendasAlUsuario( ); // Servicio del objeto
	bool estaEnElCuadranteI( ) const; // Servicio del objeto
	bool estaEnElCuadranteII( ) const; // Servicio del objeto
	bool estaEnElCuadranteIII( ) const; // Servicio del objeto
	bool estaEnElCuadranteIV( ) const; // Servicio del objeto
	bool estaEnElEjeX( ) const; // Servicio del objeto
	bool estaEnElEjeY( ) const; // Servicio del objeto
	bool estaEnElOrigen( ) const; // Servicio del objeto
	virtual void mostrarInformacion( ) const; // Servicio del objeto
	virtual const char * tipoDeFigura( ) const; // Servicio del objeto
}; 
# endif

double Punto::obtenerX( ) const{
	return (this->x);
} 

double Punto::obtenerY( ) const{
	return (this->y);
}

void Punto::cambiarX(double x){
	this->x = x;
}

void Punto::cambiarY(double y){
	this->y = y;
}

double Punto::distancia(const Punto & unPunto) const{
	return (sqrt(pow(this->x – unPunto.x, 2) + pow(this->y – unPunto.y, 2)));
}

void Punto::mostrarCoordenadas( ) const{
	cout << "(" << this->x << ", " << this->y << ")";
}

bool Punto::estaEnElCuadranteI( ) const{
	return(this->x > 0.0 && this->y > 0.0);
}

bool Punto::estaEnElCuadranteII( ) const{
	return(this->x < 0.0 && this->y > 0.0);
}

bool Punto::estaEnElCuadranteIII( ) const{
	return(this->x < 0.0 && this->y < 0.0);
}

bool Punto::estaEnElCuadranteIV( ) const{
	return(this->x > 0.0 && this->y < 0.0);
}

bool Punto::estaEnElOrigen( ) const{
	return(this->x == 0.0 && this->y == 0.0);
} 

bool Punto::estaEnElEjeX( ) const{
	return(this->y == 0.0 && this->x != 0.0);
}

bool Punto::estaEnElEjeY( ) const{
	return(this->x == 0.0 && this->y != 0.0);
}

void Punto::mostrarPosicionEnElPlano( ) const{
	if(this->estaEnElCuadranteI( ))
		cout << "El punto está en el cuadrante I del plano Cartesiano"<< endl;
	else if(this->estaEnElCuadranteII( ))
		cout << "El punto está en el cuadrante II del plano Cartesiano"<< endl;
	else if(this->estaEnElCuadranteIII( ))
		cout << "El punto está en el cuadrante III del plano Cartesiano"<< endl;
	else if(this->estaEnElCuadranteIV( ))
		cout << "El punto está en el cuadrante IV del plano Cartesiano"<< endl;
	else if(this->estaEnElOrigen( ))
		cout << "El punto está en el origen del plano Cartesiano"<< endl;
	else if(this->estaEnElEjeX( ))
		cout << "El punto está en el eje de x del plano Cartesiano"<< endl;
	else
		cout << "El punto está en el eje de y del plano Cartesiano"<< endl;
}

void Punto::mostrarInformacion( ) const{
	Figura::mostrarInformacion( );//heredo de la clase figura.
 	cout << "\n\t";
	this->mostrarCoordenadas( );
	this->mostrarPosicionEnElPlano( );
} 

const char * Punto::tipoDeFigura( ) const{
	return (Figura::tipo);// heredo de la clase figura.
}

void Punto::pedirCoordenadasAlUsuario( ){
	cout << "Ingrese la coordenada x del punto: ";
	cin >> this->x;
	cout << "Ingrese la coordenada y del punto: ";
	cin >> this->y;
}

Punto & Punto::operator = (const Punto & unPunto){
	Figura::operator=(unPunto);
	this->x = unPunto.x;
	this->y = unPunto.y;
	return (*this);
}
Punto::Punto(double x, double y) : Figura("PUNTO"){
	this->x = x;
	this->y = y;
}

Punto::Punto(const Punto & unPunto) : Figura(unPunto){
	this->x = unPunto.x;
	this->y = unPunto.y;
}

Punto::~Punto( )
{
// Ningún recurso que liberar
}
