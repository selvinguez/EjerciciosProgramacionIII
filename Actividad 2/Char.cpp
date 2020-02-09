#include "Char.h"
#include <iostream> 
using std::cout;

Char::Char()
{

}

Char::Char( char _char)
{
	setchar(_char);

}

void Char::setchar(char _char) {
	this->cha = _char;
}

char Char::getchar() {
	return this->cha;
}

void Char::imprimir()
{
	cout << "Char: " << getchar()<< "}\n";
}

TipoObjeto	Char::getTipo() {

	return TipoObjeto::Tchar;

}