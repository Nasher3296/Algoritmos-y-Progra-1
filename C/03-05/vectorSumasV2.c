// Asumiendo que Id estructura esta cargada en su totalidad, se solicita.
// Desarrollar una en lenguaje C que reciba Id estructura Yd
// cargada y dévuelva al modulo Invocante un vector que contenga en
// cada posición el promedio de los elementos de cada fila (promedio de
// todas las columnas por cada tila).
// Codificar solamente la tunçjon solicitada.

ESTE TODAVIA NO LO HICE ESTA COPIADO Y PEGADO DEL ANTERIOR XD
#include <stdio.h>

#define CCOL 3
#define CFIL 3

typedef int TvecCols[CCOL];
typedef TvecCols TvecFil[CFIL];

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