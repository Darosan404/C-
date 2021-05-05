# ifndef HOURLYPAID_H_
# define HOURLYPAID_H_

# include <iostream>

using namespace::std;

class Hourly {
	private:
		int hourW;
		double hourR;
	public:
		Hourly(int hourW = 0, int hourR = 0);
		Hourly(const Hourly &);
		Hourly &operator = (const Hourly &);
		~Hourly();
		
		void setHourW(int hourW);
		void setHourR(double hourR);
		int getHourW()const;
		int getHourR()const;
};
# endif
