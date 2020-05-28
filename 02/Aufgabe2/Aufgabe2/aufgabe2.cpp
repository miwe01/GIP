#include <iostream>
using namespace std;

int main() {
	double eingabe = 0;
	double umfang, flaeche;
	cout << "Bitte geben Sie die Seitenlaenge ein (in cm): ? ";
	cin >> eingabe;

	umfang = eingabe * 4;
	flaeche = eingabe * eingabe;

	cout << "Der Umfang des Quadrats betraegt (in cm): " << umfang << endl;
	cout << "Die Flaeche des Quadrats betraegt (in cm*cm): " << flaeche << endl;

	system("pause");
	return 0;
}