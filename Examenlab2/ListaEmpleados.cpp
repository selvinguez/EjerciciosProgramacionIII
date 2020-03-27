#include "ListaEmpleados.h"

ListaEmpleado::ListaEmpleado():primero(nullptr),ultimo(nullptr)
{
}

void ListaEmpleado::agregarEmpleado(int _codi, string _nom, float _sal)
{
	Empleado* tmp = new Empleado (_codi  , _nom ,  _sal  , true , nullptr , nullptr);
	if (primero == nullptr)
	{
		primero = ultimo = tmp;
	}
	else
	{
		Empleado* tmp2 = primero;

		while (tmp2->getSig() != nullptr)
		{
			tmp2 = tmp2->getSig();

		}

		tmp2->setSig(tmp);
		tmp->setAnt(tmp2);
		ultimo = tmp;

	}
}

void ListaEmpleado::imprimirLista() {
	Empleado* tmp = primero;
	
	while (tmp != nullptr)
	{
		tmp->imprimirEmpleado();
		tmp = tmp->getSig();
	}

}
/*
void ListaEmpleado::EliminarEmpleado(int _cod) {
	
	Empleado* tmp = primero;
	while (tmp != nullptr)
	{
		if (tmp->getCodigo() == _cod) {
						
		}
		tmp = tmp->getSig();
	}
}*/

void ListaEmpleado::desactivarEmpleado(int _cod) {
	Empleado* tmp = primero;
	while (tmp != nullptr)
	{
		if (tmp->getCodigo() == _cod) {
			tmp->setActivo(false);
		}
		tmp = tmp->getSig();
	}

}

void ListaEmpleado::guardarEmpleado() {
	Empleado* tmp = primero;

	archivo.open("ListaEmpleados.dat", ios::app | ios::in | ios::out | ios::binary);

	archivoTabla ver2;

	while (tmp != nullptr) {
		if (tmp->getActivo() == true) {
			ver2.codigo = tmp->getCodigo();
			ver2.nombre = tmp->getNombre();
			ver2.salario = tmp->getSalario();
			archivo.seekp(0, ios::end);
			archivo.write(reinterpret_cast<const char*>(&ver2), sizeof(archivoTabla));
		}
		tmp = tmp->getSig();
	}

	archivo.close();
}
