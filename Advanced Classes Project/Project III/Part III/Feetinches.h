# ifndef FEETINCHES_H_
# define FEETINCHES_H_
# include <iostream>
using namespace::std;

class FeetInches{
private:
	int feet;
	int inches;
public:
	FeetInches(int f = 0, int i = 0);
	FeetInches(const FeetInches &);
	~FeetInches();
 
	void setFeet(int);
	void setInches(int);
	int getFeet()const;
	int getInches()const;
	FeetInches operator + (const FeetInches &);
	FeetInches operator - (const FeetInches &);
	FeetInches operator * (const FeetInches &);
	FeetInches operator ++ ();
	FeetInches operator ++ (int);
	bool operator > (const FeetInches &);
	bool operator < (const FeetInches &);
	bool operator == (const FeetInches &); 
	friend ostream &operator << (ostream &, const FeetInches &);
	friend istream &operator >> (istream &, FeetInches &);
};
# endif
