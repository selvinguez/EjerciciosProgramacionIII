#pragma once

#ifndef LISTADOBLE_H
#define LISTADOBLE_H
#include "Nodoh.h"

class ListaDobleCircular {
private:
	Nodo* primero;
	Nodo* ultimo;
public:
	ListaDobleCircular();
	bool estaVacia();
	void agregarElemento(int );
	void insertarElemento(int ,int);

	int getSize();
	void eliminarElemento(int);

	void imprimir();
	void imprimirReversa();


};
#endif // !LISTADOBLE_H

