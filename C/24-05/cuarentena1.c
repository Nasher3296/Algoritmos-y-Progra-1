/*

Se pide un programa que analice los datos de la “Cuarentena” del año 2020 que comenzó el viernes 20 de Marzo.

1) Ingresar los infectados por cada día del año 2020.
2) Informar que día de la cuarentena fue el Pico.
3) Mostrar un listado de cantidad de infectados y día ordenado por cantidad de infectados.
4) Ingresar un día de cuarentena e indicar cuantos infectados hubo.

5) Indicar cual fue el domingo con menos infectados
6) Indicar cual fue el sábado con menos infectados

*/

#include <stdio.h>
#include <stdbool.h>
#include <stdbool.h>

#define MAX_DIAS 4
#define DIAS_SEMANA 7

typedef int TInfectados[MAX_DIAS];
typedef int TDias[MAX_DIAS];

/// PUNTO 1 ///
void cargar_datos(TInfectados infectados, int ml)
{
    int i;
    printf("\nIngrese los datos de los infectados por día\n");
    for (i = 0; i < ml; i++)
    {
        printf("\t%d): ", i + 1);
        scanf("%d", &infectados[i]);
    }
}
/// FIN PUNTO 1 ///

/// PUNTO 2 ///
int calcular_dia_pico(TInfectados infectados, int ml)
{

    int i;
    int maxInfectados = infectados[0];
    int maxDia = 0;

    for (i = 1; i < ml; i++)
    {
        if (infectados[i] > maxInfectados)
        {
            maxInfectados = infectados[i];
            maxDia = i;
        }
    }
    return maxDia;
}

void informar_dia_pico(TInfectados infectados, int ml)
{
    int maxDia = calcular_dia_pico(infectados, ml);

    printf("\nEl día con más infectados fue el %d con %d infectados", maxDia + 1, infectados[maxDia]);
}


/// FIN PUNTO 2 ///

/// PUNTO 3 ///
void inicializar_vector(TDias vecDias, int ml)
{
    int i;
    for (i = 0; i < ml; i++)
    {
        vecDias[i] = i + 1;
    }
    
}

void ordenar_infectados(TInfectados infectados, int ml, TDias vecDias){

    int auxInfectados;
    int auxDias;
    int i;
    bool seguir = true;
    
    while(seguir)
    {
        ml--;
        seguir = false;
        for(i = 0 ; i < ml ; i++)
        {
            if(infectados[i] < infectados[i+1])
            {
                seguir = true;
                auxInfectados = infectados[i];
                infectados[i] = infectados[i+1];
                infectados[i+1] = auxInfectados;

                auxDias = vecDias[i];
                vecDias[i] = vecDias[i+1];
                vecDias[i+1] = auxDias;
            }
        }
    }
    
}

void imprimir_vector_infectados(TInfectados infectados, int ml, TDias vecDias){
    int i;

    printf("\n\tINFECTADOS\tDIAS");
    for (i = 0; i < ml; i++)
    {
        printf("\n\t%6d\t\t%2d",infectados[i],vecDias[i]);
    }
    
}
/// FIN PUNTO 3 ///

/// PUNTO 4 ///
int ingreso_consulta_dia()
{
    int dia;
    printf("\nIngrese un dia: ");
    scanf("%d",&dia);
    return dia;
}

int buscar_dia(int ml, TDias vecDias, int dia)
{
    int i=0;
    int posicion = -1; // -1 es no encontrado
    bool encontrado=false;
    
    while (!encontrado && i<ml) {
        if (vecDias[i] == dia)
        {
            encontrado=true;
            posicion=i;
        }
        i++;
    }

    return posicion;
}

void infectados_en_dia(TInfectados infectados, int ml, TDias vecDias)
{
    int dia = ingreso_consulta_dia();
    int indice = buscar_dia(ml, vecDias, dia);
    
    if(indice < 0)
        printf("\nNo existen registros de la fecha solicitada");
    else
        printf("\nEl día %d hubo %d infectados.", dia, infectados[indice]);

}
/// FIN PUNTO 4 ///

int main()
{
    TInfectados infectados;
    TDias vecDias;
    // COMPLETAR DECLARACIONES
    // COMPLETAR MAIN
    cargar_datos(infectados, MAX_DIAS);//1
    informar_dia_pico(infectados, MAX_DIAS);//2
    inicializar_vector(vecDias, MAX_DIAS);//3
    ordenar_infectados(infectados, MAX_DIAS, vecDias);
    imprimir_vector_infectados(infectados, MAX_DIAS, vecDias);
    infectados_en_dia(infectados, MAX_DIAS, vecDias);//4
    
    
    return 0;
}


