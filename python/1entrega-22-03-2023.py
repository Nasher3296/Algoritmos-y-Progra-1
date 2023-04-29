# Ignacio Fernández

# Escribir un programa que solicite el ingreso de dos números y luego informe cuál de los 2 es el mayor.
# En caso de ser iguales, debe informar que ambos son iguales.

try:
    numeroA = float(input("Ingrese el primer numero: "))
    numeroB = float(input("Ingrese el segundo numero: "))
    #uso de if solicitado por consigna en lugar de min/max
    if numeroA == numeroB:
        mensaje = "Los numeros son iguales"
    elif numeroA > numeroB:
        mensaje = "El primer numero (" + str(numeroA) + ") es mayor"
    else:
        mensaje = "El segundo numero (" + str(numeroB) + ") es mayor"

    print(mensaje)
except:
    print("El valor ingresado no es permitido")