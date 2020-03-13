#include "NodoArbol.h"

#include <iostream>

using namespace std;

NodoArbol::NodoArbol() : nombre(nullptr), hijoIzquierdo(nullptr), hijoDerecho(nullptr)
{}

NodoArbol::NodoArbol(const char* _nombre,
	NodoArbol* _hIzquierdo,
	NodoArbol* _hDerecho)
{
	nombre = new char[strlen(_nombre)];
	strcpy_s(nombre, strlen(_nombre) + 1, _nombre);

	setHijoIzquierdo(_hIzquierdo);
	setHijoDerecho(_hDerecho);
}

void NodoArbol::setHijoIzquierdo(NodoArbol* hIzq)
{
	this->hijoIzquierdo = hIzq;
}

void NodoArbol::setHijoDerecho(NodoArbol* hDer)
{
	this->hijoDerecho = hDer;
}

NodoArbol* NodoArbol::getHijoIzquierdo()
{
	return this->hijoIzquierdo;
}

NodoArbol* NodoArbol::getHijoDerecho()
{
	return this->hijoDerecho;
}

char* NodoArbol::getNombre()
{
	return this->nombre;
}