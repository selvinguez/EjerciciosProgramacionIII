#include "Estructuras.h"
#include <iostream>
#include <conio.h>

#include <fstream>


using namespace std;

int main()
{


	//	ID, Nombre, Salario
	fstream archivoEmpleados("empleados.dat",ios::in | ios::out |ios::app| ios::binary);

	if (!archivoEmpleados)
	{
		cout << "Error de Lectura/Escritura en Archivo!\n";
		
		return 1;
	}

	InfoTabla informacion;
	informacion.cantidadCampos = 3;
	informacion.cantidadRegistros = 4;
	archivoEmpleados.write(reinterpret_cast<const char*>(&informacion), sizeof(InfoTabla));

	for (int i = 0; i < informacion.cantidadCampos; i++)
	{
		cout << "Ingrese tipo de dato en campo " << i + 1 << ": ";
		cout << "\n1. Entero\n2. Cadena\n3. Caracter \n4. Decimal \n5. Logico\n";
		int tipoCampo;
		cin >> tipoCampo;

		TipoCampo campoSeleccionado;

		switch (tipoCampo) {
		case 1:
			campoSeleccionado = TipoCampo::t_Entero;
			break;
		case 2:
			campoSeleccionado = TipoCampo::t_Cadena;
			break;
		case 3:
			campoSeleccionado = TipoCampo::t_Char;
			break;
		case 4:
			campoSeleccionado = TipoCampo::t_Decimal;
			break;
		case 5:
			campoSeleccionado = TipoCampo::t_Logico;
			break;
		default:
			cout << "Error en seleccion de tipo de dato en campo\n";
			break;

		}
		InfoCampo campo;

		cout << "Ingrese nombre de campo: ";
		cin >> campo.nombreCampo;
		campo.tipoCampo = campoSeleccionado;

		archivoEmpleados.write(reinterpret_cast<const char*>(&campo),sizeof(InfoCampo));



	}

	

	for (int i = 0; i < informacion.cantidadRegistros;i++) {
		archivoEmpleados.seekg(sizeof(InfoTabla), ios::beg);
		long posicionLectura = archivoEmpleados.tellg();//Devuelve Posicion de Lectura


		for (int j = 0;j < informacion.cantidadCampos;j++) {
			archivoEmpleados.seekg(posicionLectura, ios::beg);
			InfoCampo campo;
			archivoEmpleados.read(reinterpret_cast<char*>(&campo), sizeof(InfoCampo));
			posicionLectura = archivoEmpleados.tellg();

			switch (campo.tipoCampo)
			{
			case TipoCampo::t_Entero:
				cout << "Ingrese valor tipo Entero: ";
				RegistroEntero v;
				cin >> v.valor;
				archivoEmpleados.seekp(0,ios::end);//ubicarse al final
				archivoEmpleados.write(reinterpret_cast<const char*>(&v), sizeof(RegistroEntero));
				break;
			case TipoCampo::t_Cadena:
				cout << "Ingrese valor tipo Cadena: ";
				RegistroCadena v1;
				cin >> v1.valor;
				archivoEmpleados.seekp(0, ios::end);//ubicarse al final
				archivoEmpleados.write(reinterpret_cast<const char*>(&v), sizeof(RegistroCadena));
				break;
			case TipoCampo::t_Char:
				cout << "Ingrese valor tipo Char: ";
				RegistroCaracter v2;
				cin >> v2.valor;
				archivoEmpleados.seekp(0, ios::end);//ubicarse al final
				archivoEmpleados.write(reinterpret_cast<const char*>(&v), sizeof(RegistroCaracter));
				break;
			case TipoCampo::t_Decimal:
				cout << "Ingrese valor tipo Decimal: ";
				RegistroDecimal v3;
				cin >> v3.valor;
				archivoEmpleados.seekp(0, ios::end);//ubicarse al final
				archivoEmpleados.write(reinterpret_cast<const char*>(&v), sizeof(RegistroDecimal));
				break;
			case TipoCampo::t_Logico:
				cout << "Ingrese valor tipo Logico: ";
				int vLogico;
				cin >> vLogico;
				RegistroLogico v4;
				
				vLogico == 1 ? v4.valor = true : v4.valor = false;
				archivoEmpleados.seekp(0, ios::end);//ubicarse al final
				archivoEmpleados.write(reinterpret_cast<const char*>(&v), sizeof(RegistroLogico));
				break;


			default:
				break;
			}//FIN SWITCH
		}//FIN CAMPOS

	}///FIN

	archivoEmpleados.close();


	_getch();
}