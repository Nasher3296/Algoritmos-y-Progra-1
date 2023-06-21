#include <stdio.h>
#include <stdbool.h>

long int solicitar_seg(){  
    long int segundos;          //funcion para que ingresen los segundos
    printf("Ingrese la cantidad de segundos (ingrese 0 para terminar): \n");
    scanf("%ld", &segundos);
    return segundos;
}

bool seg_validos(long int seg){                         //funcion para comprobar que los segundos ingresados son enteros y positivos
    return seg >= 0;
}

void convertir_unidades(long int *dias, long int *horas, long int *minutos, long int *segundos){  //funcion para converitr los segundos
    *dias = (long int) (*segundos / 86400);
    *horas = (long int) ((*segundos % 86400) / 3600);
    *minutos = (long int) (((*segundos % 86400) % 3600)) / 60;
    *segundos = (long int) ((((*segundos % 86400) % 3600)) % 60);
}

void imprimir_resultado(long int dias, long int horas, long int minutos, long int segundos){      //funcion para imprimir la conversion
    printf("Los segundos ingresados corresponden a %ld dias, %ld horas, %ld minutos, %ld segundos.\n", dias, horas, minutos, segundos);
}

int main(){
    long int dias, horas, minutos, segundos;
    bool validacion = true;

    segundos = solicitar_seg();

    while(segundos != 0){
        if(seg_validos(segundos)){
            convertir_unidades(&dias, &horas, &minutos, &segundos);
            imprimir_resultado(dias, horas, minutos, segundos);
        }else{
            printf("Valor ingresado invalido.\n");
        }
        segundos = solicitar_seg();
    }
    return 0;
}