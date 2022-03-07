##include <iostream>
using namespace std;
const int N = 5;
typedef int tArray[N];
// Obtiene la posicion y valor del minimo elemento, y
// devuelve si ha habido exito.
bool minimoElemento(const tArray lista, int & pos, int & valor);
// Intercambia los elmentos de dos posiciones del array
bool intercambiaElementos(tArray lista, int pos1, int pos2);
// Muestra todos los elementos de la lista
void mostrarLista(const tArray lista);
// Obtiene la posicion y valor del mayor impar, y devuelve si ha
// ha habido exito
bool mayorImpar(const tArray  lista, int &posicion, int &valor);
// Intercambio los elementos de una lista de manera circular
// desplazando cada elemnto hacia la izquierda, salvo el primero.
void intercambiaElementosCircular(tArray lista);

int main()
{
    tArray lista = {7, -301, 101, -220, 3};
    intercambiaElementosCircular(lista);
    mostrarLista(lista);

    return 0;
}

// Intercambio los elementos de una lista de manera circular
// desplazando cada elemnto hacia la izquierda, salvo el primero.
void intercambiaElementosCircular(tArray lista){
    int aux = lista[0];
    for(int i=0; i<(N-1); i++){
        lista[i]=lista[i+1];
    }
    lista[N-1]=aux;
}

// Obtiene la posicion y valor del mayor impar, y devuelve si ha
// ha habido exito
bool mayorImpar(const tArray lista, int &posicion, int &valor){
    bool exito=false;
    for(int i=0; i<N; i++){
        if((lista[i]%2)==1){
            if(!exito){
                exito = true;
                valor = lista[i];
                posicion = i;
            }else{
                if(lista[i]>valor){
                    valor = lista[i];
                    posicion=i;
                }
            }
        }
    }
    return exito;
}

// Muestra todos los elementos de la lista
void mostrarLista(const tArray lista){
    cout <<"Lista: ";
    for(int i=0; i<N; i++){
        cout<<lista[i]<<", ";
    }
    cout <<endl;
}

// Intercambia los elmentos de dos posiciones del array
bool intercambiaElementos(tArray lista, int pos1, int pos2){
    if(pos1<0 || pos1>=N || pos2<0 || pos2>=N)
        return false;
    int aux = lista[pos1];
    lista[pos1]=lista[pos2];
    lista[pos2]=aux;
    return true;
}

bool minimoElemento(const tArray lista, int & pos, int & valor){
    // Caso excepcional
    if(N<=0){
        return false;
    }
    // Encontrar el minimo
    valor = lista[0];
    for (int i=1; i<N; i++){
        if(lista[i]<valor){
            valor=lista[i];
            pos = i;
        }
    }
    return true;
}


////// OTRAS PRUEBAS DEL MAIN //////
/*int posicion, valor;
    mayorImpar(lista, posicion, valor);
    cout<<"Posicion: "<<posicion<<". Valor: "<<valor;
    */

/*
/*
    string str = "hola";
    cout << str.at(1)<< (int)'c'-'a';
    tArray lista = {7, -300, 100, -220, 3};
    intercambiaElementos(lista, 1, 2);
    mostrarLista(lista);
    */
    /*
    int posMin, valorMin;
    bool exito;
    exito = minimoElemento(lista, posMin, valorMin);
    if(exito){
        cout << "Posicion minima: "<<posMin<< endl;
        cout << "Valor minimo: "<<valorMin<< endl;
    }*/

/*char letra = 'x';
    int posLetra = (int) (letra - 'a');
    char letra2 = (char)'a'+posLetra;
    cout << "Posicion Letra: "<<posLetra
        << "Letra recuperada: "<<letra2;

    string str = "hola";
    cout << str.at(1)<< (int)'c'-'a';
    */
