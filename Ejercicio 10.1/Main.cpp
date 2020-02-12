#include <iostream>
#include <string>
using namespace std;

int main() {
	string s1("feliz");
	string s2("cumpleanios");
	string s3;

	cout << "si es \"" << s1 << "\" s2 es\"" << s2 << "\"; s3 es \"" << s3 << '\"'
		<< "\n\n Los resultados de comparar s2 y s1: "
		<< "\ns2== s1 produce " << (s2 == s1 ? "true" : "false")
		<< "\ns2 != s1 produce" << (s2 != s1 ? "true" : "false")
		<< "\ns2> s1 prodruce" << (s2 > s1 ? "true" : "false")
		<< "\ns2< s1 prodruce" << (s2 < s1 ? "true" : "false")
		<< "\ns2>= s1 prodruce" << (s2 >= s1 ? "true" : "false")
		<< "\ns2<= s1 prodruce" << (s2 <= s1 ? "true" : "false");

	cout << "\n\n Prueba de s3.empty(): " << endl;

	if(s3.empty()){
		cout << "s3 esta vacia: se asigno s1 a s3;" << endl;
		s3 = s1;
		cout << "s3 es\"" << s3 << "\"";
	}

	cout << "\n\ns1 += s2 produce s1 =";
	s1 += s2;
	cout << s1;

	cout << "\n\n si += \" a ti \" produce" << endl;
	s1 += " a ti";
	cout << "si=" << s1 << "\n\n";

	cout << "la subcadena de s1 que empieza en la ubicacion 0 para \n"
		<< "17 caracteres, si.substr(o,17),es:\n"
		<< s1.substr(0, 17) << "\n\n";

	cout << "la subcadena de s1 que empieza en  \n"
		<< "la ubicacion 18  si.substr(18),es:\n"
		<< s1.substr(18) << "\n\n";

	string s4(s1);
	cout << "\ns4=" << s4 << "\n\n";

	cout << "asignado s4 a s4" << endl;
	s4 = s4;
	cout << "s4= " << s4 << endl;

	s1[0] = 'F';
	s1[6] = 'C';
	cout << "\ns1 despues de s1[0]= 'F' Y SI [6]='C' es: " <<
		s1 << "\n\n";

	try {
		cout << "El intento de asignar 'd' a s1.at(30) produce: " << endl;
		s1.at(30) = 'd';
	}
	catch (out_of_range & ex) {
		cout << "Ocurrio una expecion: " << ex.what() << endl;
	}


}