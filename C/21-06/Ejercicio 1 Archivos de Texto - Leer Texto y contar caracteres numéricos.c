// Usando un editor de texto plano, por ejemplo el block de notas; crea un archivo TXT, llamado texto1.txt. 
// Escribí un texto corto, que comience con: 
// "Mi nombre es ........, y mi padrón es ...........
//  Nací el .......................".

// Luego escribí un programa modular en C, que lea el archivo que creaste y muestre por pantalla el texto, y luego indique la cantidad de caracteres numéricos que hay en el archivo".

// El archivo sólo se puede leer una vez.

#include <stdio.h>

int recorrer_archivo(FILE *file)
{
    char caracter = fgetc(file);
    int numericos = 0;

    while(caracter != EOF)
    {
        printf("%c",caracter);
        if(caracter >= '0' && caracter <= '9')
            numericos++;
        caracter = fgetc(file);
    }
    fclose(file);
    return numericos;
}

void mostrar_cant_num(int cant)
{
    printf("\nEn el archivo hay %d caracteres no numéricos",cant);
}

int main()
{
    FILE *file = fopen("files/texto1.txt", "rt");
    int numericos = recorrer_archivo(file);
    mostrar_cant_num(numericos);
    return 0;
}