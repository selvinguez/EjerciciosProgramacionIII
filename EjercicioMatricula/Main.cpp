#include "alumno.h"
#include "Materia.h"
#include <conio.h>
int main()
{
	alumno Alumno;
	Materia ma;
	/*Alumno.ingresarAlumno();
	Alumno.ingresarAlumno();
	Alumno.ingresarAlumno();
	Alumno.ingresarAlumno();

	Alumno.imprimirAlumnis();*/

	ma.ingresarMateria();
	ma.ingresarMateria();
	ma.ingresarMateria();

	ma.imprimirMateria();

	_getch();
}