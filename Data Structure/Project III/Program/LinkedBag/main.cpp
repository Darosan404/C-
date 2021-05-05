#include<iostream>
#include"LinkedBag.h"
using namespace::std;

int main(){
	LinkedBag<int> bag;
	
	bag.add(2);
	cout << "Add el numero 2" << endl;
	bag.showLinked();
	bag.addEnd(4);
	cout << "Add el numero 4" << endl;
	bag.showLinked();
	bag.addEnd(8);
	cout << "Add el numero 8" << endl;
	bag.showLinked();
	bag.addEnd(10);
	cout << "Add el numero 10" << endl;
	
	bag.showLinked();
	
	bag.add(6);
	cout << "Add el numero 6" << endl;
	bag.showLinked();
	
	bag.remove(8);
	cout << "Eliminado el numero 8" << endl;
	bag.showLinked();
	
	LinkedBag<int> bagCopy(bag);
	cout << "Creando un objeto con el construstor de copia!" << endl;
	cout << "Imprimiendo el objeto creado por constructor de copia" << endl;
	bagCopy.showLinked();
	
	system("pause");
	return 0;
}
