#include <iostream>
using namespace std;

template <typename T>
T add(T p1, T p2)
{
	T summe = 0;
	summe = p1 + p2;
	return summe;
}
template
double add<double>(double p1, double p2);

int main() 
{
	
	cout << add<int>(10, 50) << endl;
	system("pause");
	return 0;
}
