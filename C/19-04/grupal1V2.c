// Ej grupal 1 V2 -->  Grupo 7

// Escribir una función que solicte al usuario un numero natural positivo entre 1 y 1000, y devuelva el valor válido ingresado.
// Solicitarlo multiples veces hasta que sea válido

#include <stdio.h>

#define MIN 1
#define MAX 1000

unsigned int input_range(int a, int b)
{
    // Ordeno los números
    if(b < a){
        a += b;
        b = a - b;
        a = a - b;
    }

    int num;
    printf("Ingrese un numero entre %d y %d: ", a, b);
    scanf("%d", &num);

    while (num < a || num > b)
    {
        printf("El numero debe estar entre %d y %d\n", a, b);
        printf("Ingrese un numero: ");
        scanf("%d", &num);
    }
    return num;
}

int main()
{
    printf("\nEl numero ingresado fue: %u", input_range(MIN, MAX));
    return 0;
}