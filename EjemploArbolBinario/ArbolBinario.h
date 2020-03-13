#pragma once

#ifndef ARBOLBIN_H
#define ARBOLBIN_H

#include "NodoArbol.h"

class ArbolBinario
{
private:
	NodoArbol* raiz;
	NodoArbol* agregarNodoRec(NodoArbol*, const char*);
	void imprimirRec(NodoArbol*);
public:
	ArbolBinario();

	void agregarNodoArbol(const char*);

	void imprimir();


};

#endif