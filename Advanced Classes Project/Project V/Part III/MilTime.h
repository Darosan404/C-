# ifndef MILTIME_H  
# define MILTIME_H  

# include "Time.h"
# include <iostream>
using namespace::std;

class Miltime: public Time{
	protected:
		int milHours;
		int milSeconds;
		void setTime(int h, int s){
			if(h == 100 || h == 1300){
				hour = 1; min = 0; sec = s;
			}
			else if(h == 200 || h == 1400){
				hour = 2; min = 0; sec = s;
			}
			else if(h == 300 || h == 1500){
				hour = 3; min = 0; sec = s;
			}
			else if(h == 400 || h == 1600){
				hour = 4; min = 0; sec = s;
			}
			else if(h == 500 || h == 1700){
				hour = 5; min = 0; sec = s;
			}
			else if(h == 600 || h == 1800){
				hour = 6; min = 0; sec = s;
			}
			else if(h == 700 || h == 1900){
				hour = 7; min = 0; sec = s;
			}
			else if(h == 800 || h == 2000){
				hour = 8; min = 0; sec = s;
			}
			else if(h == 900 || h == 2100){
				hour = 9; min = 0; sec = s;
			}
			else if(h == 1000 || h == 2200){
				hour = 10; min = 0; sec = s;
			}
			else if(h == 1100 || h == 2300){
				hour = 11; min = 0; sec = s;
			}
			else
			hour = 12; min = 0; sec = s;
		}
	public:
		Miltime(int milHours = 0, int milSeconds = 0){
			setMilh(milHours);
			setMils(milSeconds);
			setTime(this->milHours, this->milSeconds);
			
		}
		
		void setMilh(int h){
			while(h < 0  || h < 100 && h > 2359){
				cout << "\nError!!. La hora militar debe ser entre (100 - 2359). Reentre: "; 
				cin >> h;
			}
			milHours = h;
		}
		
		void setMils(int s){
			while(s < 0  || s > 59){
				cout << "\nError!!. Los segundos tienen que ser entre (0 - 59). Reentre: "; 
				cin >> s;
			}
			milSeconds= s;
		}
		
		int getHours()const{
		return (this->milHours);
		}
		int getStandHr()const{
		return (this->getHour());
		}
	
};
# endif
