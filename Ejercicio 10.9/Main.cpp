#include <iostream>
#include <stdexcept>
#include "Array.h"
using namespace std;
int main() {
	Array enteros1(7);
	Array enteros2;

	cout << "El tamanio del objeto Array enteros1 es"
		<< enteros1.obtenerTamanio()
		<< "\nEl objeto Array despues de la inicializacion es:\n"
		<< enteros1;

	cout << "El tamanio del objeto Array enteros2 es"
		<< enteros2.getTamanio()
		<< "\nEl objeto Array despues de la inicializacion es:\n"
		<< enteros2;

	cout << "\nIntroduzca 17 enteros: " << endl;
	cin >> enteros1 >> enteros2;

	cout << "\n Despues de la entrada, los objetos Array contienen:\n"
		<< "enteros1:\n" << enteros1
		<< "enteros2:\n" << enteros2;

	if (enteros1 != enteros2)
		cout << "enteros1 y enteros2 no son iguales " << endl;

	Array enteros3(enteros1);

	cout << "El tamanio del objeto Array enteros3 es"
		<< enteros3.obtenerTamanio()
		<< "\nEl objeto Array despues de la inicializacion es:\n"
		<< enteros3;

	cout << "\nAsignando enteros2 a enteros1: " << endl;
	enteros1 = enteros2;

	cout << "enteros1: \n" << enteros1
		< "enteros2: \n" << enteros2;

	cout << "\nEvaluando: enteros1 ==enteros2" << endl;

	if (enteros1 == enteros2)
		cout << "enteros1 y enteros2 son iguales" << endl;

	cout << "\nentero1[5] es " << enteros1[5];

	cout << "\nAsignando 1000 a enteros 1[5]" << endl;
	enteros1[5] = 1000;
	cout << "enteros1: \n" << enteros1;

	try {
		cout << "\nTrata de asignar 1000 a enteros1[15]" << endl;
		enteros1[15] = 1000;

	}
	catch (out_of_range & ex) {
		cout << "Ocurrio una excepcion" << ex.what() << endl;

	}












}
