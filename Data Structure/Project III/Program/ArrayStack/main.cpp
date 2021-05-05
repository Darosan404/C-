#include "ArrayStack.h"
#include <iostream>
using namespace::std;

int main() {
	ArrayStack<int> pila;
	int opcion = 0, dato = 0; 	
	char respuesta;
	
do{
	cout << "Probando el ArrayStack(pila)." << endl;
	cout << "1. Agregar dato. \n2. Eliminar dato. \n3. Ver el Array Stack." << endl << "Entre la opcion: ";
	cin >> opcion;
	
	switch(opcion){
		case 1: 
			cout << "\nEntre el dato que quiere entrar al Array Stack: ";
			cin >> dato;
			pila.push(dato);
			cout << endl;
			break;	
		case 2:
				cout << "\n Eliminando dato del Array Stack!. " << endl;
				pila.pop();
				break;
		case 3:
				if (!pila.isEmpty()){
					cout << "Datos del Array Satck:" << endl;
					for(int i = pila.getTop(); i >= 0; i--){
						cout << pila.showArrayStack(i) << endl;
					}
				}
				else
					cout << "El Array Stack esta vacio!" << endl;
				break;
		default:
				cout << "Esta opcion no existe." << endl;
				break;
	}

	cout << "\nQuieres salir del programa (s/n): ";
	cin >> respuesta;
	system("cls");
}while(respuesta == 'n' || respuesta == 'N');
	system("pause");
	return 0;
}
