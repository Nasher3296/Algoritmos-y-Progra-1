// Ignacio Fernández

// Se tiene un listado de alumnos que consiste en número de padrón y 4
// notas por alumno. Informar el mayor y el menor promedio registrado
// junto con el numero de padrón del alumno, suponiendo que ambos son únicos.
#define NOTAS 4

#include <stdlib.h>
#include <stdio.h>

int main()
{

    int padron;
    int mayPadron;
    int minPadron;
    float nota;
    float acumNotas;
    float prom;
    float mayProm;
    float minProm;
    int contador = 0;

    printf("Ingrese el número de padrón. 0 para terminar: ");
    scanf("%d", &padron);

    while (padron != 0)
    {
        acumNotas = 0.0;
        int i;
        for (i = 0; i < NOTAS; i++)
        {
            printf("Ingrese la nota numero %d: ", i + 1);
            scanf("%f", &nota);

            acumNotas += nota;
        }
        prom = acumNotas / NOTAS;
        if (contador == 0)
        {
            mayPadron = padron;
            mayProm = prom;
            minPadron = padron;
            minProm = prom;
        }
        else if (prom > mayProm)
        {
            mayPadron = padron;
            mayProm = prom;
        }
        else if (prom < minProm)
        {
            minPadron = padron;
            minProm = prom;
        }

        contador++;
        printf("Ingrese otro padrón. 0 para terminar: ");
        scanf("%d", &padron);
    }

    if (contador > 0)
    {
        printf("El alumno con padrón %d tiene el mayor promedio con %.2f\n", mayPadron, mayProm);
        printf("El alumno con padrón %d tiene el menor promedio con %.2f\n", minPadron, minProm);
    }
    else
    {
        printf("No se registaron ingresos\n");
    }

    system("PAUSE");
    return 0;
}