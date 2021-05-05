# ifdef FIGURA_H
# define FIGURA_H

# include <iostream>
using namespace::std;

class Figura{
protected:
 	char tipo[30];
public:
	Figura(const char * tipoFigura = "FIGURA"); // Constructor
	Figura(const Figura & unaFigura); // Constructor
	virtual ~Figura( ); // Destructor
	Figura & operator = (const Figura & unaFigura);
	virtual void mostrarInformacion( ) const; // Servicio
	virtual const char * tipoDeFigura( ) const = 0; // Servicio abstracto
};
# endif

Figura::Figura(const char * tipoFigura){
	strcpy_s(this->tipo, 30, tipoFigura);
}

Figura::Figura(const Figura & unaFigura){
	strcpy_s(this->tipo, 30, unaFigura.tipo);
}

Figura::~Figura( ){
 // Ningún recurso que liberar
}

Figura & Figura::operator = (const Figura & unaFigura){
	strcpy_s(this->tipo, 30, unaFigura.tipo);
 return (*this);
}

void Figura::mostrarInformacion( ) const{
	cout << "Tipo de figura: " << this->tipoDeFigura() << endl;
}

