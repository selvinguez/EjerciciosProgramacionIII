
#include "Rectangulo.h"
#include "TrianguloRectangulo.h"
#include <conio.h>
#include <iostream>
using std::cout;
void imprimir(Figura2D*);

int main()
{
	//arreglo de apuntadores
	Figura2D* figuras[4];

	figuras[0] = new TrianguloRectangulo(4,8);
	figuras[1] = new Rectangulo(4, 8);
	figuras[2] = new Rectangulo(3, 5);
	figuras[3] = new TrianguloRectangulo(2, 6);

	for (int i = 0;i < 4;i++) 
	{
		imprimir(figuras[i]);
	}

	_getch();
}

void imprimir(Figura2D* figura)
{
	figura->imprimirFigura();

	if(TipoFigura::TTrianguloRectangulo ==figura->getTipo())
	{ 
		TrianguloRectangulo* tr = (TrianguloRectangulo*)figura;
		cout << "Hipotenusa: " << tr->getHipotenusa()<<"\n";
	}
}


