
#include "ArbolBinario.h"
#include <iostream>

using namespace std;

ArbolBinario::ArbolBinario(): raiz(nullptr)
{}

void ArbolBinario::agregarNodoArbol(const char* _nombre)
{

	raiz = agregarNodoRec(raiz, _nombre);

}

NodoArbol* ArbolBinario::agregarNodoRec(NodoArbol* _raiz, const char* _nombre)
{
	if (_raiz == nullptr)
		_raiz = new NodoArbol(_nombre, nullptr, nullptr);
	else
		if (strcmp(raiz->getNombre(), _nombre) < 0)
			_raiz->setHijoDerecho(agregarNodoRec(_raiz->getHijoDerecho(), _nombre));
		else if (strcmp(raiz->getNombre(), _nombre) > 0)
			_raiz->setHijoIzquierdo(agregarNodoRec(_raiz->getHijoIzquierdo(), _nombre));

	return _raiz;
}

void ArbolBinario::imprimir()
{
	imprimirRec(raiz);
}

void ArbolBinario::imprimirRec(NodoArbol* _raiz)
{
	if (_raiz == nullptr)
		return;

	//printf("[ %s ] ", _raiz->getNombre());
	cout << "[ " << _raiz->getNombre() << " ] ";
	imprimirRec(_raiz->getHijoIzquierdo());
	imprimirRec(_raiz->getHijoDerecho());

}