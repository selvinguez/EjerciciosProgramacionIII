#pragma once

#ifndef NODOARBOL_H
#define NODOARBOL_H

class NodoArbol
{
private:
	char* nombre;
	NodoArbol* hijoDerecho;
	NodoArbol* hijoIzquierdo;

public:
	NodoArbol();
	NodoArbol(const char*, NodoArbol*, NodoArbol*);

	void setHijoDerecho(NodoArbol*);
	void setHijoIzquierdo(NodoArbol*);

	NodoArbol* getHijoDerecho();
	NodoArbol* getHijoIzquierdo();
	char* getNombre();
};

#endif