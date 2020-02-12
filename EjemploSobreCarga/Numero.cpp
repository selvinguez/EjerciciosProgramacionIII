#include "Numero.h"
#include <iostream>

Numero::Numero() : valor(0)
{}

Numero::Numero(int _numero) : valor(_numero) 
{}

std::ostream& operator<<(std::ostream& out, const Numero& n)
{
	out << n.valor;
	return out;
}

std::istream& operator>>(std::istream& in, Numero& n) {
	in >> n.valor;
	return in;

}

Numero& operator+(const Numero&a, const Numero& b){
	Numero suma;
	suma.valor = a.valor + b.valor ;
	return suma;
}

Numero& operator +(const Numero& a, const int& b) {
	Numero suma;
	suma.valor = a.valor + b;
	return suma;

}

Numero& operator-(const Numero& a, const Numero& b) {
	Numero Resta;
	Resta.valor = a.valor - b.valor ;
	return Resta;
}

Numero& operator/(const Numero& a, const Numero& b) {
	Numero Divi;
	Divi.valor = a.valor /b.valor;
	return Divi;
}

Numero& operator*(const Numero& a, const Numero& b) {
	Numero Multi;
	Multi.valor = a.valor * b.valor;
	return Multi;
}
Numero& operator%(const Numero& a, const Numero& b) {
	Numero Resi;
	Resi.valor = a.valor % b.valor;
	return Resi;
}

Numero& Numero::operator++() { //preincremento
	this->valor = this->valor + 1;
	return *this;
}

Numero& Numero::operator++(int) {//postincremento
	Numero resultado = *this;
	this->valor = this->valor + 1;
	return resultado;
}





