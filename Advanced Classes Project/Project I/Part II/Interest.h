# ifndef INTEREST_H_
# define INTEREST_H_

class  Interest
{
public:
	 Interest();
	 Interest(double, double, int);
	~Interest();

	void setValue(double);
	void setYear(int);
	void setInterest(double);
	void getValue();
	void getYear();
	void getInterest();
	double getFutureValue(double, double, int);

private:
	double valor, intereses;
	int year;
};
# endif
