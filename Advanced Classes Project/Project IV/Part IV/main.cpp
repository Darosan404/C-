# include <fstream>
# include <string>

# include <iostream>

using namespace::std;

template <class X>
X getHighest( X [], X);

template <class D>
D getLowest( D [], D);

template <class A>
A getAverage(A [], A);

int main(){

	const int ARRAY_SIZE = 12;
	int numbers[ARRAY_SIZE];
	int count = 0;

	string filename; 
	ifstream inputFile; 

//	cout << "Entre el nombre del archivo: ";
//	cin >> filename;

	inputFile.open("number.txt");

	if (inputFile)
	{
		while (count < ARRAY_SIZE && inputFile >> numbers[count])
		{
			count++;
		}

		inputFile.close();
	}
	else
	{
		cout << "Error al abrir el archivo.\n\n";
	}

	cout << "\nInformacion del archivo: " << endl << endl;

	cout << "El archivo contiene " << count << " elementos." << "\n\n";

	cout << "Los numeros son: ";

	for (int index = 0; index < count; index++)
	{
		cout << numbers[index] << " ";
	}
    cout << "\n\n";

	cout << "El Promedio de los numeros es: " << getAverage(numbers, ARRAY_SIZE) << "\n\n";

	cout << "El mayor de los numeros es: " <<  getHighest(numbers, ARRAY_SIZE) << "\n\n";

	cout << "El menor de los numeros es: " << getLowest(numbers, ARRAY_SIZE) << "\n\n";

	system("pause");
	return 0;
}

template <class X>
X getHighest( X numbers[], X ARRAY_SIZE){
	int count_Highest;
	int highest;
	
	highest = numbers[0];
	for (count_Highest = 1; count_Highest < ARRAY_SIZE; count_Highest++)
	{
		if (numbers[count_Highest] > highest)
		{
			highest = numbers[count_Highest];
		}
	}
	
	return (highest);
}

template <class D>
D getLowest( D numbers[], D ARRAY_SIZE){
	int count_Lowest;
	int lowest;

	lowest = numbers[0];
	for (count_Lowest = 1; count_Lowest < ARRAY_SIZE; count_Lowest++)
	{
		if (numbers[count_Lowest] < lowest)
		{
			lowest = numbers[count_Lowest];
		}
	}
	
	return (lowest);
}

template <class A>
A getAverage(A numbers[], A ARRAY_SIZE){
	double total = 0;

	for (int count_Average = 0; count_Average < ARRAY_SIZE; count_Average++)
	{
		total += numbers[count_Average];
	}
	
	return (total / ARRAY_SIZE);
}

