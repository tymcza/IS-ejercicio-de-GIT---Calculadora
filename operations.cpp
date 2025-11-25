
#include "operations.h"
#include <cmath>
#include "inout.h"

using namespace std;

double add(double num1, double num2) {
    return num1 + num2;
}

double sub(double num1, double num2) {
    return num1 - num2;
}

double mul(double num1, double num2) {
    return num1 * num2;
}

double div(double num1, double num2) {
    return num1 / num2;
}

double exp(double num1, double num2) {
    return pow(num1, num2);
}

double execute(tDatos datos) {
    if (getOperator(datos) == "Add") {
        return add(getNum1(datos), getNum2(datos));
    }
    else if (getOperator(datos) == "Sub") {
        return sub(getNum1(datos), getNum2(datos));
    }
    else if (getOperator(datos) == "Mul") {
        return mul(getNum1(datos), getNum2(datos));
    }
    else if (getOperator(datos) == "Div") {
        if (getNum2(datos) == 0) {
            mostrarError("Division por cero");
            return 0;
        }
        else
            return div(getNum1(datos), getNum2(datos));
    }
    else if (getOperator(datos) == "Exp") {
        if (getNum1(datos) == 0 && getNum2(datos) == 0) {
            mostrarError("0 no puede ser elevado a 0");
            return 0;
        }
        else
            return exp(getNum1(datos), getNum2(datos));
    }
    else {
        mostrarError("Operador no valido");
        return 0;
    }
}
