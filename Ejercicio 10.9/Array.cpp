#include <iostream>
#include <iomanip>
#include <stdexcept>

#include "Array.h"
using namespace std;

Array::Array(int tamanioArreglo) : tamanio(tamanioArreglo > 0 ? tamanioArreglo :
	throw invalid_argument("El tamanio del arreglo debe ser mayor que 0")),
	ptr(new int[tamanio])
{
	for (size_t i = 0;i < tamanio;++i)
		ptr[i] = 0;

}

Array::Array(const Array& arregloCopiar)
	:tamanio(arregloCopiar.tamanio),
	ptr(new int[tamanio])
{
	for (size_t i = 0; i < tamanio;i++) {
		ptr[i] = arregloCopiar.ptr[i];
	}

}

Array::~Array() {
	delete[]ptr;
}

size_t Array::obtenerTamanio()const
{
	return tamanio;
}

const Array& Array ::operator=(const Array& derecho)
{
	if (&derecho != this) {
		if(tamanio!= derecho.tamanio){
			delete[]ptr;
			tamanio = derecho.tamanio;
			ptr = new int[tamanio];
		}
		for (size_t i = 0; i < tamanio;i++)
			ptr[i] = derecho.ptr[i];
	}
	return *this;
}

bool Array ::operator==(const Array& derecho)const
{
	if (tamanio != derecho.tamanio)
		return false;

	for (size_t i = 0;i < tamanio;i++)
		if (ptr[i] != derecho.ptr[i])
			return false;

	return true;
}

int& Array ::operator[](int subindice)
{
	if (subindice < 0 || subindice >= tamanio)
		throw out_of_range("subindice fuera de rango");

	return ptr[subindice];
}

int Array ::operator[](int subindice)const
{
	if (subindice < 0 || subindice >= tamanio)
		throw out_of_range("subindice fuera de rango");

	return ptr[subindice];
}

istream & operator >>(istream &entrada, Array &a)
{
	for (size_t i = 0;i < a.tamanio;i++)
		entrada >> a.ptr[i];

	return entrada;
}

ostream& operator<<(ostream& salida, const Array& a)
{
	for (size_t i = 0;i < a.tamanio;i++) {
		salida << setw(12) << a.ptr[i];

		if ((i + 1) % 4 == 0)
			salida << endl;
	}

	if (a.tamanio % 4 != 0)
		salida << endl;

	return salida;
}












