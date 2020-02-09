# include "String.h"
#include <iostream> 
using std::cout;

String::String()
{}

String::String(string _strin)
{

	setstrin(_strin);

}

void String::setstrin(string _strin) {
	this->strin = _strin;
}

string String::getstrin() {
	return this->strin;
}

void String::imprimir()
{
	cout << "String: " << getstrin() << "}\n";
}

TipoObjeto	String::getTipo() {

	return TipoObjeto::Tstring;
}