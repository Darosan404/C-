# include "Tabla.h"
# include <iostream>
using namespace::std;

int main(){
	Tabla table;
	int res;
	do{
	
	system("cls");
	table.mostrarTabla();
	cout << "Seleciona una parte." << endl;
	cout << "Para salir entra '11'" << endl;
	cout << "Su seleccion es: ";
	cin >> res;
	
	switch(res){
		case 1:
			table.cambiarParts(res);
			break;
		case 2:
			table.cambiarParts(res);
			break;
		case 3:
			table.cambiarParts(res);
			break;
		case 4:
			table.cambiarParts(res);
			break;
		case 5:
			table.cambiarParts(res);
			break;
		case 6:
			table.cambiarParts(res);
			break;
		case 7:
			table.cambiarParts(res);
			break;
		case 8:
			table.cambiarParts(res);
			break;
		case 9:
			table.cambiarParts(res);
			break;
		case 10:
			table.cambiarParts(res);
			break;
		case 11:
			cout << "Hasta Pronto!!!!!" << endl;
			break;
		default:
			cout << "\nSelecion invalida!!!!" << endl;
			system("pause");
			break;
	}
}while(res != 11);	

	
	system("pause");
	return 0;
}
