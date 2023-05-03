// Asumiendo que la estructura esta cargada en su totalidad, se solicita:
// Desarrollar una funcion en lenguaje C que reciba la estructura ya
// cargada y devuelva al modulo invocante un vector que contenga en
// cada posición Ia suma de los elementos de cada fila (sumar todas las
// columnas por cada fila). Codificar solamente la función solicitada.

#include <stdio.h>

#define CCOL 3
#define CFIL 3

typedef int TvecFil[CFIL];
typedef TvecFil TvecCols[CCOL];

void sumas(TvecCols matriz, TvecFil vecSumas, int maxFil, int maxCol)
{
    int i, j;
    for (i = 0; i < CFIL; i++)
    {
        vecSumas[i] = 0; //Limpio basura
        for (j = 0; j < CFIL; j++)
        {
            vecSumas[i] += matriz[i][j];
        }
    }
}

int main()
{
    TvecFil vecSumas;
    TvecCols matriz = {
        {1,2,3},
        {2,2,3},
        {3,2,3}
    };
    
    sumas(matriz, vecSumas, CFIL, CCOL);

    printf("PRUEBA:\n");
    for (int i = 0; i < CFIL; i++)
    {
        printf("[%2d]",vecSumas[i]);
    }
    return 0;
}