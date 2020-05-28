#include <iostream>

using namespace std;

int main() {
	double euro_in_dollar = 0;

	cout << "Bitte geben Sie die Geldmenge in Euro ein: ? ";
	cin >> euro_in_dollar;

	euro_in_dollar *= 1.2957;

	cout << "Die Geldmenge in US Dollar lautet: " << euro_in_dollar <<endl;

	system("pause");
	return 0;
}