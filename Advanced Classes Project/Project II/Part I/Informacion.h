# ifndef INFORMACION_H_
# define INFORMACION_H_
# include <string>
using namespace::std;


class Informacion{
	private:
		string name, phone, address;
		int age;	
	public:
		Informacion();
		Informacion(const Informacion &A);
		Informacion(string, int, string, string);
		~Informacion();
		
		void setName();
		void setAge();
		void setPhone();
		void setAddress();
		void getInformacion()const;
};
# endif
