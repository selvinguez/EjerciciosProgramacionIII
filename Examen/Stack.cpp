#include "Stack.h"
#include "Nodo.h"

Stack::Stack() : primero(nullptr), ultimo(nullptr)
{

}

bool Stack::isEmpty()
{
	return primero == nullptr;
}

void Stack::Push(const char* _nombre, int Codigo) {
	Nodo* tmp = new Nodo(Codigo, _nombre, nullptr, nullptr);

	if (isEmpty())
	{
		primero = ultimo=tmp;
		
	}
	else
	{
		Nodo* tmp2 = primero;

		while (tmp2->getsig() != nullptr)
		{
			tmp2 = tmp2->getsig();

		}

		tmp2->setsig(tmp);
		tmp->setAnt(tmp2);
		ultimo = tmp;

	}
}

void Stack::print() {

	printRecursivo(primero);
}

void Stack::printRecursivo(Nodo* _primero) {


	if (_primero == nullptr)
		return;

	cout << "[ " << _primero->getcodigo() << " / " << _primero->getNombre() << " ]";
	printRecursivo(_primero->getsig());

}

bool Stack::pop() {
	if (isEmpty() == true) {
		cout << "Vacio";
	}
	else {
		Nodo* actual = primero;
		while (actual->getsig() != nullptr) {
			actual = actual->getsig();
		}
		ultimo = actual->getant();
		delete actual;
		return true;
	}
	return false;

}

void Stack::savetofile() {
	archivo.open("Examen.dat", ios::in | ios::out | ios::app | ios::binary);
	Nodo* nuevo;


	nuevo = primero;
	
	while (nuevo->getsig ()!= nullptr) {
		archivo.seekp(0, ios::end);
	archivo.write(reinterpret_cast<const char*>(&nuevo), sizeof(Nodo));
	nuevo = nuevo->getsig();
	}
	archivo.close();
	cout << "Archivo agregado";


}

