
#include <iostream>
#include "EnteroGrande.h"
#include <conio.h>

using std::cout;
using std::cin;

int main()
{
	EnteroGrande n1;

	cout << "\nIngrese un numero: ";
	cin >> n1;
	cout << "\nEl numero ingresado es: " << n1;

	EnteroGrande n2;

	cout << "\nIngrese un numero: ";
	cin >> n2;
	cout << "\nEl numero ingresado es: " << n2;
	

	cout << "\nLa suma es ";
	cout << n1 + n2;

	_getch();
}