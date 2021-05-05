# ifndef TABLA_H_
# define TABLA_H_

# include "SimpleVector.h"
# include <iostream>
using namespace::std;



class Tabla{
	private:
	SimpleVector<int> number;
	const string name [10] = {"Valve", "Bearing", "Bushing", "Coupling", "Flange", "Gear", "Gear Housing", "Vacuum Gripper", "Cable", "Rod"};
	public:
		Tabla();
		Tabla(const Tabla &);
		Tabla & operator = (const Tabla &);
		~Tabla();
		
		void mostrarTabla();
		void cambiarParts(int);
		
		
		
	
};
# endif
