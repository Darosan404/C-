#include <iostream>
#include "Assignment.h"
#include "PriorityQueue.h"
using namespace::std;

int main(){
	int op = 4;
	Assignment work(" ", " ", " ", " ", " " , 1, 1, 1900);
	SL_PriorityQueue<Assignment> listAssignment;
	char res = 'n';
	
	do{
		
		system("cls");
	cout << "Programa para Organizar Asignaciones" << endl << endl;
	cout << "1. A" << char(164) << "adir asignacion" << endl 
		 << "2. Eliminar asignacion" << endl
		 << "3. Ver asignaciones" << endl
		 << "4. Salir " << endl
		 << "Seleciones una opcion: ";
		 cin >> op; 
		 cout << endl;
		 
		 switch(op){
		 case 1:
		 		cin >> work;
		 		listAssignment.add(work);
		 		break;
		 case 2:
		 		listAssignment.remove();
		 		break;
		 case 3:
		 		cout << "Asignaciones Pendiente" << endl;
		 		listAssignment.showList();
		 		cout << endl;
			 	break;
		 case 4:
		 		cout << "Seguro que desea salir? s/n: ";
		 		cin >> res;
				break;
		 default:
					cout << "Error! Marcaste una opcion incorrecta." << endl;
					cout << "Presione ENTER para intentar nuevamente." << endl;
					break;
		 }
		 system("pause");
	}while (res == 'n' || res == 'N');
	
	cout << "Gracias por usar nuestro programa! Que tenga buen dia" << endl;
	
	system("pause");
	return 0;
}
