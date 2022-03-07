#include <iostream>

using namespace std;

const int N = 10;
typedef long long int tFib[N];

const int NUM_ESTUD = 10;
typedef double tNotas[NUM_ESTUD];

typedef int tVector[N];


void mostrarFibonachi(){
    tFib fib;
    // Creación de la secuencia
    fib[0]=1;
    fib[1]=1;
    for(int i=2; i<N; i++){
        fib[i]=fib[i-1]+fib[i-2];
    }
    // Mostrar secuencia
    for(int i=0; i<N; i++){
        cout <<fib[i]<< " ";
    }
}

float mediaNotas(tNotas notas){
    float suma=0;
    for(int i=0; i<NUM_ESTUD; i++){
        suma = suma + notas[i];
    }
    return suma/NUM_ESTUD;
}

int numAprobados(tNotas notas){
    int contadorAprob=0;
    for(int i=0; i<NUM_ESTUD; i++){
        if(notas[i]>=5)
            contadorAprob++;
    }
    return contadorAprob;
}

void ejer2Arrays(){
    tNotas notas;
    // Leer notas
    for(int i=0; i<NUM_ESTUD; i++){
        cout << "Estudiante "<<i+1<<": ";
        cin>> notas[i];
    }
    // Mostrar Notas
    for(int i=0; i<NUM_ESTUD; i++){
        cout <<"Nota Estudiante "<<i+1<<": ";
        cout << notas[i]<<endl;
    }
    cout<<"La nota media es: "<<mediaNotas(notas)<<endl;
    int numAprob = numAprobados(notas);
    int numSusp = NUM_ESTUD - numAprob;
    cout<< "Hay "<<numSusp<<" suspensos y "
        <<numAprob<< " aprobados"<<endl;
}

// Calculas la suma de los elementos en posiciones pares
int sumaPosPares(tVector arrayEnteros){
    int suma=0;
    for(int i=0; i<N; i=i+2){
        suma = suma + arrayEnteros[i];
    }
    return suma;
}

// Ejercicio 3a
void ejer3Aarrays(){
    tVector arrayEnteros;
    cout << "Introduce los "<<N<<"enteros: ";
    for(int i=0;i <N; i++){
        cin>>arrayEnteros[i];
    }
    int suma = sumaPosPares(arrayEnteros);
    cout <<"La suma de posiciones pares es: "<< suma;
}

int main()
{
    //mostrarFibonachi();
    //ejer2Arrays();
    ejer3Aarrays();
    return 0;
}

