# ifndef TIMECLOCK_H  
# define TIMECLOCK_H  

# include "MilTime.h"
# include <iostream>
using namespace::std;
  
class Timeclock: public Miltime {
	private:
		Miltime i;
		Miltime e;
public: 
	Timeclock(int MilHours = 0, int MilHours1 = 0){
		i.setMilh(MilHours);
		e.setMilh(MilHours1);
	}
	
	int getD()const{
		int d = (e.getHours() - i.getHours()) / 100;
		return d;
	}

}; 
 #endif
