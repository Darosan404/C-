#include <iostream>
#include <cmath>
using namespace std;

class Termino{
private:
	int coef;
	int exp;

public:
	//Construtors
	Termino() : coef(1), exp(1)	{}
	Termino(int a) : coef(a), exp(0) {}
	Termino(int a, int n) : coef(a), exp(n) {}
	Termino(const Termino & unTermino)
		: coef(unTermino.coef), exp(unTermino.exp) {}

	~Termino() {}

	//Getters
	int getCoef() const{ return this->coef; }
	int getExp() const{ return this->exp; }

	//Setters
	void setCoef(int a){ this->coef = a; }
	void setExp(int n){ this->exp = n; }

	Termino &  operator =(const Termino & unTermino){
		this->coef = unTermino.coef;
		this->exp = unTermino.exp;

		return(*this);
	}

	friend ostream & operator <<(ostream & out, const Termino & unTermino){
		if (unTermino.coef != 0){
			out << abs((double)unTermino.coef);

			if (unTermino.exp != 0){
				out << "x";

				if (unTermino.exp != 1){
					out << "^" << unTermino.exp;
				}
			}
		}

		return out;
	}

	friend istream & operator >>(istream & in, Termino & unTermino){
		cout << "Entre el coeficiente? ";
		in >> unTermino.coef;

		cout << "\tEntre el exponente? ";
		in >> unTermino.exp;

		return in;
	}

	int eval(int x){
		return(this->coef * pow(x, this->exp));
	}
	
	bool operator == (const Termino & termino)const{
		return (coef == termino.coef && exp == termino.exp );
	}
};
