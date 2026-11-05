#include <iostream>
#include "Demos.h"
#include "aritmetica.h"
using namespace std;

// Implementacion
void DemoFuncionesMatematicas(){
    int x = 10;
    int y = 3;

    cout << "SumaF: " << suma(x, y) << endl;
    cout << "RestaF: " << resta(x, y) << endl;
    cout << "MultiplicaciónF: " << multiplicacion(x, y) << endl;
    cout << "DivisiónF: " << division(x, y) << endl;
    cout << "MóduloF: " << modulo(x, y) << endl;
    cout << "Negativo: "<< neg(x)<<endl;
}