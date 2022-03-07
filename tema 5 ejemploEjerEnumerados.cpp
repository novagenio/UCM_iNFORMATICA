#include <iostream>

using namespace std;

typedef enum {lunes, martes, miercoles, jueves, viernes,
    sabado, domingo} tDiaSemana;

typedef enum {noPresentado, suspenso, aprobado, notable,
    sobresaliente, matriculaDeHonor} tCalificacion;

void ejemploDiaLaborable(){
    tDiaSemana dia = sabado;
    if(dia<=viernes){
        cout << "Dia Laborable";
    }else{
        cout<< "Fin de Semana";
    }
}

// Convierte de calificación a la cadena de carácteres
// representativa
string cadCalificacion(tCalificacion calif){
    string cad;
    if(calif==noPresentado)
        cad = "No presentado";
    else if (calif == suspenso)
        cad = "Suspenso";
    else if (calif == aprobado)
        cad = "Aprobado";
    else if (calif == notable)
        cad = "Notable";
    else if (calif == sobresaliente)
        cad = "Sobresaliente";
    else
        cad = "Matricula de Honor";
    return cad;
}

// Convierte una nota numérica en una calificación
tCalificacion notaACalificacion(double nota){
    tCalificacion calif;
    if (nota == 0)
        calif = noPresentado;
    else if(nota < 5)
        calif=suspenso;
    else if (nota<7)
        calif = aprobado;
    else if (nota<9)
        calif = notable;
    else if (nota<10)
        calif = sobresaliente;
    else
        calif = matriculaDeHonor;
    return calif;
}



void ejer1enumerados(){
    double nota1, nota2;
    tCalificacion calif1, calif2;
    cout<<"Nota 1: ";
    cin>>nota1;
    cout<<"Nota 2: ";
    cin>>nota2;
    calif1 = notaACalificacion(nota1);
    calif2 = notaACalificacion(nota2);
    cout<<"Nota 1: "<<nota1<<"("<<cadCalificacion(calif1)<<")"<<endl;
    cout<<"Nota 2: "<<nota2<<"("<<cadCalificacion(calif2)<<")"<<endl;

}

int main()
{
    //ejemploDiaLaborable();
    ejer1enumerados();
    return 0;
}