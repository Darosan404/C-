# include "Theparkingmeter.h"
# include "Theparkedcar.h"
# include "Thepoliceofficer.h"
# include "Theparkingticket.h"

# include <iostream>

using namespace::std;

int main(){
	
    TheParkedCar car;
    cin >> car;
	
	TheParkingMeter meter(60);

    ThePoliceOfficer officer;
    cin >> officer;
    
    int illegalMinutes = officer.examine(car, meter);
    
    if (illegalMinutes > 0){
    	cout << endl;
    	TheParkingTicket ticket(0.0, illegalMinutes);
    	cout << car << endl;
    	cout << officer << endl;
    	cout << ticket;
	}
	
	else{
		cout << "No crimes committed!" << endl;
	}

	system("pause");
	return 0;
}
