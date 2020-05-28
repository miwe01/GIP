#include <iostream>

using namespace std;

int main() {
	double meter = 0;
	double fuss = 0;

	cout << "Bitte geben Sie die Laenge in Metern ein: ? ";
	cin >> meter;

	fuss = meter * 3.2808;

	cout << "Die Laenge in Fuss lautet: " << fuss << endl;

	system("pause");
	return 0;
}