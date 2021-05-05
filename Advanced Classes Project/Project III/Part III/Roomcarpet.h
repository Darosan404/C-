# ifndef ROOMCARPET_H_
# define ROOMCARPET_H_
# include <iostream>
using namespace::std;
# include "Roomdimension.h"

class  RoomCarpet{
private:
	RoomDimension room;
	int cost;
public:
	RoomCarpet(const RoomDimension &, int cost = 1);
	~RoomCarpet();
	
	void setCost(int);
	int getCost()const;
	int totalCost();
};
# endif
