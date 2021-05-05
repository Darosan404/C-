# include "Salaried.h"

# include<iostream>

using namespace::std;

int main(){
	Salaried work;
	
	int respuesta;
	
	cout << "Calcular el Pago para los Trabajadores." << endl << endl;
	cout << "1. Trabajadores por Salario" << endl;
	cout << "2. Trabajadores por Horas" << endl;
	cout << "3. Salir" << endl;
	cout << "\n Escoge una opcion: ";
	cin >> respuesta;
	
	system("cls");
	
	switch(respuesta){
		case 1:
			work.pedirDatos1();
			cout << "El Salario es: $" << work.calculatePay1() << endl;
			
			break;
		case 2:
			work.pedirDatos();
			cout << "El Salario es: $" << work.calculatePay() << endl;
			break;
		
		case 3:
			cout << "\nGracias por usar nuestro programa!!!!!" << endl;
			break;
			
	}
	
	
	
	system("pause");
	return 0;
}
