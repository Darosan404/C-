#include<iostream>
#include "ArrayBag.h"
#include "Employee.h"
using namespace::std;

int main(){
	ArrayBag<Employee> employe;
	
	employe.ask();	
	employe.show();
	
	
	system("pause");
	return 0;
}
