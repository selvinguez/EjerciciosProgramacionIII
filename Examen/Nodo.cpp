#include "Nodo.h"

#include <iostream>

using namespace std;

Nodo::Nodo():Codigo(0),Nombre(nullptr),sig(nullptr),ant(nullptr)
{

}

Nodo::Nodo(int _codigo, const char* _nombre, Nodo*_sig, Nodo* _ant){

	Nombre = new char[strlen(_nombre)];
	Codigo = _codigo;
	strcpy_s(Nombre, strlen(_nombre) + 1, _nombre);
	setsig(_sig);
	setAnt(_ant);

}

void Nodo::setsig(Nodo* _sig)
{
	this->sig = _sig;
}

void Nodo::setAnt(Nodo* _ant)
{
	this->ant = _ant;
}

Nodo* Nodo::getsig()
{
	return this->sig;
}

Nodo* Nodo::getant()
{
	return this->ant;
}

int Nodo::getcodigo() {
	return this->Codigo;
}
char* Nodo::getNombre()
{
	return this->Nombre;
}