#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define TAMANIO 2
#define CANT_NOTAS 2

typedef struct
{
    char nombre[30];
    int padron;
    char email[50];
    int notas[CANT_NOTAS];
    float promedio;
} Alumno;

void cargar(Alumno vec[TAMANIO])
{
    int i;
    int j;
    float acumAux;

    for (i = 0; i < TAMANIO; i++)
    {
        acumAux = 0.0f;

        printf("\n|\tALUMNO %d\t|", i + 1);
        printf("\nIngrese el nombre: ");
        scanf("%s", &vec[i].nombre);

        printf("Ingrese el padrón: ");
        scanf("%s", &vec[i].padron);

        printf("Ingrese el email: ");
        scanf("%s", &vec[i].email);

        printf("Ingrese las notas del alumno:\n");
        for (j = 0; j < CANT_NOTAS; j++)
        {
            printf("\tNota %d: ", j + 1);
            scanf("%d", &vec[i].notas[j]);
            acumAux += vec[i].notas[j];
        }

        if (CANT_NOTAS != 0)
            vec[i].promedio = (float)(acumAux / CANT_NOTAS);
        else
            vec[i].promedio = 0;
    }
}

void cargarHardcoded(Alumno vec[TAMANIO])
{

    strcpy(vec[0].nombre, "juan");
    strcpy(vec[0].email, "juan@juan");
    vec[0].notas[0] = 3;
    vec[0].notas[1] = 9;
    vec[0].promedio = 6;
    vec[0].padron = 2;

    strcpy(vec[1].nombre, "pepe");
    strcpy(vec[1].email, "pepe@pepe");
    vec[1].notas[0] = 10;
    vec[1].notas[1] = 8;
    vec[1].padron = 1;
    vec[1].promedio = 9;
}

void mostrar(Alumno vec[TAMANIO])
{
    int i, j;
    printf("\n--- REGISTROS INGRESADOS ---\n\n");
    for (i = 0; i < TAMANIO; i++)
    {
        printf("|\tALUMNO %d\t|", i + 1);
        printf("\n\tPadron: %d", vec[i].padron);
        printf("\n\tNombre: %s", vec[i].nombre);
        printf("\n\tEmail: %s", vec[i].email);
        for (j = 0; j < CANT_NOTAS; j++)
        {
            printf("\n\t\tNota %d: %d", j + 1, vec[i].notas[j]);
        }
        printf("\n\tPromedio: %.2f\n\n", vec[i].promedio);
    }
}

int alumno_mayor_promedio(Alumno vec[TAMANIO])
{
    float maxProm = vec[0].promedio;
    int i = 0;
    while (i < TAMANIO - 1 && maxProm != 10)
    {
        i++;
        maxProm = vec[i].promedio > maxProm ? vec[i].promedio : maxProm;
    }

    return i;
}

void mostrar_mayor_promedio(Alumno vec[TAMANIO])
{
    int indice = alumno_mayor_promedio(vec);
    printf("\n\nEl alumno con mayor promedio es %s con un promedio de %.2f", vec[indice].nombre, vec[indice].promedio);
}

void mostrar_prom_general(Alumno vec[TAMANIO])
{
    int numNota;
    int i;
    float promGeneral = 0.0f;

    printf("\nDe que nota quiere ver el promedio general?\nIngrese 0 para mostrar el promedio de todas las notas: ");
    scanf("%d", &numNota);

    if (numNota == 0)
    {
        for (i = 0; i < TAMANIO; i++)
        {
            promGeneral += vec[i].promedio;
        }
    }
    else
    {
        for (i = 0; i < TAMANIO; i++)
        {
            promGeneral += vec[i].notas[numNota - 1];
        }
    }

    printf("\nEl promedio general del curso en la nota %d es de %.2f", numNota, TAMANIO != 0 ? (float)promGeneral / TAMANIO : 0);
}

void ordenar(Alumno vec[TAMANIO])
{
    Alumno alumnoAux;
    int ultimaPos = TAMANIO;
    bool continuar = true;
    int i;
    while (continuar)
    {
        continuar = false;
        ultimaPos--;

        for (i = 0; i < ultimaPos; i++)
        {
            if (vec[i].padron > vec[i + 1].padron)
                continuar = true;
            alumnoAux = vec[i];
            vec[i] = vec[i + 1];
            vec[i + 1] = alumnoAux;
        }
    }
}

int ingreso_padron_a_buscar()
{
    int padron;
    printf("\nIngrese el padrón a buscar: ");
    scanf("%d", &padron);
    return padron;
}

int buscar_por_padron(int padron, Alumno vec[TAMANIO])
{
    int inicio = 0;
    int fin = TAMANIO;
    bool encontrado = false;
    int medio;
    while (inicio <= fin && !encontrado)
    {
        medio = inicio + (fin - inicio) / 2;
        if (vec[medio].padron == padron)
            encontrado = true;
        if (vec[medio].padron < padron)
            inicio = medio + 1;
        else
            fin = medio - 1;
    }
    return encontrado ? medio : -1;
}

void mostrar_alumno(int indice, Alumno vec[TAMANIO])
{
    if(indice == -1)
    {
        printf("\nNo se encontró el padrón buscado");
    }
    else
    {
        printf("\n\tDatos del alumno padrón %d\t", vec[indice].padron);
        printf("\n\tNombre: %s", vec[indice].nombre);
        printf("\n\tEmail: %s", vec[indice].email);
        printf("\n\tPromedio: %.2f", vec[indice].promedio);
    }
}

void datos_alumno_padron(Alumno vec[TAMANIO])
{
    int padron = ingreso_padron_a_buscar();

    int indice = buscar_por_padron(padron, vec);

    mostrar_alumno(indice, vec);
}

int main()
{
    //Comento lineas para que no molesten mientras pruebo
    Alumno alumnos[TAMANIO];

    // cargar(alumnos);
    cargarHardcoded(alumnos); //Uso esto asi no tengo que cargar todo cada vez que lo corro xd
 
    mostrar(alumnos);

    mostrar_mayor_promedio(alumnos);

    // mostrar_prom_general(alumnos); 

    ordenar(alumnos);

    mostrar(alumnos);

    datos_alumno_padron(alumnos);

    return 0;
}


