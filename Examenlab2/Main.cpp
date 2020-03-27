#include "ListaEmpleados.h"

int main() {
	ListaEmpleado ver;
	ver.agregarEmpleado(21911298, "Selvin", 5000);
	ver.agregarEmpleado(21911297, "Selvi", 500);
	ver.agregarEmpleado(21911296, "Selv", 50);
	ver.agregarEmpleado(21911295, "Sel", 5);
	ver.agregarEmpleado(21911294, "Se", 50000);
	ver.desactivarEmpleado(21911297);
	ver.imprimirLista();
	ver.guardarEmpleado();




}