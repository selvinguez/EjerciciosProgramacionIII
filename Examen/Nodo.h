#pragma once


#ifndef NODO_H
#define NODO_H

class Nodo
{
private:
	int Codigo;
	char* Nombre;
	Nodo* sig;
	Nodo* ant;

public:
	Nodo();
	Nodo(int, const char* , Nodo*,Nodo*);

	void setsig(Nodo*);
	void setAnt(Nodo*);


	Nodo* getsig();
	Nodo* getant();
	
	int getcodigo();
	char* getNombre();



};

#endif