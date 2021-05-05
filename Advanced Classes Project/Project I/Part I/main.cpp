# include <iostream>
# include "inventory.h"
using namespace::std;

int main()
{
	Inventory galletas, jugo(15,30,10);
	
	cout << "Mi inventario.\n" << endl;
	
	cout << "A. Galletas\n" << endl;
	cout << "Numeraci" << char(162) << "n del art" << char(161) << "culo: " << galletas.getItemNumber() << endl;
	cout << "Cantidad del art" << char(161) << "culo: " << galletas.getQuantity() << endl;
	cout << "Cambiando cantidad del art" << char(161) << "culo" << endl; galletas.setQuantity(10);
	cout << "Cantidad del art" << char(161) << "culo: " << galletas.getQuantity() << endl;
	cout << "Costo del art" << char(161) << "culo: $" << galletas.getCost() << endl;
	cout << "Cambiando costo del art" << char(161) << "culo" << endl; galletas.setCost(25);
	cout << "Costo del art" << char(161) << "culo: $" << galletas.getCost() << endl;
	cout << "Costo total del art" << char(161) << "culo: $" << galletas.getTotalCost() << endl;
	
	cout << "\n\nB. Jugos\n" << endl;
	cout << "Cambiando numerac"  << char(162) << "n del art" << char(161) << "culo" << endl; jugo.setItemNumber(100);
	cout << "Numeraci" << char(162) << "n del art" << char(161) << "culo: " << jugo.getItemNumber() << endl;
	cout << "Cantidad del art" << char(161) << "culo: " << jugo.getQuantity() << endl;
	cout << "Costo del art" << char(161) << "culo: $" << jugo.getCost() << endl;
	cout << "Costo total del art" << char(161) << "culo: $" << jugo.getTotalCost() << endl;
	
	cout << "\n\nProbando validaciones de la clase.\n" << endl;
	cout << "Cambiando numerac"  << char(162) << "n del art" << char(161) << "culo" << endl; jugo.setItemNumber(-100);
	cout << "Cambiando cantidad del art" << char(161) << "culo" << endl; galletas.setQuantity(-10);
	cout << "Cambiando costo del art" << char(161) << "culo" << endl; galletas.setCost(-25);
	
	system("pause");
	return 0;
}
