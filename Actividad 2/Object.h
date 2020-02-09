#pragma once
#ifndef OBJECT_H
#define OBJECT_H

enum TipoObjeto { Tinteger , Tchar ,Tstring };

class Object
{
public:

	virtual void imprimir() = 0;
	virtual TipoObjeto getTipo() = 0;
};
#endif 