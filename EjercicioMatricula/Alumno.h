#pragma once

#include <fstream>

#ifndef ALUMNO_H
#define ALUMNO_H

using namespace std;
struct alumnoRegistro
{
	char numeroCuenta[9];
	char nombre[25];
	float promedio;
};

class alumno
{
private:
	fstream alumnosBinario;

public:
	alumno();
	void ingresarAlumno();
	void consultarAlumno();
	bool buscarAlumno(char[]);
	void imprimirAlumnis();

	int obtenerCantidadAlumnos();
};

#endif // !ALUMNO_H