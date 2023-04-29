#include <stdio.h>

int sumar_dos_valores(int valor_1, int valor_2)
{
    int suma = valor_1 + valor_2;
    return suma;
}
void main()
{
    int total;
    total = sumar_dos_valores(10, 15);
    printf("Total: %i", total);
    return;
}