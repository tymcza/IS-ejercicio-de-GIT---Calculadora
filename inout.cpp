#include <iostream>
#include <iomanip>
#include <string>
#include <stdexcept>
#include <limits>
#include "inout.h"

using namespace std;

tDatos lectura() {
    string in_operador;
    double in_num1, in_num2;
    if (cin >> in_operador) {
        tDatos input;
        input.operador = in_operador;
        if (getOperator(input) != "Help" && getOperator(input) != "Exit") {
            cin >> in_num1 >> in_num2;
            input.num1 = in_num1;
            input.num2 = in_num2;
        }
        return input;
    }
    else {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        throw runtime_error("Error de lectura\n\nVerifica su input - [operacion] [int1] [int2]");
    }
}

void mostrarSolucion(double sol) {
    cout << " :" << sol << endl;
}

void mostrarError(string error) {
    cout << "Ha ocurrido un error" << endl;
    cout << error << endl;
}

void mensajeInicio() {
    cout << "------ Calculadora -----" << endl;
    cout << "Escribir el comando, el numero 1 y el numero 2\n";
    cout << "\t[Help] para mostrar operadores\n\t[Exit] para apagar calculadora\n";
}

void help() {
    cout << "Operaciones disponibles:" << endl;
    cout << "Help: muestra este mensaje de ayuda" << endl;
    cout << "Add: suma ambos numeros" << endl;
    cout << "Sub : resta el primero menos el segundo" << endl;
    cout << "Mul : multiplica ambos numeros" << endl;
    cout << "Div : divide el primero por el segundo" << endl;
    cout << "Exp : eleva el primero al segundo" << endl;
}

double getNum1(tDatos datos) { return datos.num1; }
double getNum2(tDatos datos) { return datos.num2; }
string getOperator(tDatos datos) { return datos.operador; }