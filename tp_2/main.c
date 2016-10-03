#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "fun.h"
#define cant 3
#define VACIO -1
#define OCUPADO 1
#define BAJA 0


int main()
{

    int j,h,cmp;
    int valorLugar=0;
    char dniStr[10];
    EPersona persona[cant];


    char seguir='s';
    int opcion;


    void inicializarArrayInt(EPersona persona[],int cantidad_de_elementos,int valor);
    int buscarValorPosicion(EPersona persona[],int cantidadDeElementos,int valor);
    int opcionMenu();


    inicializarArrayInt(persona,cant,VACIO);


    system("cls");

    //hardcodear(persona,3);

    while(seguir=='s')

    {


        opcion = opcionMenu();


        switch(opcion)
        {
        case 1:



            valorLugar = buscarValorPosicion(persona,cant,VACIO);

            if (valorLugar == -2)
            {
                printf("Se agotaron los lugares disponibles\n");
                system("pause");
                break;
            }

            getString("Ingrese el nombre de la persona: ",persona[valorLugar].nombre);


            getString("Ingrese el DNI: ",persona[valorLugar].dni);



            printf("Ingrese la edad: ");
            scanf("%d",&persona[valorLugar].edad);

            persona[valorLugar].estado=OCUPADO;

            printf("La persona --%s-- fue agregada con exito\n", persona[valorLugar].nombre);
            system("pause");



            break;
        case 2:


            printf("Por favor introduzca el DNI de la persona que desea eliminar de la lista: \n");

            for(j=0; j<cant; j++)
            {
                if(persona[j].estado==1)
                {
                    printf("nombre-->%s DNI:-->%s Edad:-->%d Estado:-->%d\n",persona[j].nombre,persona[j].dni,persona[j].edad,persona[j].estado);

                }
            }

            fflush(stdin);
            gets(dniStr);



            for(h=0; h<cant; h++)
            {
                cmp = strcmp(persona[h].dni,dniStr);
                if (cmp == 0)
                {
                    printf("La persona --%s-- fue borrada con exito\n",persona[h].nombre);
                    persona[h].estado = BAJA;
                    system("pause");
                    break;
                }
                if (h == cant - 1)
                {
                printf("No existe el DNI ingresado\n");
                system("pause");
                }
            }
            break;
        case 3:

            OrdenarNombres(persona,cant);
            system("pause");
            break;
        case 4:
            break;
        case 5:
            seguir = 'n';
            break;
        default:
            printf("\nLa opcion ingresada es incorrecta, vuelva a ingresar una opcion:\n");
            system("pause");

        }
    }

    return 0;
}
