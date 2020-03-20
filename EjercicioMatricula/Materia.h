#pragma once
#include <fstream>

#ifndef MATERIA_H
#define MATERIA_H

using namespace std;
struct MateriaRegistro
{
	int codigoMateria;
	char nombre[20];
	int uv;
};

class Materia
{
private:
	fstream MateriaBinario;

public:
	Materia();
	void ingresarMateria();
	void consultarMateria();
	bool buscarMateria();
	void imprimirMateria();
};

#endif // !ALUMNO_H