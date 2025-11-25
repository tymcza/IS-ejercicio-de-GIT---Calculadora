#include "operations.h"
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
    if (getOperator() == "Add"){
        return add(getNum1(),getNum2());
    }
    else if (getOperator() == "Sub"){
        return sub(getNum1(), getNum2());
    }
    else if (getOperator() == "Mul"){
        return mul(getNum1(), getNum2());
    }
    else if (getOperator() == "Div"){
        if (getNum2() == 0){
            cout << "Error: Division por cero" << endl;
            return 0;
        }
        else return div(getNum1(), getNum2());
    }
    else if (getOperator() == "Exp"){
        return exp(getNum1(), getNum2());
    }
    else {
        cout << "Operador no valido" << endl;
        return 0;
    }
}



