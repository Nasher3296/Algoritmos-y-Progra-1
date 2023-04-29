/* Enunciado:
Escribir una función que solicte al usuario un numero natural positivo entre 1 y 1000, y devuelva el valor válido ingresado.
Solicitarlo multiples veces hasta que sea válido

Imprimir si el numero es o no primo
*/

#include <stdio.h>
#include <stdbool.h>

#define MIN 1
#define MAX 1000

int SolicitarNumeroValido(int min, int max)
{
    int NumeroIngresado;

    do
    {
        printf("Ingresa un numero natural positivo entre %d y %d\n", min, max);
        scanf("%d", &NumeroIngresado);
    } while (NumeroIngresado < min || NumeroIngresado > max);

    return NumeroIngresado;
}

bool es_primo(int num)
{
    int i = 2;
    bool esPrimo = true;
    if (num < 2)
    {
        // numeros menores a 2 no son primos
        esPrimo = false;
    }
    else
    {
        while(esPrimo && i <= num / 2)
        {
            if (num % i == 0)
            {
                esPrimo = false;
            }
            i++;
        }
    }
    return esPrimo;
}

void imprimir_es_primo(int num)
{
    if (es_primo(num))
        printf("%d es primo", num);
    else
        printf("%d no es primo", num);
}

int main()
{

    int PedileNumero;

    PedileNumero = SolicitarNumeroValido(MIN, MAX);
    imprimir_es_primo(PedileNumero);

    return 0;
}
