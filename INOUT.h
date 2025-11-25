#pragma once
#include <iostream>
#include <iomanip>
#include <string>
#include <stdexcept>
#include <limits>

using namespace std;

typedef struct tDatos {
    double num1;
    double num2;
    string operador;
};

tDatos lectura();
void mostrarSolucion(double sol);
void mostrarError(string error);
void mensajeInicio();
void help();
double getNum1(tDatos datos);
double getNum2(tDatos datos);
string getOperator(tDatos datos);