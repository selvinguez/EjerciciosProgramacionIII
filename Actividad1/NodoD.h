
#pragma once

#ifndef NODO_H
#define NODO_H

class NodoD
{
private:
	int valor;
	NodoD* siguiente;
	NodoD* anterior;

public:
	NodoD();
	NodoD(int, NodoD*, NodoD*);


	void setValor(int);
	void setSiguiente(NodoD*);
	void setAnterior(NodoD*);

	int getValor();
	NodoD* getSiguiente();
	NodoD* getAnterior();


};

#endif