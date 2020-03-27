#pragma once
#ifndef LISTA_EMPLEADO_H
#define LISTA_EMPLEADO_H
#include "Empleado.h"
#include <fstream>

struct archivoTabla {
	int codigo;
	string nombre;
	float salario;
};


class ListaEmpleado {
private:
	Empleado* primero;
	Empleado* ultimo;
	fstream archivo;
public:
	ListaEmpleado();
	void agregarEmpleado(int, string , float);
	void imprimirLista();
	//void EliminarEmpleado(int );
	void desactivarEmpleado(int);
	void guardarEmpleado();



};
#endif