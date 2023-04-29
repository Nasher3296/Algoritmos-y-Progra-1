// Ej grupal 1 /  Grupo 7

// Escribir una función que solicte al usuario un numero natural positivo entre 1 y 1000, y devuelva el valor válido ingresado.
// Solicitarlo multiples veces hasta que sea válido

#include <stdio.h>

#define MIN 1
#define MAX 1000

int input_range()
{
    int num;
    printf("Ingrese un numero entre %d y %d: ",MIN,MAX);
    scanf("%d", &num);

    while (num < MIN || num > MAX)
    {
        printf("El numero debe estar entre %d y $d\n",MIN,MAX);
        printf("Ingrese un numero: ");
        scanf("%d", &num);
    }
    return num;
}

int main()
{
    printf("\nEl numero ingresado fue: %d", input_range());
    return 0;
}