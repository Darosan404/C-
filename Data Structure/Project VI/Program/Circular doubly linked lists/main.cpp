#include <iostream>
#include "Gestor.h"
using namespace::std;

int main(){
	Gestor binario;
	
	cin >> binario;
	binario.charToBin();
	
	cout << endl << endl;
	cin >> binario;
	binario.binToChar();
	
	
	system("pause");
	return 0;
}
