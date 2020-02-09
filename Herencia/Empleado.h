#pragma once

#ifndef EMPLEADO_H
#define EMPLEADO_H

#include "Persona.h"

class Empleado : public Persona {
private:
	int codigo;
	float salario;
	string puesto;
	
public:
	Empleado(string,int,char,string,int,float,string);
	~Empleado(void);

	void setCodigo(int);
	void setSalario(float);
	void setPuesto(string);

	int getCodigo(void);
	float getSalario(void);
	string getPuesto(void);


};

#endif