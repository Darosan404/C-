# ifndef THEPARKEDCAR_H_
# define THEPARKEDCAR_H_

# include <iostream>

using namespace::std;

class TheParkedCar {

private:
	string make, model, color, licNum;
	int minute;
public:
	TheParkedCar(string make = " ", string model = " ", string color = " ", string licNum = " ", int minute = 0);
	TheParkedCar(const TheParkedCar &);
	TheParkedCar &operator=(const TheParkedCar &);
	~TheParkedCar();

	void setMake(string);
	void setModel(string);
	void setColor(string);
	void setLicNum(string);
	void setMinute(int);
	string getMake()const;
	string getModel()const;
	string getColor()const;
	string getLicNum()const;
	int getMinutes()const;
	friend ostream & operator<<(ostream &, const TheParkedCar &);
	friend istream & operator>>(istream &,  TheParkedCar&);
};
# endif
