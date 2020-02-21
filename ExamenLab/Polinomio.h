#pragma once

#ifndef POLINOMIO_H
#define POLINOMIO_H
#include <iostream>
#define LIMITE 30;

class Polinomio {
	
	friend std::ostream& operator<<(std::ostream&, const Polinomio&);
	friend Polinomio& operator +(const Polinomio&, const Polinomio&);
	friend Polinomio& operator -(const Polinomio&, const Polinomio&);
	friend Polinomio& operator *(const Polinomio&, const Polinomio&);

private: 
	int Coeficiente[30];
	int exponentes[30];
	int cantiTerminos;
public:
	Polinomio();
	~Polinomio();
	void ingresarTerminos();
	void ordenar_Poli();

	
};

#endif 
