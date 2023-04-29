#include <stdlib.h>
#include <stdio.h>

int main()
{   
    char letra1, letra2, i;
    printf("Ingrese dos letras y el programa imprimirá las letras entre ellas\n");

    printf("Letra 1: ");
    scanf("%c",&letra1);
    fflush(stdin);
    printf("Letra 2: ");
    scanf("%c",&letra2);
    fflush(stdin);

    if(letra2 < letra1){
        letra1 = letra1 + letra2;
        letra2 = letra1 - letra2;
        letra1 = letra1 - letra2;
    }

    for(i = letra1; i <= letra2; i++){
        printf("%c",i);
    }
    return 0;
}

