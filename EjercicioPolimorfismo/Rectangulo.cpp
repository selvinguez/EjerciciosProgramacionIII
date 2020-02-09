# include "Rectangulo.h"
#include <iostream> 
using std::cout;

Rectangulo::Rectangulo() :base(0), altura(0) 
{}

Rectangulo::Rectangulo(int _base, int _altura)
{
	setBase(_base);
	setAltura(_altura);
}

void Rectangulo::setBase(int _base) {
	if (_base > 0) {
		this->base = _base;
	}
	else
		cout << "Error de ingreso de Base\n";

}

void Rectangulo::setAltura(int _altura) {
	if (_altura > 0)
		this->altura = _altura;
	else
		cout << "Error de ingreso de altura\n";
}

int Rectangulo::getBase() {
	return this->base;
}

int Rectangulo::getAltura() {
	return this->altura;
}

float Rectangulo::getArea() {
	return base * altura;
}
float Rectangulo::getPerimetro() {
	return 2 * (base + altura);
}

void Rectangulo::imprimirFigura()
{
	cout << "Rectangulo {Base: " << getBase() << ",altura: " << getAltura() << "}\n";
}

TipoFigura Rectangulo::getTipo() {

	return TipoFigura::TRectangulo;
}


