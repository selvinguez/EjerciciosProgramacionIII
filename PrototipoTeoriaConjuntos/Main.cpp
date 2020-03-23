

#include "Estructuras.h"
#include <iostream>
#include <conio.h>

#include <fstream>
#include <string>

using namespace std;

int main()
{
	char nombreTabla[25];

	//debe indicar el nombre del arhcivo con extension .dat
	cout << "Indique nombre de archivo/tabla: ";
	cin >> nombreTabla;


	fstream archivoTabla(nombreTabla, ios::in | ios::out | ios::app | ios::binary);

	if (!archivoTabla)
	{
		cout << "Error de Lectura/Escritura en archivo!\n";
		_getch();
		return 1;
	}

	cout << "Indique cantidad de campos: ";
	int cantCampos;
	cin >> cantCampos;

	cout << "Indique cantidad de registros: ";
	int cantRegistros;
	cin >> cantRegistros;


	InfoTabla informacion;
	informacion.cantidadRegistros = cantRegistros;
	informacion.cantidadCampos = cantCampos;

	archivoTabla.write(reinterpret_cast<const char*>(&informacion), sizeof(InfoTabla));

	for (int i = 0; i < informacion.cantidadCampos; i++)
	{
		cout << "\nSeleccione tipo de dato en campo " << (i + 1) << ":\n";
		cout << "1. Entero\n2. Cadena\n3. Caracter\n4. Decimal\n5. Logico\n>> ";
		int tipoCampo;
		cin >> tipoCampo;

		TipoCampo campoSeleccionado;

		switch (tipoCampo)
		{
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
			cout << "\nError en seleccion de tipo de dato en campo\n";
			break;
		}

		InfoCampo campo;

		cout << "\nIngrese nombre de campo: " << (i + 1) << ":\n";
		cin >> campo.nombreCampo;
		campo.tipoCampo = campoSeleccionado;

		archivoTabla.write(reinterpret_cast<const char*>(&campo), sizeof(InfoCampo));
	}



	for (int i = 0; i < informacion.cantidadRegistros; i++)
	{
		archivoTabla.seekg(sizeof(InfoTabla), ios::beg);
		long posicionLectura = archivoTabla.tellg(); //devuelve posicion de lectura

		cout << "Registro " << (i + 1) << ": \n";

		for (int j = 0; j < informacion.cantidadCampos; j++)
		{
			archivoTabla.seekg(posicionLectura, ios::beg);
			InfoCampo campo;
			archivoTabla.read(reinterpret_cast<char*>(&campo), sizeof(InfoCampo));
			posicionLectura = archivoTabla.tellg();

			switch (campo.tipoCampo)
			{
			case TipoCampo::t_Entero:
			{
				cout << "Ingrese valor tipo Entero: ";
				RegistroEntero v;
				cin >> v.valor;
				archivoTabla.seekp(0, ios::end); //ubicarse al final
				archivoTabla.write(reinterpret_cast<const char*>(&v), sizeof(RegistroEntero));
			}
			break;
			case TipoCampo::t_Cadena:
			{
				cout << "Ingrese valor tipo Cadena: ";
				RegistroCadena v;

				cin >> v.valor;

				archivoTabla.seekp(0, ios::end); //ubicarse al final
				archivoTabla.write(reinterpret_cast<const char*>(&v), sizeof(RegistroCadena));
			}
			break;
			case TipoCampo::t_Char:
			{
				cout << "Ingrese valor tipo Caracter: ";
				RegistroCaracter v;
				cin >> v.valor;
				archivoTabla.seekp(0, ios::end); //ubicarse al final
				archivoTabla.write(reinterpret_cast<const char*>(&v), sizeof(RegistroCaracter));
			}
			break;
			case TipoCampo::t_Decimal:
			{
				cout << "Ingrese valor tipo Decimal: ";
				RegistroDecimal v;
				cin >> v.valor;
				archivoTabla.seekp(0, ios::end);
				archivoTabla.write(reinterpret_cast<const char*>(&v), sizeof(RegistroDecimal));

			}
			break;
			case TipoCampo::t_Logico:
			{
				cout << "Ingrese valor tipo Logico: ";
				int vLogico;
				cin >> vLogico;
				RegistroLogico v;

				(vLogico == 1) ? v.valor = true : v.valor = false;

				archivoTabla.seekp(0, ios::end);
				archivoTabla.write(reinterpret_cast<const char*>(&v), sizeof(RegistroLogico));
			}
			break;
			} //FIN SWITCH

		}//FIN DE FOR CAMPOS
	}//FIN DE FOR REGISTROS

	cout << "�Archivo creado correctamente!";

	archivoTabla.close();
	
	archivoTabla.open( nombreTabla , ios::in | ios::binary);
	InfoTabla info;
	InfoCampo campo;
	archivoTabla.seekg(sizeof(info), ios::beg);
	TipoCampo* tipoC = new TipoCampo[cantCampos];
	
	for (int i = 0; i < cantCampos; i++) {
		archivoTabla.read((char*)&campo, sizeof(campo));
		tipoC[i] = campo.tipoCampo;
		cout << " " << campo.nombreCampo;
	}
	cout <<endl;

	for (int i = 0; i < cantRegistros; i++) {
		for (int j = 0; j < cantCampos; j++) {
			switch (tipoC[j]) {
			case TipoCampo::t_Entero: {
				RegistroEntero num;

				archivoTabla.read((char*)&num.valor, sizeof(RegistroEntero));
				std::cout << '|' << num.valor << '|';
				break;
			}
			case TipoCampo::t_Cadena: {
				RegistroCadena cade;

				archivoTabla.read((char*)&cade.valor, sizeof(RegistroCadena));
				std::cout << '|' << cade.valor << '|';
				break;
			}
			case TipoCampo::t_Char: {
				RegistroCaracter cha;

				archivoTabla.read((char*)&cha.valor, sizeof(RegistroCaracter));
				std::cout << '|' << cha.valor << '|';
				break;
			}
			case TipoCampo::t_Decimal: {
				RegistroDecimal dec;

				archivoTabla.read((char*)&dec.valor, sizeof(RegistroDecimal));
				std::cout << '|' << dec.valor << '|';
				break;
			}
			case TipoCampo::t_Logico: {
				RegistroLogico lol;
				archivoTabla.read((char*)&lol.valor, sizeof(RegistroLogico));
				std::cout << '|' <<lol.valor << 'l';
				break;
			}
			}
		}
		cout << endl;
	}
	cout << endl;
	archivoTabla.close();
	_getch();
}



