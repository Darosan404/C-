# include "Roomcarpet.h"
# include "FeetInches.h"
# include "Roomdimension.h"
# include <iomanip>
# include <iostream>
using namespace::std;

int main(){
	int cost = 0;
	RoomDimension room;
	
	cout << "Between the length of the room." << endl;
	room.setLength();
	
	cout <<  "\nBetween the width of the room" << endl;
	room.setWidth();
	
	cout << "\nThe area of the room is: "  << room.getArea() << endl;
	
	cout << "\nBetween the cost of the carpet per square foot: $";
	cin >> cost;
	
	cout << setprecision(2) << fixed << showpoint; 
	
	RoomCarpet temp(room, cost);
	cout << "\nTotal of cost is: $" << temp.totalCost() << endl;
	
	system("pause");
	return 0;
}
