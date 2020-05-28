#include <iostream>
using namespace std;

int main() {
	int stunden, minuten, sekunden, uhr1, uhr2, mitternacht;
	stunden = minuten = sekunden = uhr1 = uhr2 = mitternacht = 0;

	// Uhr1

	cout << "Bitte geben Sie die Stundenzahl der ersten Uhrzeit ein: ? ";
	cin >> stunden;
	cout << "Bitte geben Sie die Minutenzahl der ersten Uhrzeit ein: ? ";
	cin >> minuten;
	cout << "Bitte geben Sie die Sekundenzahl der ersten Uhrzeit ein: ? ";
	cin >> sekunden;

	uhr1 = stunden * 60 * 60 + minuten * 60 + sekunden;

	cout << stunden  << ":" << minuten << " Uhr und " << sekunden <<  " Sekunden sind in Sekunden seit Mitternacht: " << uhr1 << endl << endl;

	// Uhr2

	cout << "Bitte geben Sie die Stundenzahl der zweiten Uhrzeit ein: ? ";
	cin >> stunden;
	cout << "Bitte geben Sie die Minutenzahl der zweiten Uhrzeit ein: ? ";
	cin >> minuten;
	cout << "Bitte geben Sie die Sekundenzahl der zweiten Uhrzeit ein: ? ";
	cin >> sekunden;

	uhr2 = stunden * 60 * 60 + minuten * 60 + sekunden;

	cout << stunden << ":" << minuten << " Uhr und " << sekunden << " Sekunden sind in Sekunden seit Mitternacht: " << uhr2 << endl << endl;

	// Zeitdifferenz

	sekunden = (uhr2 - uhr1) % 60;
	minuten = ((uhr2 - uhr1) / 60) % 60;
	stunden = ((uhr2 - uhr1) / 3600);

	cout << "Die Differenz zwischen den beiden Uhrzeiten betraegt:" << endl;
	cout << stunden << " Stunden, " << minuten << " Minuten und "<< sekunden << " Sekunden."<<endl;

	system("pause");
	return 0;
}