# include "informacion.h"
# include <iostream>
using namespace::std;

int main() {
	Informacion user[3];
	char *pn, *pp, *pa;
	int age;
	pn = new char[30];
	pp = new char[20];
	pa = new char[40];

	for (int i = 0; i < 3; i++){
		cout << "Entre la informaci" << char(162) << "n [" << i + 1 << "]" << endl;

		cout << "Escribe su nombre: ";
		cin.getline(pn, 30, '\n'); user[i].setName(pn);

		cout << "Escribe su edad: ";
		cin >> age; user[i].setAge(age); cin.ignore(256,'\n');

		cout << "Escribe su numero de tel" << char(130) << "fono: ";
		cin.getline(pp, 20, '\n'); user[i].setPhone(pp);

		cout << "Escribe su Direcci" << char(162) << "n: ";
		cin.getline(pa, 40, '\n'); user[i].setAddress(pa);

		cout << endl;
	}

	system("cls");

	for (int j = 0; j < 3; j++){
		cout << "Informaci" << char(162) << "n [" << j + 1 << "] Entrada:" << endl;
		user[j].getInformacion();
	}
	
	delete[]pn;
	delete[]pp;
	delete[]pa;

	system("pause");
	return 0;
}
