# include "informacion.h"
# include <iostream>
using namespace::std;

int main () {
	Informacion mi, familia = mi, amigo("Jose Fernandez Molina", 25, "787-552-6545", "C\16 C-20 Rio Grande");
	
	cout << "Entre su informaci" << char(162) << "n personal:" << endl;
	mi.setName();
	mi.setAge();
	mi.setPhone();
	mi.setAddress();
	
	cout << "\nFamilia." << endl;
	familia.setName();
	familia.setAge();
	familia.setPhone();
	familia.setAddress();
	
	system("cls");
	cout << "Informaci" << char(162) << "n de Usted, Amigos y Familiares.";
	cout << "Mi informaci" << char(162) << "n:" << endl;
	mi.getInformacion();
	cout << "Informaci" << char(162) << "n del Familiar:" << endl;	
	familia.getInformacion();
	cout << "Informaci" << char(162) << "n de amigo:" << endl;
	amigo.getInformacion();
	
	system("pause");	
   return 0;
}
