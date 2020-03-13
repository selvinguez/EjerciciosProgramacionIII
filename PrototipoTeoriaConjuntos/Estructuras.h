#pragma once

#ifndef ESTRUCTURAS_H
#define ESTRUCTURAS_H

struct InfoTabla
{
	int cantidadRegistros;
	int cantidadCampos;
};//sizeof =  bytes

enum  TipoCampo{t_Entero,t_Cadena,t_Char ,t_Decimal,t_Logico};
struct InfoCampo
{
	char nombreCampo[20];
	TipoCampo tipoCampo;

};//sizeof = 24

struct RegistroEntero
{
	unsigned int valor;
};

struct RegistroCadena
{
	char valor[100];
};
struct RegistroCaracter
{
	char valor;
};

struct RegistroDecimal
{
	float valor;
};

struct RegistroLogico
{
	bool valor;
};


#endif //!ESTRUCTURAS_H