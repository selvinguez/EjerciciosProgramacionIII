#pragma once

#ifndef STRING_H
#define STRING_H
#include <iostream>
using namespace std;
#include "Object.h"

class String :public Object
{
private:

	string strin;

public:
	String();
	String(string);


	void setstrin(string);


	string getstrin(void);


	void imprimir();
	TipoObjeto getTipo();


};
#endif  