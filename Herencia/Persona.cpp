
#include "Persona.h"

#include<iostream>
using namespace std;

Persona::Persona(string _nombre,int _edad,char _genero,string _estado_civil):
	nombre(_nombre),edad(_edad),genero(_genero),estado_civil(_estado_civil)
{
	cout << ".. se construyo persona..\n";
}

Persona::~Persona() {
	cout << ".. se destruya Persona..";
}

void Persona::setNombre(string _nombre) {
	this->nombre = _nombre;
}

void Persona::setEdad(int _edad) {
	this->edad = _edad;
}

void Persona::setGenero(char _genero) {
	this->genero = _genero;
}
void Persona::setEstadoCivil(string _Estado) {
	this->estado_civil = _Estado;
}

string Persona::getNombre() {
	return this->nombre;
}

string Persona::getEstadoCivil() {
	return this->estado_civil;
}

int Persona::getEdad() {
	return this->edad;
}

char Persona::getGenero() {
	return this->genero;
}

void Persona::imprimirPersona() {
	cout << "Persona{ nombre: " << getNombre() << ", edad: " << getEdad() << ", genero: " << getGenero()<<
		"estadoCivil: "<<getEstadoCivil()<<"}\n";

}