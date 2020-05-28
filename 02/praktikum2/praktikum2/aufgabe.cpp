#include <iostream>
using namespace std;

int main() {
	char buchstabe = ' ';
	int zahl_buchstabe = 0;
	
	cout << "Bitte geben sie den Buchstaben ein: ? ";
	cin >> buchstabe;

	zahl_buchstabe = int(buchstabe);

	int berechnung = zahl_buchstabe - int('a') + 1;

	cout << "Der Buchstabe " << buchstabe << " hat die Position " << berechnung << " im Alphabet." << endl;
	system("pause");
	return 0;

}