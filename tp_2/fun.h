#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED




typedef struct {

    char nombre[50];
    int edad;
    int estado;
    char dni[10];

}EPersona;


void getString(char mensaje[],char destino[]);

void inicializarArrayInt(EPersona persona[],int cantidad_de_elementos,int valor);

int buscarValorPosicion(EPersona persona[],int cantidadDeElementos,int valor);

int opcionMenu();

void hardcodear(EPersona persona[],int cantAux);

void OrdenarNombres(EPersona persona[],int C);


#endif // FUNCIONES_H_INCLUDED

