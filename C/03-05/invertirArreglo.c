// Completar el siguiente programa para que el arreglo vec quede invertido, es decir, evitar el uso de estructuras de datos y ciclos innecesarios.
#include <stdio.h>
#define MAX 6

int main()
{

    float vec[MAX] = {1.0,2.0,3.0,4.0,5.0,6.0};
    // Completar a partir de aquí
    int i;

    for(i = 0; i < MAX/2; i++)
    {
        vec[i] += vec[MAX-i-1];
        vec[MAX-i-1] = vec[i] - vec[MAX-i-1];
        vec[i] -= vec[MAX-i-1];
    }


    for(int i = 0; i < MAX; i++)
    {
        printf("[%.0f]",vec[i]);
    }

}
