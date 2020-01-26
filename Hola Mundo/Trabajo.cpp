
#include <iostream>
using std::cout;
using std::cin;
int main() {

    std::cout << "*** S O L I C I T U D  D A T O S***\n";

    char nombreCompleto[25];
    int edad;
    char carrera[20];

    cout << "Ingrese su nombre: ";
    cin >> nombreCompleto;

    cout << "Ingrese su edad: ";
    cin >> edad;

    cout << "Ingrese su carrera: ";
    cin >> carrera;

    cout << "Alumno {nombre: " << nombreCompleto << ", edad: " << edad << ", carrera: " << carrera << "}\n";

}