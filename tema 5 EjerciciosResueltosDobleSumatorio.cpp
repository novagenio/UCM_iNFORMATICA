#include <iostream>
using namespace std;

// Devuelve el doble del valor dado por parámetro
int doble (int valor);
// Devuelve el sumatorio desde uno haste el límite del parámetro
int sumatorio(int limiteSuperior);

// Función principal
int main()
{
    int valorEntrada;
    cout<< "Valor de Entrada: ";
    cin>>valorEntrada;
    cout << "El doble es " << doble(valorEntrada) << endl;
    cout << "El sumatorio es " << sumatorio(valorEntrada) << endl;
    return 0;
}

// Devuelve el sumatorio desde uno haste el límite del parámetro
int sumatorio(int limiteSuperior){
    int suma=0;
    for(int i=1; i<=limiteSuperior; i++){
        suma = suma + i;
    }
    return suma;
}

// Devuelve el doble del valor dado por parámetro
int doble (int valor){
    return 2*valor;
}
