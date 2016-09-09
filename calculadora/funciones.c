#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int suma(int a, int b)
{
    int resultado = a + b;
    return resultado;
}

int resta(int a, int b)
{
    int resultado = a - b;
    return resultado;
}

int multip(int a, int b)
{
    int resultado = a * b;
    return resultado;
}

float division(float a, float b)
{
    float resultado = a / b;
    return resultado;
}

int charAInt(int a, char b)
{
    a = b - '0';
    return a;
}

int valOpMen(char texto[], char error[], int desde, int hasta)
{
    int op;
    char respuesta;

    do
    {
        system("cls");
        printf("%s",texto);
        scanf("%d",&op);

        if(op <= hasta && op >= desde)
        {
            return op;
        }
            system("cls");
            printf("%s",error);
            fflush(stdin);
            scanf("%c",&respuesta);

     }
        while(respuesta=='s');

            return 0;



}

int factorial(int a) //factorial por metodo de recursividad
{
    int aux;
    if(a==0)
    {
       return 1;
    }

    aux = a * factorial(a-1);
    return (aux);
}



