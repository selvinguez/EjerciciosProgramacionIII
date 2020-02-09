#pragma once


#ifndef RECTANGULO_H
#define RECTANGULO_H

#include "Figura2D.h"

class Rectangulo:public Figura2D
{
private:
	int base, altura;
public: 
	Rectangulo();
	Rectangulo(int, int);

	void setBase(int);
	void setAltura(int);

	int getBase(void);
	int getAltura(void);

	float getArea();
	float getPerimetro();
	void imprimirFigura();
	TipoFigura getTipo();


};



#endif  
