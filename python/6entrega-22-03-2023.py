# Ignacio Fernández

# Dada una serie de números ingresados de a uno.
# Indicar mayor, menor y promedio de la serie.
# El ingreso de números finaliza cuando el usario ingresa 0.

numero = float(input("Ingrese un numero. 0 para terminar: "))
mayor = numero
menor = numero
contador = 0
promedio = 0.0
while numero != 0:
    contador += 1
    promedio += numero
    if numero > mayor:
        mayor = numero
    elif numero < menor:
        menor = numero
    numero = float(input("Ingrese un numero. 0 para terminar: "))

contador = 1 if contador == 0 else contador
print("Mayor:",mayor,"| Menor:",menor,"| Promedio:",promedio/contador)