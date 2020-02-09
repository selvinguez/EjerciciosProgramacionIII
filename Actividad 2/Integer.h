#pragma once
#include <iostream>
#include <string>

using namespace std;

#ifndef INTEGER_H
#define INTEGER_H

#include "Object.h"

class Integer :public Object
{
private:
	int integer;
	
public:
	Integer();
	Integer(int);

	void setint(int);


	int getint(void);
	

	void imprimir();
	TipoObjeto getTipo();


};
#endif  