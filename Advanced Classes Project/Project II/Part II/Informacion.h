# ifndef INFORMACION_H_
# define INFORMACION_H_

class Informacion{
	private:
		char *name, *phone, *address;
		int age;	
	public:
		Informacion();
		Informacion(const Informacion &A);
		Informacion( char* name = " ", int age = 0,  char* phone = " ",  char* address = " ");
		~Informacion();
		
		void setName(char*);
		void setAge(int);
		void setPhone(char*);
		void setAddress(char*);
		void getInformacion()const;
		char* getName()const;
		char* getPhone()const;
		char* getAddress()const;
		int getAge()const;
};
# endif
