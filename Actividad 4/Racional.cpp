#include "Racional.h"
#include <iostream>

Racional::Racional() :valor(0), numerador(0),denominador(0)
{}

Racional::Racional(double _numerador,double _denominador) :valor(_numerador/_denominador),numerador(_numerador),denominador(_denominador)
{  }

std::ostream& operator<<(std::ostream& out, const Racional& n)
{
	out << n.numerador<<"/"<<n.denominador;
	return out;
}

std::istream& operator>>(std::istream& in, Racional& n) {
	in >> n.valor;
	return in;

}

Racional& operator+(const Racional& a, const Racional& b) {
	Racional suma;
	suma.numerador = (a.numerador * b.denominador) + (b.numerador * a.denominador);
	suma.denominador = (a.denominador*b.denominador );
	suma.valor = suma.numerador / suma.denominador;
	return suma;
}



Racional& operator-(const Racional& a, const Racional& b) {
	Racional Resta;
	Resta.numerador = (a.numerador * b.denominador) - (b.numerador * a.denominador);
	Resta.denominador = a.denominador * b.denominador;
	Resta.valor = Resta.numerador/Resta.denominador;
	return Resta;
}

Racional& operator/(const Racional& a, const Racional& b) {
	Racional Divi;
	Divi.numerador = (a.numerador * b.denominador);
	Divi.denominador = (a.denominador * b.numerador);
	Divi.valor = Divi.numerador / Divi.denominador;
;
	return Divi;
}

Racional& operator*(const Racional& a, const Racional& b) {
	Racional Multi;
	Multi.valor = (a.numerador/b.denominador) * (b.numerador/a.denominador);
	return Multi;
}
Racional& operator%(const Racional& a, const Racional& b) {
	Racional Resi;
	Resi.valor = (a.valor) /( b.valor);
	return Resi;
}

Racional& Racional::operator++() { //preincremento
	this->valor = this->valor + 1;
	return *this;
}

Racional& Racional::operator++(int) {//postincremento
	Racional resultado = *this;
	this->valor = this->valor + 1;
	return resultado;
}




