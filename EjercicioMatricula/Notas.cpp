#include "Notas.h"
#include <iostream>
#include "Alumno.h"
#include "Materia.h"
using namespace std;

nota::nota()
{
	notasbinario.open("notas.dat", ios::in | ios::out | ios::app | ios::binary);
	if (!notasbinario)
	{
		cout << "ERROR AL ABRIR EL ARCHIVO";
		return;
	}
	notasbinario.close();
}

void nota::agregarnota()
{
	Alumno busqueda;
	materia busquedam;
	char cuenta[9];
	int codigo;
	do
	{
		cout << "Ingrese numero de cuenta de alumno: ";
		cin >> cuenta;
	} while (!busqueda.buscarAlumno(cuenta));

	do
	{
		cout << "Ingrese codigo de la materia: ";
		cin >> codigo;
	} while (!busquedam.buscarmateria(codigo));
	float nota;
	cout << "Ingrese nota del alumno: ";
	cin >> nota;

	notaregistro escritura;
	strcpy_s(escritura.cuenta, strlen(cuenta) + 1, cuenta);
	escritura.codigo = codigo;
	escritura.nota = nota;

	notasbinario.open("notas.dat", ios::out | ios::app | ios::binary);
	notasbinario.seekp(0, ios::end);
	notasbinario.write(reinterpret_cast<const char*>(&escritura), sizeof(notaregistro));
	notasbinario.close();
}


void nota::actualizarpromedio(char cuenta[])
{
	char numeroCuenta[9];
	int idM = 0, uv = 0, uvTotal = 0;
	float promedio = 0;
	float nota = 0;
	float multiplicacion = 0;
	Alumno alumno;
	materia materia;



	notasbinario.seekg(0, ios::beg);

	notaregistro Lectura;

	notasbinario.read(reinterpret_cast<char*>(&Lectura), sizeof(notaregistro));


	while (!notasbinario.eof())
	{
		if (strcmp(cuenta, Lectura.cuenta) == 0)
		{
			idM = Lectura.codigo;
			nota = Lectura.nota;
			notasbinario.close();

		}
		notasbinario.read(reinterpret_cast<char*>(&Lectura), sizeof(notaregistro));
	}
	uv = materia.buscarUv(int(idM));

	multiplicacion = uv * nota;

	uvTotal = materia.buscarUvTotal();

	promedio = multiplicacion / uvTotal;

	alumno.ActualizarPromedio(cuenta, promedio);

	notasbinario.close();


}

