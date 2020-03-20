#pragma once
#ifndef NOTAS_H
#define NOTAS_H

#include <fstream>
using namespace std;

struct NotaRegistro
{
	char numeroCuenta[9];
	int codigoMateria;
	float nota;
};

class Nota {
private:
	fstream notaBinario;

public:
	Nota();
	void agregarNota();
	void modificarNota();
	void imprimirNota();
};

#endif // !NOTAS_H
