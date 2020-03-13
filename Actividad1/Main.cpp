#include <iostream>
#include "ListaDoble.h"
#include <conio.h>

using namespace std;

int main()
{
	listaDoble Lb;
	Lb.agregar(20);
	Lb.agregar(28);
	Lb.agregar(3);
	Lb.agregar(25);

	Lb.Seleccion();
	Lb.eliminar(25);



	Lb.imprimir();

	_getch();
};