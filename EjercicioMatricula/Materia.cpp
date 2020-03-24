#include "Materia.h"
#include <iostream>

materia::materia()
{
	materiabinario.open("materia.dat", ios::in | ios::out | ios::app | ios::binary);
	if (!materiabinario)
	{
		cout << "error de apeura";
	}
	materiabinario.close();
}

void materia::ingresarmaterias()
{
	materiabinario.open("materia.dat", ios::in | ios::out | ios::app | ios::binary);
	materiaarchivo nuevo;
	cout << "Ingrese numero de cuenta: ";
	cin >> nuevo.codigo;
	cout << "Ingrese el nombre de alumno: ";
	cin >> nuevo.nombre;
	cout << "Ingrese la cantidad de unidades valorativas: ";
	cin >> nuevo.uv;

	//posicion de escritura al final del archivo
	materiabinario.seekp(0, ios::end);
	materiabinario.write(reinterpret_cast<const char*>(&nuevo), sizeof(materiaarchivo));
	materiabinario.close();
	cout << "materia agregado";
}

void materia::imprimirmateria()
{
	materiabinario.open("materia.dat", ios::in | ios::binary);

	materiaarchivo lectura;

	//coloca el cursor de lectura en una byte indicado
	materiabinario.seekg(0, ios::beg);
	materiabinario.read(reinterpret_cast<char*>(&lectura), sizeof(materiaarchivo));
	while (!materiabinario.eof())
	{
		cout << "Alumno [ Codigo de materia " << lectura.codigo << "  nombre:" <<
			lectura.nombre << "   Unidades Valorativas: " << lectura.uv << " ]\n";
		materiabinario.read(reinterpret_cast<char*>(&lectura), sizeof(materiaarchivo));


	}
	materiabinario.close();
}

bool materia::buscarmateria(int codigo)
{
	materiabinario.open("materia.dat", ios::in | ios::binary);

	materiabinario.seekg(0, ios::beg);
	materiaarchivo lectura;

	materiabinario.read(reinterpret_cast<char*>(&lectura), sizeof(materiaarchivo));
	while (!materiabinario.eof())
	{
		if (lectura.codigo == codigo)
		{
			materiabinario.close();
			return true;
		}

		materiabinario.read(reinterpret_cast<char*>(&lectura), sizeof(materiaarchivo));

	}
	materiabinario.close();
	return false;
}


int materia::buscarUv(int codigo)
{
	materiabinario.open("materia.dat", ios::in | ios::binary);

	materiabinario.seekg(0, ios::beg);
	materiaarchivo lectura;

	materiabinario.read(reinterpret_cast<char*>(&lectura), sizeof(materiaarchivo));
	while (!materiabinario.eof())
	{
		if (lectura.codigo == codigo)
		{
			materiabinario.close();
			return lectura.uv;
		}

		materiabinario.read(reinterpret_cast<char*>(&lectura), sizeof(materiaarchivo));

	}
	materiabinario.close();
	return 0;
}

int materia::buscarUvTotal()
{
	materiabinario.open("materia.dat", ios::in | ios::binary);

	materiabinario.seekg(0, ios::beg);
	materiaarchivo lectura;
	int uvp = 0;

	materiabinario.read(reinterpret_cast<char*>(&lectura), sizeof(materiaarchivo));
	while (!materiabinario.eof())
	{
		uvp += lectura.uv;
		materiabinario.read(reinterpret_cast<char*>(&lectura), sizeof(materiaarchivo));

	}
	materiabinario.close();
	return uvp;
}











