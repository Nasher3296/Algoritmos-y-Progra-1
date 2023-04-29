// Escribir una función que solicite el ingreso de un valor que representa una cantidad de segundos.
// La misma deberá retornar el equivalente en días, horas, minutos y segundos.

// Se debe validar que el valor ingresado sea entero y positivo, de lo contrario, deberá mostrarse el mensaje: “Valor ingresado inválido”.


// Conversión de segs a DD:HH:MM:SS
#include <stdio.h>

void convert_seconds(unsigned long input_seconds, int *minutes, int *hours, int *days, int *seconds)
{
    *days = input_seconds / 86400;
    *hours = input_seconds % 86400 / 3600;
    *minutes = input_seconds % 86400 % 3600 / 60;
    *seconds = input_seconds % 86400 % 3600 % 60;
}

void print_times(unsigned long input_seconds)
{
    int minutes, hours, days, seconds;

    convert_seconds(input_seconds, &minutes, &hours, &days, &seconds);
    
    printf("%lu segundos equivalen a %d días, %d horas, %d minutos y %d segundos.\n", input_seconds, days,hours,minutes, seconds);
}

unsigned long input_seconds()
{
    long seg;
    printf("Ingrese la cantidad de segundos: ");
    scanf("%ld", &seg);

    while (seg < 0)
    {
        printf("Valor ingresado inválido. La cantidad de segundos debe ser positiva\n");
        printf("Ingrese la cantidad de segundos: ");
        scanf("%ld", &seg);
    }
    return seg;
}

int main()
{
    unsigned long seconds = input_seconds();
    print_times(seconds);
    return 0;
}