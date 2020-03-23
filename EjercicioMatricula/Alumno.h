#pragma once
#include <fstream>
#include <iostream>
using namespace std;

#ifndef ALUMNO_H
#define ALUMNO_H

using namespace std;
struct alumnoRegistro
{
	char numeroCuenta[9];
	char nombre[25];
	float promedio;
};

class Alumno
{
private:
	fstream alumnosBinario;
	fstream tmp;
public:
	Alumno();
	void ingresarAlumno();
	void consultarAlumno();
	bool buscarAlumno(char[]);
	void imprimirAlumnos();
	int cantidadA();

	void ActualizarPromedio(char [] ,float );

};

#endif // !ALUMNO_H

