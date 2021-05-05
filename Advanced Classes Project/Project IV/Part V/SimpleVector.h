# ifndef SIMPLEVECTOR_H_
# define SIMPLEVECTOR_H_

# include <iostream>
# include <new> // Needed for bad_alloc exception
# include <cstdlib> // Needed for the exit function

using namespace std;

 template <class T>
 class SimpleVector{
private:
	T *aptr; 
	int arraySize; 
	void memError(); 
	void subError();
public:
	SimpleVector(){ 
		aptr = 0; 
		arraySize = 0; 
}

	SimpleVector(int);
			

	SimpleVector(const SimpleVector &);
		

	~SimpleVector();
				
	int size() const{ 
		return arraySize; 
}
				
	T getElementAt(int position);
				
	T &operator[](const int &);
};

 template <class T>
 SimpleVector<T>::SimpleVector(int s){
	 arraySize = s;
	 try
		{
			aptr = new T[s];
		}
	 catch (bad_alloc)
		 {
			 memError();
		 }
}

 template <class T>
 SimpleVector<T>::SimpleVector(const SimpleVector &obj)
 {
	arraySize = obj.arraySize;
	
	 aptr = new T[arraySize];
		if (aptr == 0)
		 memError();
	
		for (int count = 0; count < arraySize; count++)
		 * (aptr + count) = *(obj.aptr + count);
}

 template <class T>
 SimpleVector<T>::~SimpleVector()
 {
	 if (arraySize > 0)
		 delete[] aptr;
}

 template <class T>
 void SimpleVector<T>::memError()
 {
	 cout << "ERROR:Cannot allocate memory.\n";
	 exit(EXIT_FAILURE);
}



 template <class T>
 void SimpleVector<T>::subError()
 {
	 cout << "ERROR: Subscript out of range.\n";
	 exit(EXIT_FAILURE);
	}

 template <class T>
 T SimpleVector<T>::getElementAt(int sub)
 {
	 if (sub < 0 || sub >= arraySize)
		 subError();
	 return aptr[sub];
}

 template <class T>
 T &SimpleVector<T>::operator[](const int &sub)
 {
	 if (sub < 0 || sub >= arraySize)
		 subError();
	 return aptr[sub];
 }
 #endif
