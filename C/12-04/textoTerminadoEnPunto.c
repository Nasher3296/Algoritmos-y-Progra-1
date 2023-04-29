// Ignacio Fernandez

// Ingresar un texto terminado en .(punto), e indicar cantidad de vocales y consonantes.

#include <stdlib.h>
#include <stdio.h>

int main()
{
    char caracter, anterior = ',';
    int vocales = 0, consonantes = 0;

    printf("Ingrese un texto terminado en punto: \n");

    scanf("%c",&caracter);
    
    while(caracter != '\n')
    {
        
        if(    (caracter >= 'A' && caracter >= 'Z') 
            || (caracter >= 'a' && caracter >= 'z') 
            ||  caracter == 164 //ñ //Falla al comparar CHAR
            ||  caracter == 165 //Ñ
            ){ // Si está en el rango de las letras (Mayus, Min, ñ)
            if (    caracter == 'a' 
                ||  caracter == 'A' 
                ||  caracter == 'e' 
                ||  caracter == 'E' 
                ||  caracter == 'i' 
                ||  caracter == 'I' 
                ||  caracter == 'o' 
                ||  caracter == 'O' 
                ||  caracter == 'u' 
                ||  caracter == 'U'
                )
                vocales++;
            else
                consonantes++;
        }

        anterior = caracter;
        scanf("%c",&caracter);
    }

    if (anterior != '.')
    {
        printf("Error: El texto debía finalizar con un punto.\n");
    }else{
        printf("Vocales: %d\n",vocales);
        printf("Consonantes: %d\n",consonantes);
    }
    
    system("PAUSE");
    return 0;
}