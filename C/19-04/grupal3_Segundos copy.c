// Escribir una función que solicite el ingreso de un valor que representa una cantidad de segundos.
// La misma deberá retornar el equivalente en días, horas, minutos y segundos.

// Se debe validar que el valor ingresado sea entero y positivo, de lo contrario, deberá mostrarse el mensaje: “Valor ingresado inválido”.

#include <stdio.h>

// Conversión de segs a Dias
// Conversión de segs a Horas
// Conversión de segs a Minutos
// Conversión de segs a Segundos
void convert_seconds(unsigned long seconds, int *minutes, int *hours, int *days)
{
    *minutes = (seconds) / 60;
    *hours = (seconds) / (60 * 60);
    *days = (seconds) / (60 * 60 * 24);
}

void print_times(unsigned long seconds)
{
    int minutes, hours, days;

    convert_seconds(seconds, &minutes, &hours, &days);
    
    printf("%lu segundos equivalen a %d días, %d horas y %d minutos.\n", seconds, days,hours,minutes);
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