#include "SOCIO.H"
#include <iostream>
using std::cout;
 Socio::Socio(string _nombre, int _edad, char _genero, string _estadoCivil, int _acciones)
	:Persona(_nombre
	,_edad,_genero,_estadoCivil)
{
 
 }

 Socio::~Socio() {
     cout << "...se destruyo socio";
 
 }
 void Socio::setAcciones(int _Acciones) {
     this->acciones = _Acciones;
 }

 int Socio::getAcciones(void) {
     return this->acciones;

 }