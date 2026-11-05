#include <iostream>
#include "aritmetica.h"
using namespace std;

int suma(int a, int b) {
    return a + b;
}

int resta(int a, int b) {
    return a - b;
}

int multiplicacion(int a, int b) {
    return a * b;
}

int division(int a, int b) {
    if (b == 0) {
        cerr << "Error: División por cero." << endl;
        return 0; // O manejar el error de otra manera
    }
    return a / b;
}

int modulo(int a, int b) {
    if (b == 0) {
        cerr << "Error: Módulo por cero." << endl;
        return 0; // O manejar el error de otra manera
    }
    return a % b;
}