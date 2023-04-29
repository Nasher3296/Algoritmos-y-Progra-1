// Reproducir el siguiente código, reemplazando los valores del arreglo con cada uno de los dígitos de tu padrón/legajo.
// Además modificar el código para que se muestre del último elemento al primer elemento.
//Legajo 111019
#include <stdio.h>

void mostrar_datos(int v[], int ultima_pos)
{
    int i;
    // for (i = 0; i <= ultima_pos; i++)
    for (i = 0; i <= ultima_pos; i++)
        printf("%i \n", v[ultima_pos-i]);
}

void main()
{
    int v_nros[] = {1,1,1,0,1,9}; 
    mostrar_datos(v_nros, 5);
    return;
}