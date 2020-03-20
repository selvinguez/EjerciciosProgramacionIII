#include "Materia.h"
#include <iostream>

using namespace std;

Materia::Materia() {
	MateriaBinario.open("materias.dat", ios::in | ios::out | ios::app | ios::binary);

	if (!MateriaBinario)
		cout << "Error en aertura en archivo de alumnos";

	MateriaBinario.close();

}

void Materia::ingresarMateria() {
	MateriaBinario.open("materias.dat", ios::in | ios::out | ios::app | ios::binary);

	MateriaRegistro nuevaMateria;

	cout << "Ingrese codigo de materia: ";
	cin >> nuevaMateria.codigoMateria;

	cout << "Ingrese nombre de materia: ";
	cin >> nuevaMateria.nombre;
	cout << "Ingrese uv: ";
	cin >>nuevaMateria.uv ;

	MateriaBinario.seekp(0, ios::end);// coloca el cursor de ESCRITURA en un byte especifico
	MateriaBinario.write(reinterpret_cast<const char*>(&nuevaMateria), sizeof(MateriaRegistro));

	MateriaBinario.close();

	cout << "Materia agregadA\n";

}

void Materia::imprimirMateria() {
	MateriaBinario.open("materias.dat", ios::in | ios::binary);

	MateriaRegistro Lectura;
	//colaca el cursor de LECTURA en un byte indicado
	MateriaBinario.seekg(0, ios::beg);

	MateriaBinario.read(reinterpret_cast<char*>(&Lectura), sizeof(MateriaRegistro));

	while (!MateriaBinario.eof())
	{
		cout << "Materia { Codigo: " << Lectura.codigoMateria << ", nombre : "
			<< Lectura.nombre << ", Uv: " << Lectura.uv << " }\n";
		MateriaBinario.read(reinterpret_cast<char*>(&Lectura), sizeof(MateriaRegistro));
	}
	MateriaBinario.close();
}


