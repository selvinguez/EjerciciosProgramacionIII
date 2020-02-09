
#include "Rectangulo.h"
#include <iostream>

using namespace std;
int main() {
	Rectangulo r1;
	Rectangulo r2(6, 4);

	r1.setBase(10);
	r1.setAltura(4);
	cout << "Rectangulo 1{base " << r1.getBase() << ",altura: " << r1.getAltura() <<"}"<< endl;
	cout << "Area: " << r1.getArea();
	cout << " Perimetro: " << r1.getPerimetro();

	//------------------------------------
	cout << "\nRectangulo 2{base " << r2.getBase() << ",altura: " << r2.getAltura() << "}" << endl;
	cout << "Area: " << r2.getArea();
	cout << " Perimetro: " << r2.getPerimetro();

}