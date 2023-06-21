// Escribir un programa modular en C, que solicite el ingreso de un código de producto, y luego muestre los datos asociados al mismo, que se encuentran en el archivo productos.dat
// Si el código de producto no existe, debe mostrarse el mensaje "Código de Producto Inexistente".
// El programa debe continuar solicitando el ingreso de códigos de próducto hasta que se ingrese 0.



#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

typedef struct{
	int codigo;
	char descripcion[30];
	float cantidad;
}t_regProducto;


void busqueda_de_producto(FILE *fproductos);
int ingreso_cod();
void imprimir_prod(t_regProducto regProducto);

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
        busqueda_de_producto(fproductos);
        fclose(fproductos);
    }
    // system("pause");
    return 0;
}

void busqueda_de_producto(FILE *fproductos) 
{
    t_regProducto regProducto;
    int cod_prod = ingreso_cod();
    while(cod_prod != 0){
        fread(&regProducto, sizeof(regProducto), 1, fproductos);
        while (!feof(fproductos) && regProducto.codigo != cod_prod)
        {   
            fread(&regProducto, sizeof(regProducto), 1, fproductos);
        }

        if(feof(fproductos))
            printf("\nCódigo de Producto Inexistente");
        else
            imprimir_prod(regProducto);

        cod_prod = ingreso_cod();  
        //HELP!!!
        // fproductos = fopen("files/productos.dat", "rb"); //Reabro para volver a BOF. Sin esto estaría leyendo el final del archivo constantemente
    }
    return;
}


int ingreso_cod()
{
    int prod;
    printf("\nIngrese el código del producto a buscar: ");
    scanf("%d",&prod);
    return prod;
}

void imprimir_prod(t_regProducto regProducto)
{
    printf("\n\nDATOS DEL PRODUCTO %d",regProducto.codigo);
    printf("\nDescripcion: %s",regProducto.descripcion);
    printf("\nCantidad: %2.2f",regProducto.cantidad);
    printf("\n\n");
    return;
}