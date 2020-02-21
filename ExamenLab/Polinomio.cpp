#include "Polinomio.h"
using namespace std;



Polinomio::Polinomio() {
	for (int x = 0;x < 30 ; x++) {
		Coeficiente[x] = 0;
		exponentes[x] = 0;
	}
}

Polinomio::~Polinomio() {

}

void Polinomio::ingresarTerminos() {
	cout << "Ingrese Cantidad de Terminos: ";
    cin >> cantiTerminos;

	for (int x = 0; x < cantiTerminos; x++) {
		cout << "Ingrese coeficiente: ";
		cin >> Coeficiente[x];
		cout << "\nIngrese exponente: ";
		cin >> exponentes[x];
	}
}


void Polinomio::ordenar_Poli() {
	int aux;
	int aux2;
	for (int x = 0;x < 30;x++) {
		for (int i = 0; i < 30;i++) {
			if (exponentes[x] > exponentes[i]) {
				aux = exponentes[x];
				exponentes[x] = exponentes[i];
				aux2 = Coeficiente[x];
				Coeficiente[x] = Coeficiente[i];

				exponentes[i] = aux;
				Coeficiente[i] = aux2;
			}
		}
	}
}

Polinomio& operator+(const Polinomio& a, const Polinomio& b) {
	Polinomio suma;
	for (int x = 0;x < 30;x++) {
		for(int i = 0; i<30;i++){
			if (a.exponentes[x] == b.exponentes[i]) {
				suma.Coeficiente[x] = a.Coeficiente[x] + b.Coeficiente[i];
				suma.exponentes[x] = a.exponentes[x];
			}
		}
	}
	
	return suma;
}

Polinomio& operator-(const Polinomio& a, const Polinomio& b) {
	Polinomio Resta;
	for (int x = 0;x < 30;x++) {
		for (int i = 0; i < 30;i++) {
			if (a.exponentes[x] == b.exponentes[i]) {
				Resta.Coeficiente[x] = a.Coeficiente[x] - b.Coeficiente[i];
				Resta.exponentes[x] = a.exponentes[x];
			}

		}
	}
	
	return Resta;
}

Polinomio& operator*(const Polinomio& a, const Polinomio& b) {
	Polinomio multi;

	for (int x = 0;x < 30;x++)
	{
		if (a.Coeficiente[x] != 0 || b.Coeficiente[x] != 0) {
			for (int y = 0;y < 30;y++) {
				multi.Coeficiente[y] = a.Coeficiente[x] * b.Coeficiente[y];
				multi.exponentes[y] = a.exponentes[x] + b.Coeficiente[y];
			}
		}
	}

	return multi;
}

std::ostream& operator<<(std::ostream& out , const Polinomio& tmp) {
	Polinomio a = tmp;
	a.ordenar_Poli();
	for(int x =0;x<30;x++ )
	{
		if(a.Coeficiente[x] != 0){
			out <<"+"<< a.Coeficiente[x] << "x^" << a.exponentes[x];
		
		}
		
	}
	return out;
}


