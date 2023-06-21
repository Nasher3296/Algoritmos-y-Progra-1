// Escribir un programa modular en C, que permita listar los datos de los productos que se encuentran en el archivo productos.dat.
// La estructura de los registros es la siguiente:

// typedef struct{
// 	int codigo;
// 	char descripcion[30];
// 	float cantidad;
// }t_regProducto;
// El archivo sólo se puede leer una vez.
// Informar al final del listado, el total de Productos en Stock.
// Para la construcción del programa, podés utilizar el editor del intérprete o el IDE que prefieras.
// Luego copia y pega lo que hayas hecho en la caja de texto de esta actividad y efectuá la entrega de la misma.

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

typedef struct{
	int codigo;
	char descripcion[30];
	float cantidad;
}t_regProducto;


void listar_productos(FILE *fproductos);


int main()
{
    FILE *fproductos;

    fproductos = fopen("files/productos.dat", "rb");

    if(fproductos == NULL)
    {
        printf("No pudo abrirse el archivo.");
    }
    else
    {
        listar_productos(fproductos);
        fclose(fproductos);
    }
    return 0;
}

void listar_productos(FILE *fproductos)
{
    t_regProducto regProducto;
    float cant = 0.0;
    fread(&regProducto, sizeof(regProducto), 1, fproductos);

    if(!feof(fproductos)) //Uso esta alternativa en lugar de comparar con i == 0 para evitar la impresión del encabezado de la lista
    {
        printf("\nCODIGO \tDescripción \t\t\tCantidad");

        while (!feof(fproductos))
        {
            cant+= regProducto.cantidad;
            printf("\n%4d \t%-30s %8.2f",regProducto.codigo,regProducto.descripcion,regProducto.cantidad);
            fread(&regProducto, sizeof(regProducto), 1, fproductos);
        }
        printf("\n\nCantidad total de productos: \t%2.2f",cant);
    }
    else 
    {
        printf("No se encontaron registros");
    }
    return;
}