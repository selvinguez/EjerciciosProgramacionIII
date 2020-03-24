#ifndef STACK_H
#define STACK_H
#include "Nodo.h"

#include <iostream>
using namespace std;
class Stack
{
	struct nodoe
	{
		int codigo;
		char nombre[30];
	};

private:
	Nodo* primero;
	Nodo* ultimo;

public:
	Stack();

	void Push(const char*, int);
	bool pop();
	bool isEmpty();
	void print();
	Nodo* printRecursivo(Nodo*);
	void savetofile(const char*);
};

#endif //

