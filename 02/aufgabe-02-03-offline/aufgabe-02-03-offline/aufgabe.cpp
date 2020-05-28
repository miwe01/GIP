#include <iostream>

using namespace std;

int main() {
	double gesamtzahl, kandidat1, kandidat2, kandidat3, kandidat1protz, kandidat2protz;

	gesamtzahl = kandidat1 = kandidat2 = kandidat3 = kandidat1protz = kandidat2protz = 0;

	cout << "Bitte geben Sie die Gesamtzahl der abgegebenen gueltigen Stimmen ein: ? ";
	cin >> gesamtzahl;
	cout << "Bitte geben Sie die Anzahl Stimmen des ersten Kandidaten ein: ? ";
	cin >> kandidat1;
	cout << "Bitte geben Sie die Anzahl Stimmen des zweiten Kandidaten ein: ? ";
	cin >> kandidat2;

	kandidat3 = gesamtzahl - kandidat1 - kandidat2;

	cout << "Auf den dritten Kandidaten sind somit " << kandidat3 << " Stimmen entfallen." << endl;

	kandidat1protz = (kandidat1 / gesamtzahl) * 100;
	kandidat2protz = (kandidat2 / gesamtzahl) * 100;

	kandidat3 = ((gesamtzahl - kandidat1 - kandidat2) / gesamtzahl) * 100;

	cout << "Kandidat 1 erhielt " << kandidat1protz << "% der Stimmen." << endl;
	cout << "Kandidat 2 erhielt " << kandidat2protz <<  "% der Stimmen." << endl;
	cout << "Kandidat 3 erhielt " << kandidat3 << "% der Stimmen." << endl;



	system("pause");
	return 0;
}