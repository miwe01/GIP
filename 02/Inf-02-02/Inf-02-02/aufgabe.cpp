#include <iostream>

using namespace std;

int main() {
	double fahrenheit_in_celsius = 0;
	
	cout << "Bitte geben sie die Temperatur in Grad celsius ein: ? ";
	cin >> fahrenheit_in_celsius;
	
	fahrenheit_in_celsius = fahrenheit_in_celsius * 1.8 + 32;

	cout << "Die Temperatur in Fahrenheit lautet " << fahrenheit_in_celsius << endl;

	system("pause");
	return 0;
}