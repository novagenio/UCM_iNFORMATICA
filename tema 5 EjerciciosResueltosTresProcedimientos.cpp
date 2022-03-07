#include <iostream>

using namespace std;

// Decrementa un valor pasado por parámetro
void decrementa(int &valor);
// Intercambia tres valores de forma circular
void intercambia(int &valor1, int & valor2, int & valor3);
// Encuentra dos divisores de un número distintos de 1 y el mismo
// número
void dosDivisores(int numero, int &divisor1, int & divisor2,
    bool & existe);

int main()
{
    int num, divisor1, divisor2;
    bool existe;
    cout << "Introduzca un numero: ";
    cin >> num;
    dosDivisores(num, divisor1, divisor2, existe);
    if(existe)
        cout << "Dos divisores: "<<divisor1<<" "<<divisor2 << endl;
    else
        cout << "No existen divisores.";
    return 0;
}
// Encuentra dos divisores de un número distintos de 1 y el mismo
// número
void dosDivisores(int numero, int &divisor1, int & divisor2,
        bool & existe){
   existe = false;
   int contador=2;
   while (!existe && contador<numero){
        if((numero%contador)==0){
            existe = true;
            divisor1 = contador;
        }
        contador++;
   }
   if(existe)
        divisor2=numero/divisor1;
}

// Intercambia tres valores de forma circular
void intercambia(int &valor1, int & valor2, int & valor3){
    int aux = valor1;
    valor1 = valor2;
    valor2 = valor3;
    valor3 = aux;
}

// Decrementa un valor pasado por parámetro
void decrementa(int &valor){
    valor--;
}

