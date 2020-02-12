#pragma once

#ifndef NUMERO_H
#define NUMERO_H

#include <iostream>

class Numero {
	friend std::ostream& operator<<(std::ostream&, const Numero&);
	friend std::istream& operator>>(std::istream&, Numero&);
	friend Numero& operator+(const Numero&, const Numero&);
	friend Numero& operator+(const Numero&, const int&);
	friend Numero& operator-(const Numero&, const Numero&);
	friend Numero& operator/(const Numero&, const Numero&);
	friend Numero& operator*(const Numero&, const Numero&);
	friend Numero& operator%(const Numero&, const Numero&);
private:
	unsigned int valor;
public:
	Numero();
	Numero(int);
	Numero& operator++();//preincremento
	Numero& operator++(int);//posincremento

};

#endif