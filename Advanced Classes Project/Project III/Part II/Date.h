# ifndef DATE_H_
# define DATE_H_
# include <iostream>
using namespace std;


class Date{
	private:
		int month, day, year;
		string A;
		int AA[4] = {4, 6, 9, 11};
		void valiDay();	
		void valiMonth();	
		void dateS();
	public:	
		Date(int month = 1, int day = 1, int year = 2017);
		~Date();
		
		void setMonth(int);
		void setDay(int);
		void setYear(int);
		int getMonth()const;
		int getDay()const;
		int getYear()const;
		void getFormat1()const;
		void getFormat2()const;
		Date operator-(const Date &)const;
		Date &operator++();
		Date operator++(int);
		Date &operator--();
		Date operator--(int);
		friend ostream &operator<<(ostream &, const Date &);
		friend istream &operator>>(istream &, Date &);	
};
# endif
