
#include "ListaDobleCircular.h"
#include <iostream>
using namespace std;

ListaDobleCircular::ListaDobleCircular() :primero(nullptr), ultimo(nullptr) {


};

bool ListaDobleCircular::estaVacia() {
	return primero == nullptr;
}

void ListaDobleCircular::agregarElemento(int _valor) {
	Nodo* nuevo = new Nodo(_valor, nullptr, nullptr);

	if (estaVacia()) {
		primero =ultimo= nuevo;
		ultimo->setSiguiente(primero);
		primero->setAnterior(ultimo);
	}
	else {
		ultimo->setSiguiente(nuevo);
		nuevo->setAnterior(ultimo);
		ultimo = nuevo;

		ultimo->setSiguiente(primero);
		primero->setAnterior(ultimo);
	}
}


void ListaDobleCircular::insertarElemento(int _pos,int _valor){
	if (estaVacia()) {

		cout << "Debe llamar a agregareElemento()";
	}


	
	
	if (_pos > getSize()) {
		cout << "Posicion incorrecta";
		return;
	}
	int posActual = 0;

	Nodo* actual = primero;
	Nodo* nuevo = new Nodo(_valor, nullptr, nullptr);
	do {
		if (_pos == posActual) {
			if (actual == primero) {
				nuevo->setSiguiente(primero);
				primero->setAnterior(nuevo);
				nuevo->setAnterior(ultimo);
				ultimo->setSiguiente(nuevo);

				primero = nuevo;
			}
			else {
				nuevo->setAnterior(actual->getAnterior());
				actual->getAnterior()->setSiguiente(nuevo);
				nuevo->setSiguiente(actual);
				actual->setAnterior(nuevo);

			}
			return;
		}
		actual = actual->getSiguiente();
		posActual++;

	} while (actual!= primero);

}

int ListaDobleCircular::getSize() {
	int tamano = 0;

	if (estaVacia())
		return 0;
	Nodo* actual = primero;
	do {
		tamano++;
		actual = actual->getSiguiente();
	} while (actual!= primero);
	return tamano;
}

void ListaDobleCircular::eliminarElemento(int _valor) {
	if (estaVacia())
		return;
	
	Nodo* actual = primero;

	do {

		if (actual->getValor() == _valor) {
			if (actual == primero) {
				primero = primero->getSiguiente();
				primero->setAnterior(ultimo);
				ultimo->setSiguiente(primero);
				delete actual;
			}
			else if(actual == ultimo){
				ultimo = ultimo->getAnterior();
			   ultimo->setSiguiente(primero);
			   primero->setAnterior(ultimo);
			   delete actual;
			}
			else {
				actual->getAnterior()->setSiguiente(actual->getSiguiente());
				actual->getSiguiente()->setAnterior(actual->getAnterior());

				delete actual;
			}
			return;

		}
		actual = actual->getSiguiente();

	} while (actual != primero);
}

void ListaDobleCircular::imprimir() {
	if (estaVacia())
		return;

	Nodo* actual = primero;
	
	do {
		cout << "{" << actual->getValor() << "}";
		actual = actual->getSiguiente();

	} while (actual != primero);

}



