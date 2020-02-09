# include "Integer.h"
#include <iostream> 
using std::cout;

Integer::Integer()
{}

Integer::Integer(int _int)
{
	setint(_int);
	
}

void Integer::setint(int _int) {
	if (_int > 0) {
		this->integer = _int;
	}
	else
		cout << "Error de ingreso de int\n";

}



int Integer::getint() {
	return this->integer;
}





void Integer::imprimir()
{
	cout << "int: " << getint() <<"}\n";
}

TipoObjeto	Integer::getTipo() {

	return TipoObjeto::Tinteger;
}