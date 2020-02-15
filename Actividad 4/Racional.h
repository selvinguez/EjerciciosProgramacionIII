#pragma once

#ifndef RACIONAL_H
#define RACIONAL_H

#include <iostream>

class Racional {
	friend std::ostream& operator<<(std::ostream&, const Racional&);
	friend std::istream& operator>>(std::istream&, Racional&);
	friend Racional& operator+(const Racional&, const Racional&);
	friend Racional& operator-(const Racional&, const Racional&);
	friend Racional& operator/(const Racional&, const Racional&);
	friend Racional& operator*(const Racional&, const Racional&);
	friend Racional& operator%(const Racional&, const Racional&);
private:
	 double numerador;
	 double denominador;
	
public:
	Racional();
	Racional(double,double);
	Racional& operator++();//preincremento
	Racional& operator++(int);//posincremento
	 double valor;
};

#endif
