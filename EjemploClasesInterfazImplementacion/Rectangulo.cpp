
#include "Rectangulo.h"
#include <iostream>

using namespace std;
Rectangulo::Rectangulo(void):base(0), altura(0)
{
//base = altura = 0;
//codigo c++
}

Rectangulo::Rectangulo(int _base, int _altura) //:base(_base), altura(_altura)
{
	setBase(_base);
	setAltura(_altura);
}

void Rectangulo::setBase(int _base) {
	if (_base < 0) {
		cout << "Error en ingrese de base" << endl;
		return;
	}
	else {
		this-> base = _base;
	}
}

void Rectangulo::setAltura(int _altura) {
	if (_altura < 0) {
		cout << "Error en ingreso de altura" << endl;
		return;
	}
	else {
		this-> altura = _altura;
	}
}

int Rectangulo::getBase(void) {
	return this->base;
}

int Rectangulo::getAltura() {
	return this->altura;
}

int Rectangulo::getArea() {
	return base * altura;
}

int Rectangulo::getPerimetro() {
	return 2 * (base + altura);
}
