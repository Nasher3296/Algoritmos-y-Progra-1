// Se pide un programa permita publicar productos a la venta por los alumnos de algoritmos 1. Se debe ingresar Código de producto nombre del producto, Descripcion, grupo y precio.
// Realizar una función que permita la carga de Productos.
// Informar un listado de productos ordenados por Nombre del producto
// Ingresar una palabra y realizar una búsqueda de productos que tengan dicha palabra en el nombre o descripción. 
// Realizar un listado de los 10 productos  mas caros
// Mostrar un listado ordenado por Código de producto
// Ingresar un código y mostrar todos los datos del producto.
// NOTA:

// - Los listados se deben mostrar:
//     Nombre 		Descripción	          Grupo 	Código
// XXXXXXXXXXXX    YYYYYYYYYYYYYY          1       1231
// - Los string tienen un máximo de 30 caracteres

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#incluse <string.h>

// Definiciones

#define MAX_PRODUCTOS 100
#define MAX_CARAC 31

typedef char TString[MAX_CARAC];

typedef struct{

    TString nombre;
    TString descripcion;
    int codigo;
    int grupo;
    float precio

} TProducto;

typedef TProducto TProductos[MAX_PRODUCTOS];


// Funciones



// Función main

void main(){

    TProductos Vproductos;
    int ml;

    cargar_productos(Vproductos, &ml); // 1

    ordenarPorNombre(Vproductos, ml); // 2

    listar(Vproductos, ml); // 3

    buscarPalabras(Vproductos, ml); // 4

    ordenarPorPrecio(Vproductos, ml); // 5

    listar(Vproductos, ml);

    ordenarPorCodigo(Vproductos, ml); // 6

    listar(Vproductos, ml);

    mostrarPorCodigo(Vproductos, ml); // 7

}





printf("out");