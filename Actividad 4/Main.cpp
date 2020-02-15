
#include <iostream>
#include "Racional.h"
#include <conio.h>

using std::cout;
using std::cin;

int main() {
	Racional a(10,5);
	Racional b(8,4);
	Racional c;
	Racional d;
	Racional e;
	Racional f;
	Racional g;

	/*cout << "Valor de a: " << a;
	cin >> a;
	cout << "Valor de a: " << a;*/

	c = a + b;
	d = a - b;
	e = a / b;
	f = a * b;
	g = a % b;
	Racional h;
	//h = c++;
	//cout << "\nc++: " << h;
	Racional i;
	//i = ++c;
	//cout << "\n++c: " << i;

	cout << "\na: " << a << "\nb: " << b;
	cout << "\nEl resultado de la Suma es: " << c.valor;
	cout << "\nEl resultado de la Resta es: " << d.valor;
	cout << "\nEl resultado de la Division es: " << e.valor;
	cout << "\nEl resultado de la Multiplicacion es: " << f.valor;
	cout << "\nEl resultado del Residuo es: " << g.valor;
	_getch();

}