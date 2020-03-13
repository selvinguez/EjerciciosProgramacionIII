#include "ListaEnlazadaSimple.h"
#include <iostream>
using namespace std;

ListaEnlazada::ListaEnlazada():primero(nullptr)
{};

bool ListaEnlazada::estaVacia() {
	return primero == nullptr;
};

void ListaEnlazada::agregarElemento(int _valor) {
	Nodo* nuevo = new Nodo(_valor,nullptr);

	if (estaVacia())
		primero = nuevo;
	else {
		Nodo* actual = primero;

		while (actual->getSiguiente() != nullptr) {
			actual = actual->getSiguiente();
		}

		actual->setSiguiente(nuevo);
	}

}

void ListaEnlazada::imprimir() {
	if (estaVacia())
		cout << "Lista Vacia!";
	else {
		Nodo* actual = primero;
		while (actual != nullptr) {
			cout << "[" << actual->getValor()<<"]";
			actual = actual->getSiguiente();
		}

	}

}

void ListaEnlazada::eliminar(int _valor) {
	if (estaVacia())
		cout << "\nLista Vacia\n";
	else {
		Nodo* actual = primero;
		Nodo* anterior = nullptr;

		while (actual != nullptr) {
			
				if (actual->getValor() == _valor) {
					if (actual == primero) {
						Nodo* copiaP = primero;
						primero = primero->getSiguiente();
						delete copiaP;
					}
					else {
						anterior->setSiguiente(actual->getSiguiente());
						delete actual;
					}
					return;
				}
				anterior = actual;
				actual = actual->getSiguiente();
			}
			

		

	}


};