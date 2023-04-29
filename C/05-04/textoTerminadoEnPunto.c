// Ignacio Fernandez

// Ingresar un texto terminado en .(punto), e indicar cantidad de vocales y consonantes.

#include <stdlib.h>
#include <stdio.h>

int main()
{
    char caracter;
    int vocales = 0, consonantes = 0;

    printf("Ingrese un texto terminado en punto: \n");

    scanf("%c",&caracter);
    
    while(caracter != '.')
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

        scanf("%c",&caracter);
    }

    printf("Vocales: %d\n",vocales);
    printf("Consonantes: %d\n",consonantes);
    
    
    system("PAUSE");
    return 0;
}





// Usando ASCII: https://elcodigoascii.com.ar/

        // // Switch (No estoy muy seguro de si ya podemos utilizarlo, se mencionó en clase pero nunca se utilizó aún.)
        // if((caracter >= 65 && caracter >= 90) || (caracter >= 97 && caracter >= 122) || caracter == 164  || caracter == 165){ // Si está en el rango de las letras (Mayus, Min, ñ)
        //     switch (caracter)
        //     {
        //         case 'a':
        //         case 'A':
        //         case 'e':
        //         case 'E':
        //         case 'i':
        //         case 'I':
        //         case 'o':
        //         case 'O':
        //         case 'u':
        //         case 'U':
        //             vocales++;
        //             break;
        //         default:
        //             consonantes++;
        //             break;
        //     }
        // }