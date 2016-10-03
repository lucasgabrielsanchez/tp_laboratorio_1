#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "fun.h"

void getString(char mensaje[],char destino[])
{
    printf("%s",mensaje);
    fflush(stdin);
    scanf ("%s", destino);
}

void inicializarArrayInt(EPersona persona[],int cantidad_de_elementos,int valor)
{
    int m;
    for(m=0;m < cantidad_de_elementos; m++)
    {
        persona[m].estado = valor;
    }
}

int buscarValorPosicion(EPersona persona[],int cantidadDeElementos,int valor)
{
    int i;
    for(i=0;i < cantidadDeElementos; i++)
    {
        if(persona[i].estado == valor)
        {
            return i;
        }
    }
    return -2;
}

int opcionMenu()
{
    int opcion;

    system("cls");
        printf("1- Agregar persona\n");
        printf("2- Borrar persona\n");
        printf("3- Imprimir lista ordenada por  nombre\n");
        printf("4- Imprimir grafico de edades\n\n");
        printf("5- Salir\n");

        scanf("%d",&opcion);

        return opcion;
}

void hardcodear(EPersona persona[],int cantAux)
{
    char dniAux[10][20]={"50123456","45456789","43789456","40456123","35321654","30951753","25753159","20357951","15159753","10789321"};
    char nombreAux[10][50]={"Juana","Pedro","Marcela","Vanina","Daniel","Diana","Facundo","Laura","Lautaro","Andres"};
    int estadoAux[10]={1,1,1,1,1,1,1,1,1,1};
    int edadAux[10]={10,15,18,25,30,36,40,45,50,55};
    int i;

    for(i=0;i<cantAux;i++)
    {
        strcpy(persona[i].dni,dniAux[i]);
        strcpy(persona[i].nombre,nombreAux[i]);
        persona[i].estado=estadoAux[i];
        persona[i].edad=edadAux[i];
    }
}

void OrdenarNombres(EPersona persona[],int C)
{
    int i=0;
    int j=0;
    EPersona personaAux;
    for(i=0;i<C-1;i++)
    {
        if(persona[i].estado==1)
        {
            for(j=i+1;j<C;j++)
            {
                if(persona[j].estado==1)
                {
                    if (strcmp(persona[i].nombre,persona[j].nombre)>0)
                    {
                        personaAux=persona[i];
                        persona[i]=persona[j];
                        persona[j]=personaAux;
                    }
                }
            }
        }
    }
    for(i=0;i<C;i++)
    {
        if(persona[i].estado==1)
        {
           printf("nombre-->%s DNI:-->%s Edad:-->%d Estado:-->%d\n",persona[i].nombre,persona[i].dni,persona[i].edad,persona[i].estado);
        }

    }
}


//int esDni(char dni[])
//{
//
//}
