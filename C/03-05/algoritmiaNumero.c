#include <stdlib.h>
#include <stdio.h>

int multDigitPares(int num, int *producto)
{
    int i = 0;
    int digito;
    *producto = 1;
    while (num > 0)
    {
        digito = num % 10;
        if (digito % 2 == 0)
        {
            (*producto) *= digito;
            i++;
        }
        num = (num - digito) / 10; //Podría hacer num / 10 porque el compilador redondea para abajo
    }
    if(i == 0)
        *producto = 0;
    return i;
}

int main()
{
    int producto, cant, num;
    while(1==1){
        printf("\nNumero: ");
        scanf("%d",&num);
        cant = multDigitPares(num, &producto);
        printf("\nCANT: %d\nMULT: %d",cant, producto);
    }
    return 0;
}