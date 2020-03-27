#include "Empleado.h"

Empleado::Empleado():condigoEmpleado(-1),nombreEmpleado(""),salario(-1),activo(NULL),sig(nullptr),ant(nullptr)
{}

Empleado::Empleado(int _codigo, string _nombre, float _salario, bool _activo , Empleado* _sig,  Empleado* _ant) {
	setCodigo(_codigo);
	setNombre(_nombre);
	setSalario(_salario);
	setActivo(_activo);
	setSig(_sig);
	setAnt(_ant);
}
void Empleado::setCodigo(int _codigo) {
	this->condigoEmpleado = _codigo;
}

void Empleado::setNombre(string _nombre) {
	this->nombreEmpleado = _nombre;
}

void Empleado::setSalario(float _salario) {
	this->salario = _salario;
}

void Empleado::setActivo(bool _activo) {
	this->activo = _activo;
}

void Empleado::setSig(Empleado* _sig) {
	this->sig = _sig;
}

void Empleado::setAnt(Empleado* _ant) {
	this->ant = _ant;
}

int Empleado::getCodigo() {
	return this->condigoEmpleado;
}

string Empleado::getNombre() {
	return this->nombreEmpleado;
}

float Empleado::getSalario() {
	return this->salario;
}

bool Empleado::getActivo() {
	return this->activo;
}

Empleado* Empleado::getSig() {
	return this->sig;
}

Empleado* Empleado::getAnt() {
	return this->ant;
}

void Empleado::imprimirEmpleado() {
	cout << "Empleado { codigo:"<< this->getCodigo()<<" , nombre: "<< 
		this->getNombre() <<" , salario: "<<  this->getSalario() << " }";
	cout << endl;

}


