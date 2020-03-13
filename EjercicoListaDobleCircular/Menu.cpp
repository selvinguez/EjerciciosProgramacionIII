#include "ListaDobleCircular.h"
#include <conio.h>

int main() {
	ListaDobleCircular lista;

	lista.agregarElemento(3);
	lista.agregarElemento(2);
	lista.insertarElemento(0, 7);
	lista.insertarElemento(1, 4);
	lista.insertarElemento(3, 5);

	lista.imprimir();





	_getch();
}