# include "Month.h"
# include <iostream>
using namespace::std;

int main(){
	Month obj;

	cout << "Vamos a Probar los Operadores de la Clase." << endl;
	cout << "I. Operadore de prefijo ++ y --" << endl;
	cout << "a) ++" << endl;
	for (int i = 1; i < 14; i++){
		cout << obj;
		obj++;
	}
	cout << "b) --" << endl;
	for (int i = 1; i < 14; i++){
		cout << obj;
		obj--;
	}
	cout << "II. Operadores sufijo ++ y --" << endl;
	cout << "a) --" << endl;
	for (int i = 1; i < 14; i++){
		cout << obj;
		--obj;
	}
	cout << "b) ++" << endl;
	for (int i = 1; i < 14; i++){
		cout << obj;
		++obj;
	}

	cout << "III. Ahora Probaremos los operadores de 'cin' y 'cout'" << endl;
	cin >> obj;
	cout << obj;



	system("pause");
	return 0;
}
