# include <iostream>

using namespace::std;

template <class X>
X minimum (X a, X b){
	return  (a < b) ? a : b;
}

template <class D>
D maximum (D a, D b){
	return  (a > b) ? a : b;
}



int main(){
	
	cout << minimum(1,2) << endl;
	cout <<  minimum(10.20,5.10) << endl;
	cout << maximum(2,1) << endl;
	cout << maximum(10,20) << endl;
	
	system("pause");
	return 0;
}
