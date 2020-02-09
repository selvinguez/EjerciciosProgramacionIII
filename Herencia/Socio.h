#pragma once



#ifndef SOCIO_H
#define SOCIO_H
#include "Persona.h"
class Socio : public Persona
{
private:
	int acciones;
public:
	Socio(string, int, char, string, int);
	~Socio();

	void setAcciones(int);
	int getAcciones(void);


};

#endif 
