// Calculadora. Ingresar 2 valores y un operador matematico (+,-,*,/,^) y devolver el resultado de la operacion. (^ representa la potencia)

// #include <stdlib.h>
#include <stdio.h>

int main()
{
    int i, errorCode = 1;
    float numA, numB, result = 1;
    char operacion;
    printf("Ingrese dos valores numéricos y un operador matemático (+,-,*,/,^) para obtener un resultado\n\n");

    printf("Num A: ");
    scanf("%f", &numA);

    printf("Num B: ");
    scanf("%f", &numB);

    // No estoy validando que este input sea correcto. Asumo que lo es
    printf("Operación: ");
    fflush(stdin);
    scanf("%c", &operacion);

    if (operacion == '+')
        result = numA + numB;
    else if (operacion == '-')
        result = numA - numB;
    else if (operacion == '*')
        result = numA * numB;
    else if (operacion == '/')
        if(numB != 0)
            result = numA / numB;
        else
            errorCode = -1; //No puede dividirse por 0
    else // operacion = ^
    {
        if (numB == 0)
            result = 1; //o indefinido
        else if(numB > 0)
            for (i = 0; i < numB; i++)
                result *= numA;
        else if(numA != 0){
            for (i = 0; i > numB; i--)
                result /= numA;
            if(numA < 0 && result > 0)
                result *= -1;
        }
        else 
            result = 0;
    }

    if(errorCode == 1)
        printf("%.2f %c %.2f = %.2f",numA, operacion, numB, result);
    else
        printf("No puede dividirse por 0");
    // system("PAUSE");
    return 0;
}