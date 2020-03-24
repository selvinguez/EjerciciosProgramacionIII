#include "Stack.h"

int main() {
	Stack Probar;
	
	Probar.Push("HOLA",545);
	Probar.Push("LOLO", 545);
	Probar.Push("ANDER", 545);
	Probar.pop();
	Probar.print();
	Probar.savetofile();

}