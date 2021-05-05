# ifndef INFORMACION_H_
# define INFORMACION_H_
# include <iostream>
using namespace::std;

class Month{
private:
	void numberMonth();
	void error();
	string A;
	int monthNumber;
public:

	Month(string A = "enero", int monthNumber = 1);
	~Month();

	void setMonth(string);
	void setMonthNumber(int);
	string getMonth()const;
	int getMonthNumber()const;
	Month &operator++();
	Month operator++(int);
	Month &operator--();
	Month operator--(int);
	friend ostream &operator<<(ostream &, const Month &);
	friend istream &operator>>(istream &, Month &);
};
# endif
