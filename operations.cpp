#include <operations.h>
#include <cmath>
#include "inout.h"

using namespace std;

double add(double num1, double num2){
    return num1 + num2;
}

double sub(double num1, double num2){
    return num1 - num2;
}

double mul(double num1, double num2){
    return num1 * num2;
}

double div(double num1, double num2){
    return num1 / num2;
}

double exp(double num1, double num2){
    return pow(num1, num2);
}

double execute(tDatos datos){
    if (datos.getOperator() == "Add"){
        return add(datos.getNum1(), datos.getNum2());
    }
    else if (datos.getOperator() == "Sub"){
        return sub(datos.getNum1(), datos.getNum2());
    }
    else if (datos.getOperator() == "Mul"){
        return mul(datos.getNum1(), datos.getNum2());
    }
    else if (datos.getOperator() == "Div"){
        if (datos.getNum2() == 0){
            cout << "Error: Division por cero" << endl;
            return 0;
        }
        else return div(datos.getNum1(), datos.getNum2());
    }
    else if (datos.getOperator() == "Exp"){
        return exp(datos.getNum1(), datos.getNum2());
    }
    else {
        cout << "Operador no valido" << endl;
        return 0;
    }
}



