#include <iostream>

using namespace std;

const int N = 6;
typedef int tNumeros[N];

void mostrarNumeros(tNumeros numeros);
// Pide los numeros al usuario y los guarda en el
// parametro de salida
void pedirNumeros(tNumeros numeros);
// Obtiene el máximo valor
int maximo(tNumeros numeros);
// Calcula el doble de los numeros y lo guarda parametro dobles
void calcularDobles(tNumeros numeros, tNumeros dobles);
// Duplica los valores del parámetro numero de entrada/salida
void duplicar(tNumeros numeros);
// Invierte el orden de los numeros de entrada en la salida invertidos
void invertir(tNumeros numeros, tNumeros invertidos);
// Indica sin un array de numeros el palíndromo
bool esPalindrome(tNumeros numeros);
// Indica si dos arrays son iguales
bool sonIguales(tNumeros numeros1, tNumeros numeros2);
// Indica si el segundo array es el inverso del primero
bool sonInvertidos(tNumeros numeros1, tNumeros numeros2);
// Indica si el segundo array es el inverso del primero
// Solución alternativa
bool sonInvertidosAlt(tNumeros numeros1, tNumeros numeros2);
// Devuelve la posición del primer par o -1 si no hay pares
int posPar(tNumeros numeros);

int main()
{
    //tNumeros numeros={3, 7, 3, 2, 9, 1};
    tNumeros numeros, numeros1, numeros2, dobles, invertidos;
    pedirNumeros(numeros);
    //pedirNumeros(numeros2);
    cout<<"Posicion del primer par: "<<posPar(numeros);
    //if(sonInvertidosAlt(numeros1, numeros2))
    //    cout<<"Son Invertidos"<<endl;
    //if(sonIguales(numeros1, numeros2))
    //    cout<<"Son Iguales"<<endl;
    //if(esPalindrome((numeros)))
    //    cout << "En un numero palindrome"<<endl;
    //calcularDobles(numeros, dobles);
    //invertir(numeros, invertidos);
    //mostrarNumeros(invertidos);
    //mostrarNumeros(dobles);
    //int maxVal = maximo(numeros);
    //cout <<"Maximo valor: "<<maxVal<<endl;
    return 0;
}

// Devuelve la posición del primer par o -1 si no hay pares
int posPar(tNumeros numeros){
   bool encontrado = false;
   int pos = 0;
   while (pos<N && !encontrado){
        if(numeros[pos]%2==0)
            encontrado= true;
        else
            pos++;
   }
   if (pos==N)
        pos= -1;
   return pos;
}

// Indica si el segundo array es el inverso del primero
// Solución alternativa
bool sonInvertidosAlt(tNumeros numeros1, tNumeros numeros2){
    bool iguales = true;
    int i=0;
    while(i<N && iguales){
        if(numeros1[i]!= numeros2[N-1-i])
            iguales = false;
        i++;
    }
    return iguales;
}

// Indica si el segundo array es el inverso del primero
bool sonInvertidos(tNumeros numeros1, tNumeros numeros2){
    // Invertimos el primer parámetro
    tNumeros invertidos;
    invertir(numeros1, invertidos);
    // Comparamos en invertido con el segundo párametro
    return sonIguales(invertidos, numeros2);
}

// Indica si dos arrays son iguales
bool sonIguales(tNumeros numeros1, tNumeros numeros2){
    bool iguales = true;
    int i=0;
    while(i<N && iguales){
        if(numeros1[i]!= numeros2[i])
            iguales = false;
        i++;
    }
    return iguales;
}

// Indica sin un array de numeros el palíndromo
bool esPalindrome(tNumeros numeros){
    bool palindrome = true;
    int i=0;
    while (i<(N/2)  && palindrome){
        palindrome = palindrome && (numeros[i]==numeros[N-1-i]);
        i++;
    }
    return palindrome;
}

// Invierte el orden de los numeros de entrada en la salida invertidos
void invertir(tNumeros numeros, tNumeros invertidos){
    for(int i=0; i<N; i++){
        invertidos[N-1-i] = numeros[i];
    }
}

// Duplica los valores del parámetro numero de entrada/salida
void duplicar(tNumeros numeros){
    for(int i=0; i<N; i++){
        numeros[i]= 2*numeros[i];
    }
}

// Calcula el doble de los numeros y lo guarda parametro dobles
void calcularDobles(tNumeros numeros, tNumeros dobles){
    for(int i=0; i<N; i++){
        dobles[i]= 2*numeros[i];
    }
}

// Obtiene el máximo valor
int maximo(tNumeros numeros){
    int resultado;
    if(N==0){
        resultado=-1;
    }else{
        resultado=0;
        for(int i=0; i<N; i++){
            if(numeros[i]>resultado){
                resultado = numeros[i];
            }
        }
    }
    return resultado;
}

// Pide los numeros al usuario y los guarda en el
// parametro de salida
void pedirNumeros(tNumeros numeros){
    cout << "Introduce "<<N<<" valores: "<<endl;
    for(int i=0; i<N; i++){
        cin>> numeros[i];
    }
}

// Muestra el contenido del array
void mostrarNumeros(tNumeros numeros){
    for(int i=0; i<N; i++){
        cout<< numeros[i]<<" ";
    }
    cout <<endl;
}

