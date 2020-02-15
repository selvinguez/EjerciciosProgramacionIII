

#include "EnteroGrande.h"
#include <string>
#include <iostream>

using namespace std;

EnteroGrande::EnteroGrande() {

	iValor = new int[LIMITE];
	cvalor = new char[LIMITE];

	for (int i = 0; i < LIMITE; i++)
	{
		iValor[i] = 0;
		cvalor[i]= 'a';
}

}

std::istream& operator>>(std::istream& in, EnteroGrande& a) {
	in >> a.cvalor;

	int longitud = strlen(a.cvalor);
	int posicion = LIMITE - 1;

	for (int i = longitud - 1;i >= 0;i--) {
		switch (a.cvalor[i])
		{
		case '1':
				a.iValor[posicion] = 1;
				posicion--;
				break;

		case '2':
			a.iValor[posicion] = 2;
			posicion--;
			break;
		case '3':
			a.iValor[posicion] = 3;
			posicion--;
			break;
		case '4':
			a.iValor[posicion] = 4;
			posicion--;
			break;
		case '5':
			a.iValor[posicion] = 5;
			posicion--;
			break;
		case '7':
			a.iValor[posicion] = 7;
			posicion--;
			break;
		case '8':
			a.iValor[posicion] = 8;
			posicion--;
			break;
		case '9':
			a.iValor[posicion] = 9;
			posicion--;
			break;
		case '0':
			a.iValor[posicion] = 0;
			posicion--;
			break;
		default:
			break;
		}
	}
	return in;
}

std::ostream& operator<<(std::ostream& out, const EnteroGrande& a) {

	for (int i = 0; i < strlen(a.cvalor);i++ ) {

		out << a.iValor[LIMITE - strlen(a.cvalor) - i];


	}
	return out;
}

EnteroGrande& operator+(const EnteroGrande& a, const EnteroGrande& b) {
	EnteroGrande suma;
    string sNumero;

	int longitudMax = strlen(a.cvalor) > strlen(b.cvalor) ? strlen(a.cvalor) : strlen(b.cvalor);
	int posicion = LIMITE - 1;
	int acarreo = 0;
	for(int i = LIMITE -1;1>= longitudMax;i--)
	{
		if (a.iValor[i] + b.iValor[i] + acarreo > 9) {
			suma.iValor[posicion] = (a.iValor[i] + b.iValor[i] + acarreo) - 10;
			acarreo = 1;
			sNumero = to_string((a.iValor[i] + b.iValor[i] + acarreo) - 10) + sNumero;
		}
		else {
			suma.iValor[posicion] = a.iValor[i] + b.iValor[i] + acarreo;
			acarreo = 0;
			sNumero = to_string(a.iValor[i] + b.iValor[i]) + sNumero;
		}
		posicion--;

	}

	if (acarreo==1) {
		suma.iValor[posicion] = acarreo;
		sNumero = to_string(acarreo) + sNumero;
	}

	strcpy_s(suma.cvalor, strlen(sNumero.c_str())+1,sNumero.c_str());


}