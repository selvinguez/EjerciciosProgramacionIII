#include "Stack.h"
#include "Nodo.h"

Stack::Stack() : primero(nullptr), ultimo(nullptr)
{

}

bool Stack::isEmpty()
{
	if (primero == nullptr) {

		return false;
	}
	return true;
}

void Stack::Push(const char* _nombre, int Codigo) {
	Nodo* tmp = new Nodo(Codigo, _nombre, nullptr, nullptr);
	if (isEmpty() == true) {
		primero = tmp;
		ultimo = tmp;
	}
	else {
		ultimo->setsig(tmp);
		tmp->setAnt(ultimo);
		ultimo = tmp;
	}
}

void Stack::print() {

	printRecursivo(primero);
}

Nodo* Stack::printRecursivo(Nodo* _primero){

	
	if (primero == nullptr)
		return;
	
	primero = primero;

	cout << "[ " << primero->getcodigo() << " ] " << "[ " << primero->getNombre() << " ] ";
	primero = primero->getsig();
	printRecursivo(primero);


}

bool Stack::pop() {
	if (isEmpty())
	{
		return;
	}

	Nodo* actual = ultimo;

	if (actual == ultimo)
	{
		ultimo = ultimo->getant;

		delete actual;
	}


}

void Stack::savetofile() {


}

