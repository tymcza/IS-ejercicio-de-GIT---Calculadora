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

tDatos lectura(){
    string in_operador;
    double in_num1, in_num2;
    cout<<"\n> ";
    if (cin >> in_operador >> in_num1 >> in_num2){
        tDatos input;
        input.operador = in_operador;
        input.num1 = in_num1;
        input.num2 = in_num2;
        return input;
    } else {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        throw runtime_error("Error de lectura\n\nVerifica su input - [operacion] [int1] [int2]");
    }
}

void mostrarSolucion(double sol) {
    cout<< endl<<" :"<< sol;   
}

void mostrarError(string error){
    cout<<"Ha ocurrido un error\n\n";
    cout<<error;
}

void mensajeInicio(){
    cout<<"------ Calculadora -----"<<endl;
    cout<<"Escribir el comando, el numero 1 y el numero 2\n\n";
    cout<<"O solo uno de siguientes comandos:\n\t[Help] para mostrar operadores\n\t[Exit] para apagar calculadora";
}

void help(){
    cout<<"Operaciones disponibles:"<<endl;
}

double getNum1(tDatos datos) {return datos.num1;}
double getNum2(tDatos datos) {return datos.num2;}
string getOperator(tDatos datos) {return datos.operador;}