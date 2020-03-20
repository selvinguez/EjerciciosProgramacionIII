#include "Notas.h"

#include <iostream>
using namespace std;

Nota::Nota()
{

	notaBinario.open("notas.dat", ios::in | ios::out | ios::app | ios::binary);
	if (!notaBinario) {
		cout << "Error al intentar abrir el archivo\n";
		return;
	}

	notaBinario.close();
}

void Nota::agregarNota() {
	alumno busqueda;
	char numeroCuenta[9];
	do {


	} while (!busqueda.);
	cout << "Ingrese numero de cuenta de Alumno: ";
	cin >> numeroCuenta;



}

