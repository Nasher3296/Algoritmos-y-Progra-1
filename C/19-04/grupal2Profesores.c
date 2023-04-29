/* Enunciado:
Escribir una función que solicte al usuario un numero natural positivo entre 1 y 1000, y devuelva el valor válido ingresado.
Solicitarlo multiples veces hasta que sea válido
Ademas, indicar si es primo */


#include <stdio.h>
#include <stdbool.h>
#define MIN 1 
#define MAX 1000

int SolicitarNumeroValido (int min , int max){
    int NumeroIngresado;

    do{
        printf("Ingresa un numero natural positivo entre %d y %d: ", min, max);
        scanf("%d", &NumeroIngresado) ;
    } while (NumeroIngresado < min  || NumeroIngresado > max) ;
    
    return NumeroIngresado;

} 
bool VerificarPrimo (int NumeroIngresado){
    int divisores = 0, i = 1;
    bool primo;
    while (divisores < 2 && i <= NumeroIngresado / 2){
        if (NumeroIngresado % i == 0){
            divisores++;
        }
        i++;
    }
    primo = (! (divisores > 1 || NumeroIngresado == 1));
    
    return primo;
}

int main(){
    
    int PedileNumero;
    bool primo;

    PedileNumero = SolicitarNumeroValido(MIN,MAX);


    printf("Tu numero ingresado natural es: %d \n", PedileNumero);

    primo = VerificarPrimo(PedileNumero);
    if (primo)
        printf("El numero %d es primo ", PedileNumero);
    else 
        printf("El numero %d no es primo", PedileNumero);

    return 0;
}