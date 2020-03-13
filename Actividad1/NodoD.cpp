#include "NodoD.h"

NodoD::NodoD() : valor(-1), siguiente(nullptr), anterior((nullptr))
{}

NodoD::NodoD(int _valor, NodoD* _anterior, NodoD* _siguiente)
{
	setValor(_valor);
	setAnterior(_anterior);
	setSiguiente(_siguiente);
}

void NodoD::setValor(int _valor)
{
	this->valor = _valor;
}

void NodoD::setSiguiente(NodoD* _siguiente)
{
	this->siguiente = _siguiente;
}

int NodoD::getValor()
{
	return this->valor;
}

NodoD* NodoD::getSiguiente()
{
	return this->siguiente;
}

void NodoD::setAnterior(NodoD* _anterior)
{
	this->anterior = _anterior;
}

NodoD* NodoD::getAnterior()
{
	return this->anterior;
}
