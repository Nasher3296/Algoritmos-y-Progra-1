// Ingresar una serie de numeros entre -1000 y 1000 e indicar si esta ordenada en forma descendente.
// Condición de corte: 1001

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

int main()
{
    int num;
    int ant;
    bool orden = true;
    bool ingreso = false;

    printf("Ingrese una serie de numeros entre -1000 y 1000. \nEl programa va a indicarle si estan ordenados de forma ascendente.\n");

    printf("Ingrese un numero: ");
    scanf("%d", &num);
    ant = num;

    if (num >= -1000 && num <= 1000) //*1
    {
        ingreso = true;
    }

    while (num >= -1000 && num <= 1000)
    {
        // ingreso = true; //*1
        // if (num < ant) //*2
        if (orden && num < ant) //*2
            orden = false;
        ant = num;
        printf("Ingrese un numero: ");
        scanf("%d", &num);
    }

    if (ingreso)
    {
        if (orden)
            printf("\nLa lista esta ordenada");
        else
            printf("\nLa lista no esta ordenada");
    }
    else
        printf("\nNo se ingresó una lista\n");

    system("PAUSE");
    return 0;
}