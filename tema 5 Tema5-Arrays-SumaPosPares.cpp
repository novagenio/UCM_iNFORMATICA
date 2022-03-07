#include <iostream>
using namespace std;
const int N = 10;
typedef int tVector[N];

/** Devuelve la suma de las posiciones pares.*/
int sumaPosPares(tVector lista){
    int suma=0;
    for(int i=0; i<N; i+=2){
        suma = suma + lista[i];
    }
    return suma;
}
int main()
{
    tVector lista={7, 9, 3, 2, 5, 8, 9, 4, 9, 1};
    int suma = sumaPosPares(lista);
    cout << "La suma es " << suma << endl;
    return 0;
}
