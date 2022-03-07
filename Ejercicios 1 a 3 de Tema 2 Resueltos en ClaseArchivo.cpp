#include <iostream>

using namespace std;

const double PI = 3.141592;

void ejercicios1y2(){
    double radio, altura, volumen;
    radio = 14.5;
    altura = 26.79;
    volumen = PI * radio * radio * altura / 3;
    cout << "Volumen Cono:" << volumen;
}

void ejercicio3(){
    double gradosF, gradosC, cteMult, cteResta;
    cteMult = 5.0 / 9.0;
    cteResta = 32;
    // Pedir entrada al usuario
    cout << "Grados en Farenheit: ";
    cin >> gradosF;
    // Procesamiento
    gradosC = cteMult * (gradosF - cteResta);
    // Mostrar el valor al usuario
    cout<< "Grados en Celsius: " << gradosC;
}

void pruebas(){
    int a = 2, b = 3, c = 4;
    bool resultado;
    resultado = a < 5;
    cout << "Resultado: " << resultado;
}

int main()
{
    //ejercicios1y2();
    //ejercicio3();
    pruebas();
    return 0;
}