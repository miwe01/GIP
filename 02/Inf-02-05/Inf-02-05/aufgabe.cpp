#include <iostream>

using namespace std;

int main() {
	double eingabe, rechnung, formel1, formel2, formel3;
	eingabe = rechnung = formel1 = formel2 = formel3 = 0;

	double auswahl = 0;

	cout << "Ihre Eingabe: ? ";

	cin >> eingabe;

	cout << endl << "Ihre Auswahl der Umwandlung:" << endl;
	cout << "1 - Celsius in Fahrenheit" << endl;
	cout << "2 - Meter in Fuss" << endl;
	cout << "3 - Euro in US Dollar" << endl;

	cin >> auswahl;

	formel1 = (eingabe * 1.8 + 32) * ((2 - auswahl) * (3 - auswahl) * 2);
	formel2 = (eingabe * 3.2808) * ((1 - auswahl) * (3 - auswahl) / (-1));
	formel3 = (eingabe * 1.2957) * ((1 - auswahl) * (2 - auswahl) / 2);

	rechnung = formel1 + formel2 + formel3;

	cout << "Das Ergebnis lautet: " << rechnung << endl;

	system("pause");
	return 0;
}
