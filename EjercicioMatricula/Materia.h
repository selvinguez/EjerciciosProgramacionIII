#pragma once
#ifndef MATERIA_H
#define MATERIA_H
#include <fstream>
#include <iostream>
using namespace std;

struct materiaarchivo
{
	int codigo;
	char nombre[20];
	int uv;
	//size 28 bytes
};

class materia
{
private:
	fstream materiabinario;

public:
	materia();
	void ingresarmaterias();
	void consultarmateria();
	void imprimirmateria();
	bool buscarmateria(int);
	int buscarUv(int);

	int buscarUvTotal();
};

#endif 

