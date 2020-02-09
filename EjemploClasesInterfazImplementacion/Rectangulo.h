#pragma once

#ifndef RECTANGULO_H
#define RECTANGULO_H
class Rectangulo {
private:
	int base, altura;

public: 
	Rectangulo(void);
	Rectangulo(int, int);

	void setBase(int);
	void setAltura(int);

	int getBase(void);
	int getAltura(void);

	int getArea(void);
	int getPerimetro(void);





};

#endif
