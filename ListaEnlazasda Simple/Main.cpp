#include "ListaEnlazadaSimple.h"
#include <conio.h>
#include<iostream>
using namespace std;
int main() {

	ListaEnlazada lista;

	lista.agregarElemento(4);
	lista.agregarElemento(8);
	lista.agregarElemento(9);
	lista.agregarElemento(5);

	lista.imprimir();

	lista.eliminar(8);
	lista.eliminar(9);
	cout << "\n";
	lista.imprimir();
	_getch();
}