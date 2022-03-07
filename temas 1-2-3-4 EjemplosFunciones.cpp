#include <iostream>

using namespace std;
const int SIZE=100;
typedef int tNumeros[SIZE];

void linea(int tam);
int areaCuadrado(int lado);
void ponFinal(tNumeros numeros, int &numElems, int elem);
void ejemploVideoFunciones();

// Dibuja un rectangulo de asteriscos por consola de altura
// minima de dos.
void dibujarRectangulo(int ancho, int alto);
// Devuelve el area del triangulo equilatero
double areaTrianguloEquilatero(double ancho, double alto);
// Inserta en un array variable el elemento en una posicion dada
void insertar(tNumeros numeros, int &numElems, int elem, int pos);
void ejemploInsertar();
void mostrar(tNumeros numeros, int numElems);

int main()
{
    //ejemploVideoFunciones();
    //dibujarRectangulo(6, 4);
    //int ancho=10, alto=7;
    //float area;
    //dibujarRectangulo(ancho, alto);
    //area = areaTrianguloEquilatero(ancho, alto);
    //cout << "Area triangulo: "<<area<<endl;
    //cout << "Area triangulo 2: "<<areaTrianguloEquilatero(6, 4);
    ejemploInsertar();
    return 0;
}

void ejemploInsertar(){
    tNumeros numeros = {7, 5, 11, 0};
    int numElems = 4;
    int elem=123, pos=4;
    insertar(numeros, numElems, 8, 2);
    insertar(numeros, numElems, 100, 0);
    insertar(numeros, numElems, 333, 2);
    insertar(numeros, numElems, 777, 0);
    insertar(numeros, numElems, elem, pos);
    mostrar(numeros, numElems);
}

void mostrar(tNumeros numeros, int numElems){
    for(int i=0; i<numElems; i++)
        cout <<numeros[i]<<" ";
    cout <<endl;
}

void insertar(tNumeros numeros, int &numElems, int elem, int pos){
    for(int i=numElems; i>pos; i--){
        numeros[i]=numeros[i-1];
    }
    numeros[pos]=elem;
    numElems++;
}

double areaTrianguloEquilatero(double ancho, double alto){
    //double area = (ancho * alto) / 2;
    //return area;
    return (ancho * alto) / 2;
}

void dibujarRectangulo(int ancho, int alto){
    linea(ancho);
    for(int i=0; i<(alto-2); i++){
        cout << "*";
        for(int j=0; j<(ancho-2); j++){
            cout <<" ";
        }
        cout << "*" <<endl;
    }
    linea(ancho);
}

void ejemploVideoFunciones(){
    int areaCuad;
    int tam=10;
    linea(tam);
    areaCuad = areaCuadrado(tam);
    cout<<"Area del cuadrado: "<<areaCuad<<endl;
    tNumeros numeros;
    int numElems=0;
    ponFinal(numeros, numElems, 7);
    ponFinal(numeros, numElems, 5);
    ponFinal(numeros, numElems, 11);
    for(int i=0; i<numElems; i++)
        cout <<numeros[i]<<" ";
}

// Pone al final un elemento y actualizo el num. elementos
void ponFinal(tNumeros numeros, int &numElems, int elem){
    numeros[numElems]=elem;
    numElems++;
}

int areaCuadrado(int lado){
    int area = lado*lado;
    return area;
}

void linea(int longitud){
    for(int i=0; i<longitud; i++)
        cout<<"*";
    cout <<endl;
}
