#include "ArbolBinario.h"
#include <conio.h>

int main()
{

	ArbolBinario btree;

	btree.agregarNodoArbol("Julio");
	btree.agregarNodoArbol("Mario");
	btree.agregarNodoArbol("Fernando");
	btree.agregarNodoArbol("Gerardo");
	btree.agregarNodoArbol("Angel");

	btree.imprimir();

	_getch();

}