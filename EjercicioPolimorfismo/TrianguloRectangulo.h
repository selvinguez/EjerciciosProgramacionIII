#pragma once
#ifndef TRI_RECTANGULO_H
#define TRI_RECTANGULO_H

#include "Figura2D.h"
class TrianguloRectangulo : public Figura2D 
{
private: 
	int base, altura;
	float hipotenusa;

public:
	
	TrianguloRectangulo();
	TrianguloRectangulo(int, int);

	void setBase(int);
	void setAltura(int);

	int getBase();
	int getAltura();
	float getHipotenusa();

	float getArea();
	float getPerimetro();


	void imprimirFigura();
	TipoFigura getTipo();

};

#endif 
