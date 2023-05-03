#include <stdio.h>

#define CFIL 3
#define CCOL 4

typedef int Tmatriz[CFIL][CCOL];

void imprimirMin(Tmatriz matriz, int maxFil, int maxCol)
{
    int i, j;
    int min = matriz[0][0], contMin = 0;

    for(i=0 ; i < CFIL ; i++)
     for(j=0 ; j < CCOL ; j++)
     {
        if(matriz[i][j] == min)
            contMin++;
        else if(matriz[i][j] < min){
            min = matriz[i][j];
            contMin = 1;
        }
     }
    printf("\nEl valor mínimo es: %d",min);
    printf("\nTotal de apariciones: %d",contMin);
    printf("\n");
}

int main()
{
    Tmatriz matriz1 = {
            {3,2,2,4},
            {5,4,7,8},
            {2,3,4,3}
    };
    imprimirMin(matriz1, CFIL, CCOL);

    Tmatriz matriz2 = {
            {9,2,2,9},
            {5,-22,3,-23},
            {2,-23,4,-1}
    };
    imprimirMin(matriz2, CFIL, CCOL);

    Tmatriz matriz3 = {
            {1,1,1,1},
            {1,1,1,1},
            {1,1,1,1}
    };
    imprimirMin(matriz3, CFIL, CCOL);
    return 0;
}


