
#include <iostream>;

using namespace std;

int main() {
	cout << "Este es el ejercicio 2.29\n";
	cout << "Entero " <<"\tCuandrado" <<"\tcubo";
	for (int numero = 0;numero < 11;numero++) {
		cout << "\n"<<numero <<"\t "<<numero*numero << "\t\t " << numero*numero*numero;
	}

	cout << "\nEste es el ejercicio 4.26\n";

	int num, n1, n2, n3, n4, n5, n6, n7, n8;
	cout << "Ingrese el numero de 5 cifras" << endl;
	cin >> num;
	n1 = num / 10000;
	n2 = num % 10000;
	n3 = num % 10;
	if (n1 = !n3)
		cout << "No es palindromo" << endl;
	else {
		n4 = n2 / 1000;
		n5 = n2 % 1000;
		n6 = n5 / 100;
		n7 = n5 % 100;
		n8 = n7 / 10;
		if (n4 == n8)
			cout << "Si es palindromo" << endl;
		else
			cout << "No es palindromo" << endl;

	}


	cout << "Este es el ejercicio 4.27\n";

	n1 = 0,n2=0,n3=0,n4=0;
	
	cout << "Numero Binario: ";cin >> n1;

	while (n1 >= 10) {

		n2 = 0;

		while (n1 >= 10) {

			n1 = n1 - 10;

			n2++;

		}

		n3 = n3 + n1 * pow(2, n4);

		n4++;

		n1 = n2;

	}

	n3 = n3 + n2* pow(2, n4);

	cout << endl << "Conversion a decimal: " << n3 << endl;

	

}


	






