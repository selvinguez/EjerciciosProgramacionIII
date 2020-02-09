
#include "Char.h"
#include "Integer.h"
#include "String.h"
#include <conio.h>
#include <iostream>
using std::cout;

void imprimir(Object*);

int main()
{
	int contain=0, contcha=0, contstrin=0;
	int numero,numero2;
	char letra ;
	string letras;
	//arreglo de apuntadores
		Object* figuras[4];
		cout << "Ingrese numero: ";
		cin >>  numero;
		contain++;
	figuras[0] = new Integer(numero);
	cout << "Ingrese char: ";
	cin >> letra;
	contcha++;
	figuras[1] = new Char(letra);
	cout << "Ingrese Una cadena de texto: ";
	cin >> letras;
	contstrin++;
	figuras[2] = new String( letras);
	cout << "Ingrese numero: ";
	cin >> numero2;
	contain++;
	figuras[3] = new Integer(numero2);

	for (int i = 0;i < 4;i++)
	{
		imprimir(figuras[i]);
	}
	cout << "Cantidad de int:" << contain<<"\n";
	cout << "Cantidad de char:" << contcha<<"\n";
	cout << "Cantidad de string:" << contstrin<<"\n ";

	_getch();
}

void imprimir(Object* figura)
{
	figura->imprimir();

}
