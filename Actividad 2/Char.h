#pragma once

#ifndef CHAR_H
#define CHAR_H

#include "Object.h"

class Char :public Object
{
private:
	
	char cha;
	
public:
	Char();

	Char( char);


	void setchar(char);


	char getchar(void);
	

	void imprimir();

	TipoObjeto getTipo();


};
#endif  