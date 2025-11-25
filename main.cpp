#include <iostream>
#include "operations.h"
#include "inout.h"
using namespace std;

int main() {
	mensajeInicio();

	tDatos datos = lectura();
	while (getOperator(datos) != "Exit") {
		if (getOperator(datos) != "Help")
			mostrarSolucion(execute(datos));
		else
			help();
		datos = lectura();
	}

	return 0;
}