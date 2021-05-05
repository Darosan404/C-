# ifndef ROOMDIMENSION_H_
# define ROOMDIMENSION_H_
# include "Feetinches.h"
# include <iostream>
using namespace::std;

class  RoomDimension{
private:
	FeetInches length, width;
public:
	RoomDimension();
	RoomDimension(const FeetInches &, const FeetInches &);
	RoomDimension(const RoomDimension &);
	~RoomDimension();

	void setLength();
	void setWidth();
	void getLength()const;
	void getWidth()const;
	FeetInches getArea();
};
# endif
