// Ignacio Fernández
    
// Dada una serie de números ingresados de a uno.
// Indicar mayor, menor y promedio de la serie.
// El ingreso de números finaliza cuando el usario ingresa 0.

// GRACIAS GIANFRANCO SOS EL MEJOR
#include <stdlib.h>
#include <stdio.h>

int main()
{

    float numero = 0.0;
    float mayor = 0.0;
    float menor = 0.0;
    int contador = 0;
    float promedio = 0.0;

    printf("Ingrese un número. 0 para terminar: ");
    scanf("%f",&numero);
    
    menor = numero;
    mayor = numero;
    
    while(numero != 0.0){
        contador++;
        promedio += numero;

        if (numero > mayor)
            mayor = numero;
        else if (numero < menor)
            menor = numero;

        printf("Ingrese otro número. 0 para terminar: ");
        scanf("%f",&numero);
    }

    if(contador > 0){
        printf("Menor: %.2f\n",menor);
        printf("Mayor: %.2f\n",mayor);
        printf("Promedio: %.2f\n",promedio/ (float)contador);
    }else{
        printf("No se registaron ingresos\n");
    }
    
    system("PAUSE");
    return 0;

}