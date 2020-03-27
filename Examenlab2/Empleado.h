#pragma once
#ifndef EMPLEADO_H
#define EMPLEADO_H
#include <string>
#include <iostream>
using namespace std;
class Empleado {
private:
	int condigoEmpleado;
	string nombreEmpleado;
	float salario;
	bool activo;
	Empleado* sig;
	Empleado* ant;
public:
	Empleado();
	Empleado(int, string, float, bool, Empleado*, Empleado*);

	void setCodigo(int);
	void setNombre(string);
	void setSalario(float);
	void setActivo(bool);
	void setSig(Empleado*);
	void setAnt(Empleado*);
	void imprimirEmpleado();

	int getCodigo();
	string getNombre();
	float getSalario();
	bool getActivo();
	Empleado* getSig();
	Empleado* getAnt();

};

#endif