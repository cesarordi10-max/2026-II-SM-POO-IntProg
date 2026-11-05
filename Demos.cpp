#include <iostream>
#include "Demos.h"
#include "aritmetica.h"
using namespace std;

void DemoAritmetica(){
    int a = 10;
    int b = 3;

    cout << "SumaF: " << suma(a, b) << endl;
    cout << "RestaF: " << resta(a, b) << endl;
    cout << "MultiplicaciónF: " << multiplicacion(a, b) << endl;
    cout << "DivisiónF: " << division(a, b) << endl;
    cout << "MóduloF: " << modulo(a, b) << endl;
}