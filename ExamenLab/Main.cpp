#include "Polinomio.h"
#include <iostream>
#include <conio.h>
using namespace std;
int main() {
	Polinomio a;
	Polinomio b;
	a.ingresarTerminos();
	b.ingresarTerminos();

	cout << "Primer Polinomio: " << a;
	cout << "\nSegundo Polinomio: " << b;

	Polinomio c;
	c = a + b;
	cout << "\nLa suma: " << c;
	c = a - b;
	cout << "\nLa Resta: " << c;
	c = a * b;
	cout << "\nLa Multi: " << c;

	_getch();
}
