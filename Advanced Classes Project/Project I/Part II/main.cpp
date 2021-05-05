# include <iostream>
# include "interest.h"
# include <iomanip>
using namespace::std;

int main()
{
	Interest user;
	double valor, intereses;
	int year;
	
	cout << "Calcular Valor Futuro de su Cuenta." << endl;
	
	cout << "\nEntre su Informaci" << char(162) << "n:";	
	cout << "\nEntre el balance de su cuenta: $";
	cin >> valor; user.setValue(valor);
	cout << "Entre los intereses anuales de su cuenta(0.0%): ";
	cin >> intereses; user.setInterest(intereses);
	cout << "Entre los a" << char(164) << "os que el dinero se va a quedar en la cuenta: ";
	cin >> year; user.setYear(year);
	
	cout << "\nLa informaci" << char(162) << "n que ha ingresado es:";
	user.getValue();
	user.getInterest();
	user.getYear();
	
	cout << "\nValor Futuro de su Cuenta.\n" << endl;
	cout << fixed << setprecision(2) << endl;
	
	cout << "A" << char(164) << "os" << setw(25) << "Balance de Cuenta" << endl;
	
	for (int i = 1; i <= year; i++){
		cout << i << "\t\t" << user.getFutureValue(valor, intereses, i) << endl; 
	}
	
	cout << endl;
	
	system("pause");
	return 0;
}
