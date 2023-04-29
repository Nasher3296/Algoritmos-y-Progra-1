// Ingresar una seria de de numeros positivos (validar) en un vector.
// Invertir el vector y mostrar la serie invertida. con #incluide
// Grupo 3

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

#define MAX 15

typedef int Tvec[MAX];

//Firmas 
void invertirVector(Tvec v, int cant);
void ingreso(Tvec v, int *cant);
bool validar(int num);
void mostrar(Tvec v, int cant);

int main()
{
    Tvec v;
    int cant;
    ingreso(v, &cant);
    invertirVector(v, cant);
    mostrar(v, cant);
    return 0;
}

bool validar(int num)
{
    return num > 0;
}

void ingreso(Tvec v, int *cant)
{
    int i = 0;
    printf("Ingrese una serie de hasta %d numeros positivos: ",MAX);
    printf("\nNumero 1: ");
    scanf("%d", &v[i]);
    while (i < MAX - 1 && validar(v[i]))
    {
        i++;
        printf("Numero %d: ", i + 1);
        scanf("%d", &v[i]);
    }

    if (validar(v[i]))
        i++;

    *cant = i;
}

void invertirVector(Tvec v, int cant)
{
    int i;
    int aux;
    for (i = 0; i < cant / 2; i++)
    {
        aux = v[i];
        v[i] = v[cant - i - 1];
        v[cant - i - 1] = aux;
    }
}

void mostrar(Tvec v, int cant)
{
    printf("\nLista invertida: ");
    for (int i = 0; i < cant; i++)
        printf("\n%d", v[i]);
}
