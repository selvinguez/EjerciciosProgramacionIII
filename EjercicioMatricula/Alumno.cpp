#include "Alumno.h"

Alumno::Alumno()
{
	alumnosBinario.open("alumnos.dat", ios::in | ios::out | ios::app | ios::binary);
	if (!alumnosBinario)
	{
		cout << "error de apeura";
	}
	alumnosBinario.close();
}

void Alumno::ingresarAlumno()
{
	alumnosBinario.open("alumnos.dat", ios::in | ios::out | ios::app | ios::binary);
	alumnoRegistro nuevo;
	cout << "Ingrese numero de cuenta: ";
	cin >> nuevo.numeroCuenta;

	cout << "Ingrese el nombre de alumno: ";
	cin >> nuevo.nombre;

	nuevo.promedio = 0;

	//posicion de escritura al final del archivo
	alumnosBinario.seekp(0, ios::end);
	alumnosBinario.write(reinterpret_cast<const char*>(&nuevo), sizeof(alumnoRegistro));
	alumnosBinario.close();
	cout << "alumno agregado";
}

void Alumno::imprimirAlumnos()
{
	alumnosBinario.open("alumnos.dat", ios::in | ios::binary);

	alumnoRegistro Lectura;

	//coloca el cursor de lectura en una byte indicado
	alumnosBinario.seekg(0, ios::beg);
	alumnosBinario.read(reinterpret_cast<char*>(&Lectura), sizeof(alumnoRegistro));
	while (!alumnosBinario.eof())
	{
		cout << "Alumno [ cuentaL " << Lectura.numeroCuenta << "  nombre:" <<
			Lectura.nombre << "   Promedio: " << Lectura.promedio << " ]\n";
		alumnosBinario.read(reinterpret_cast<char*>(&Lectura), sizeof(alumnoRegistro));


	}
	alumnosBinario.close();
}

int Alumno::cantidadA()
{
	alumnosBinario.open("alumnos.dat", ios::in | ios::binary);
	long Posicion;

	alumnosBinario.seekg(0, ios::end);
	Posicion = alumnosBinario.tellg();
	alumnosBinario.close();

	return Posicion / sizeof(alumnoRegistro);
}

bool Alumno::buscarAlumno(char cuenta[])
{
	alumnosBinario.open("alumnos.dat", ios::in | ios::binary);

	alumnosBinario.seekg(0, ios::beg);
	alumnoRegistro Lectura;

	alumnosBinario.read(reinterpret_cast<char*>(&Lectura), sizeof(alumnoRegistro));
	while (!alumnosBinario.eof())
	{
		if (strcmp(Lectura.numeroCuenta, cuenta) == 0)
		{
			alumnosBinario.close();
			return true;
		}

		alumnosBinario.read(reinterpret_cast<char*>(&Lectura), sizeof(alumnoRegistro));

	}
	alumnosBinario.close();
	return false;
}

void Alumno::ActualizarPromedio(char idA[], float _promedio)
{

	tmp.open("Tmp.dat", ios::in | ios::out | ios::app | ios::binary);

	alumnosBinario.open("alumnos.dat", ios::in | ios::binary);
	alumnosBinario.seekg(0, ios::beg);

	alumnoRegistro Escrib;

	alumnosBinario.read(reinterpret_cast<char*>(&Escrib), sizeof(alumnoRegistro));
	cout << Escrib.promedio;
	while (!alumnosBinario.eof()) {

		//valida si el resultado de ambas cadenas son iguales, mayores o menor dado su valor ASCII
		if (strcmp(Escrib.numeroCuenta, idA) == 0) {

			Escrib.promedio += _promedio;
			cout << "fin: " << Escrib.promedio;
		}

		tmp.seekp(0, ios::end);
		tmp.write(reinterpret_cast<const char*>(&Escrib), sizeof(alumnoRegistro));
		alumnosBinario.read(reinterpret_cast<char*>(&Escrib), sizeof(alumnoRegistro));


	}
	tmp.close();
	alumnosBinario.close();
	remove("alumnos.dat");
	rename("Temp.dat", "alumnos.dat");
}



