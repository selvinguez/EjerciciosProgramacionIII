#include "listaDoble.h"`
#include <iostream>
using namespace std;

listaDoble::listaDoble() : primero(nullptr), ultimo(nullptr)
{}

bool listaDoble::estaVacia()
{
	return primero == nullptr;
}

void listaDoble::agregar(int _valor)
{
	NodoD* nuevo = new NodoD(_valor, nullptr, nullptr);

	if (estaVacia())
	{
		primero = ultimo = nuevo;
	}
	else
	{
		NodoD* actual = primero;

		while (actual->getSiguiente() != nullptr)
		{
			actual = actual->getSiguiente();

		}

		actual->setSiguiente(nuevo);
		nuevo->setAnterior(actual);
		ultimo = nuevo;

	}
}

void listaDoble::Seleccion()
{
	NodoD* actual = primero;

	while (actual != nullptr)
	{
		NodoD* temp = actual->getSiguiente();
		while (temp != nullptr)
		{
			if (actual->getValor() > temp->getValor())
			{
				int tmp = temp->getValor();
				temp->setValor(actual->getValor());
				actual->setValor(tmp);
			}
			temp = temp->getSiguiente();
		}
		actual = actual->getSiguiente();
	}
}

void listaDoble::eliminar(int _valor)
{
	if (estaVacia())
		return;


	NodoD* actual = primero;

	do
	{
		if (actual->getValor() == _valor)
		{
			if (actual == primero)
			{
				primero = primero->getSiguiente();


				delete actual;
			}
			else if (actual == ultimo)
			{
				ultimo = ultimo->getAnterior();



				delete actual;
			}
			else
			{
				actual->getAnterior()->setSiguiente(actual->getSiguiente());
				actual->getSiguiente()->setAnterior(actual->getAnterior());

				delete actual;
			}
			return;
		}
		actual = actual->getSiguiente();
	} while (actual != primero);
}


void listaDoble::imprimir()
{
	if (estaVacia())
		cout << "Error";
	else
	{
		NodoD* actual = primero;

		while (actual != nullptr)
		{

			cout << "[ " << actual->getValor() << " ]";
			actual = actual->getSiguiente();
		}
		cout << "\n";
	}

	imprimirRecursiva(ultimo);
}

void listaDoble::imprimirRecursiva(NodoD* _ultimate)
{

	if (_ultimate == nullptr) {
		return;
	}
	cout << "[ " << _ultimate->getValor() << " ]";
	imprimirRecursiva(_ultimate->getAnterior());

}
