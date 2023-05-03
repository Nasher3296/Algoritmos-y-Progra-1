#include <stdio.h>
#include <stdbool.h>

#define CFIL 30
#define CCOL 40

typedef int Tmatriz[CFIL][CCOL];

bool imprimirMin(Tmatriz matriz, int maxFil, int maxCol)
{
    bool filaClonada = false;
    int i = 0, j;

    while (!filaClonada && i < maxFil - 1)
    {
        j = 0;
        while (matriz[i][j] == matriz[i + 1][j] && j < maxCol)
            j++;

        if (j == maxCol)
            filaClonada = true;

        i++;
    }

    return filaClonada;
}

int main()
{
    int min, contMin;

    Tmatriz matriz1 = {
        {1, 1, 1, 1},
        {1, 1, 1, 3},
        {1, 1, 1, 2}
    };

    printf("\nResultado: %c", imprimirMin(matriz1, 3, 4) ? 'S' : 'N');

   
    return 0;
}
