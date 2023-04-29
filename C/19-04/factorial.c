// Escribir una función que reciba un valor y calcule el factorial del mismo.
// Si no se puede calcular el factorial del valor recibido, la función deberá devolver 0, de lo contrario deberá devolver el valor calculado.

// Invocarla para los valores -8, 0, 1, 5; mostrando en cada caso lo que devuelve.

#include <stdio.h>

int factorial(int n)
{
    int i, factorial = 1;

    if (n < 0) // Corregido, en la entrega habia puesto n < 1
        return 0;

    for (i = 0; i < n; i++)
    {
        factorial *= n - i;
    }
    return factorial;
}

int main()
{
    printf("Factorial de -8 es %d\n", factorial(-8));
    printf("Factorial de 0 es %d\n", factorial(0));
    printf("Factorial de 1 es %d\n", factorial(1));
    printf("Factorial de 5 es %d\n", factorial(5));
    return 0;
}