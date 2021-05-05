#ifndef _EMPLOYEE_
#define _EMPLOYEE_
#include <iostream>
using namespace::std;

class Employee{
      private:
              string name, departmen, position;
              int idNumber;
      public:
      Employee();                              // Contructor por defecto
      Employee(string, string, string, int);   // Contructor por parametro
      Employee(string, int);                   // Contructor que recibe name y id
      Employee & operator =(const Employee &); // Contructor de asignar
      ~Employee();                             // Destructor
      void setName(string);                     
      void setDepartmen(string);
      void setPosition(string);
      void setIdNumber(int);
      string getName()const;
      string getDepartmen()const;
      string getPosition()const;
      int getIdNumber()const;
      bool operator ==(const Employee &)const;	  // Para compara si los objetos osn iguales
      void showEmploye()const;                   // Para mostra datos como lo pide le libro
      friend ostream & operator <<(ostream &, const Employee &); // Para mostrar datos
      friend istream & operator >>(istream &, Employee &); // Para obtemer datos
      

};
#endif

Employee::Employee(){
   this->name = "";
   this->departmen = "";
   this->position = "";
   this->idNumber = 0;
}// Termina contructor por defecto

Employee::Employee(string name, string department, string position, int idNumber){
   this->setName(name);
   this->setDepartmen(departmen);
   this->setPosition(position);
   this->setIdNumber(idNumber);
}// Termina Contructor por parametro

Employee::Employee(string name, int idNumber){
   this->setName(name);
   this->setIdNumber(idNumber);
   this->departmen = "";
   this->position = "";
}// Termina contructor que recibe name y id

Employee & Employee::operator =(const Employee & anEmployee){
         this->name = anEmployee.name;
         this->departmen = anEmployee.departmen;
         this->position = anEmployee.position;
         this->idNumber = anEmployee.idNumber;
         return(*this);
}// Termina contructor de asignar

Employee::~Employee(){
                      
}// Termina destructor

void Employee::setName(string name){
     this->name = name;
}// Termina setName

void Employee::setDepartmen(string departmen){
     this->departmen = departmen;
}// Termina setDepartmen

void Employee::setPosition(string position){
     this->position = position;
}// Termina setPosition

void Employee::setIdNumber(int idNumber){
     while(idNumber < 0){
        cout << "Error! Tiene que ingresar un numero " 
        << "mayor que 0. Reentre el dato: ";
        cin >> idNumber;
     }
     this->idNumber = idNumber;
}// Termina setIdNumber

string Employee::getName()const{
       return (this->name);
}// Termina getName

string Employee::getDepartmen()const{
      return(this->departmen);
}// Termina getDepartmen

string Employee::getPosition()const{
       return(this->position);
}// Termina getPosition

int Employee::getIdNumber()const{
    return(this->idNumber);
}// Termina getIdNumber

ostream & operator <<(ostream &out, const Employee &anEmployee){
        out << "Informaci" << char(162) << "n del empleado:" << endl;
        out << "Nombre: " << anEmployee.name << endl;
        out << "Numero de ID: " << anEmployee.idNumber << endl;
        out << "Departamento: " << anEmployee.departmen << endl;
        out << "Posici" << char(162) << "n: " << anEmployee.position << endl << endl;
        return(out);
} // Termina el operador de <<

istream & operator >>(istream & in, Employee &anEmployee){
        cout << "Entre la informaci" << char(162) << "n del empleado:" << endl;
        
      
        cout << "Nombre: ";
        getline(in, anEmployee.name);
        
        cout << "Departamento: ";
        getline(in, anEmployee.departmen);
        
        cout << "Posici" << char(162) << "n: ";
        getline(in, anEmployee.position);
        
        cout << "Numero ID: ";
        in >> anEmployee.idNumber;
    
        while(anEmployee.idNumber < 0){
           cout << "Error! Tiene que ingresar un numero " 
           << "mayor que 0. Reentre el dato: ";
           in >> anEmployee.idNumber;
        }
        cin.ignore();
        
        
        return(in);
}// Termina el operador >>

bool Employee::operator ==(const Employee &anEmploye)const{
	return (this->idNumber == anEmploye.idNumber);
}// Termina el operador de comparacion
