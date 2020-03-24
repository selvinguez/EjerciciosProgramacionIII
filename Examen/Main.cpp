#include "Stack.h"
#include <conio.h>

int main() {
	Stack Probar;
	
	Probar.Push("HOLA",545);
	Probar.Push("LOLO", 545);
	Probar.Push("ANDER", 545);
	
	Probar.print();
	//Probar.pop();
	Probar.savetofile();

	_getch();
}