#pragma once
#ifndef LISTADOBLE_H
#define LISTADOBLE_H

#include "NodoD.h"

class listaDoble
{
private:
	NodoD* primero;
	NodoD* ultimo;

public:
	listaDoble();

	void agregar(int);
	void Seleccion();
	void eliminar(int);

	bool estaVacia();

	void imprimir();
	void imprimirRecursiva(NodoD*);
};



#endif // !LISTADOBLE_H