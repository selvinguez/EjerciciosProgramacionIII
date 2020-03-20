#include "alumno.h"
#include <iostream>

alumno::alumno()
{
	alumnosBinario.open("alumnos.dat", ios::in | ios::out | ios::app | ios::binary);

	if (!alumnosBinario)
		cout << "Error en aertura en archivo de alumnos";

	alumnosBinario.close();
}

void alumno::ingresarAlumno()
{
	alumnosBinario.open("alumnos.dat", ios::in | ios::out | ios::app | ios::binary);

	alumnoRegistro nuevoAlumno;

	cout << "Ingrese numero de cuenta: ";
	cin >> nuevoAlumno.numeroCuenta;

	cout << "Ingrese nombre de alumno: ";
	cin >> nuevoAlumno.nombre;

	nuevoAlumno.promedio = 0;

	alumnosBinario.seekp(0, ios::end);// coloca el cursor de ESCRITURA en un byte especifico

	alumnosBinario.write(reinterpret_cast<const char*>(&nuevoAlumno), sizeof(alumnoRegistro));

	alumnosBinario.close();

	cout << "Alumno agregado\n";
}

void alumno::imprimirAlumnis()
{
	alumnosBinario.open("alumnos.dat", ios::in | ios::binary);

	alumnoRegistro alumnoLectura;
	//colaca el cursor de LECTURA en un byte indicado
	alumnosBinario.seekg(0, ios::beg);

	alumnosBinario.read(reinterpret_cast<char*>(&alumnoLectura), sizeof(alumnoRegistro));

	while (!alumnosBinario.eof())
	{
		cout << "Alumno { cuenta: " << alumnoLectura.numeroCuenta << ", nombre : "
			<< alumnoLectura.nombre << ", promedio: " << alumnoLectura.promedio << " }\n";
		alumnosBinario.read(reinterpret_cast<char*>(&alumnoLectura), sizeof(alumnoRegistro));
	}

	alumnosBinario.close();
}

int alumno::obtenerCantidadAlumnos() {
	alumnosBinario.open("alumnos.dat", ios::in | ios::binary);

	long finalArchivo;

	alumnosBinario.seekg(0, ios::end);
	finalArchivo = alumnosBinario.tellg;

	alumnosBinario.close();

	return finalArchivo /sizeof(alumnoRegistro);
}

bool alumno::buscarAlumno(char _numeroCuenta[]) {
	alumnosBinario.open("alumnos.dat", ios::in | ios::binary);
	alumnosBinario.seekg(0, ios::beg);

	alumnoRegistro Lectura;

	alumnosBinario.read(reinterpret_cast<char*>(&Lectura), sizeof(alumnoRegistro));
	while (!alumnosBinario.eof())
	{
		if (strcmp(Lectura.numeroCuenta, _numeroCuenta) == 0) {
			alumnosBinario.close();
			return true;
		}

	}


	
	return false;
}

