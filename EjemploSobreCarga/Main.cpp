
#include <iostream>
#include "Numero.h"
#include <conio.h>

using std::cout;
using std::cin;

int main() {
	Numero a(10);
	Numero b(3);
	Numero c;
	Numero d;
	Numero e;
	Numero f;
	Numero g;

	/*cout << "Valor de a: " << a;
	cin >> a;
	cout << "Valor de a: " << a;*/
	
	c = a + b;
	d = a - b;
	e = a / b;
	f = a * b;
	g = a % b;
	Numero h;
	h = c++;
	cout << "\nc++: " << h;
	Numero i;
	i = ++c;
	cout << "\n++c: " << i;

	cout << "\na: " << a << "\nb: " << b;
	cout << "\nEl resultado de la Suma es: " << c;
	cout << "\nEl resultado de la Resta es: " << d;
	cout << "\nEl resultado de la Division es: " << e;
	cout << "\nEl resultado de la Multiplicacion es: " << f;
	cout << "\nEl resultado del Residuo es: " << g;
	_getch();

}