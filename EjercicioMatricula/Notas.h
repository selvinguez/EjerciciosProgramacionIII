#pragma once
#ifndef NOTAS_H
#define NOTAS_H
#include <fstream>
using namespace std;

struct notaregistro
{
	char cuenta[9];
	int codigo;
	float nota;
};

class nota
{
private:
	fstream notasbinario;

public:
	nota();
	void agregarnota();
	void modificanota();
	void imprimirnotas(char[]);
	void actualizarpromedio(char[]);
};

#endif // !NOTAS_H

