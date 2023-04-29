# Ignacio Fernández

# Escribir un programa que solicite el ingreso de una serie de números, de uno a la vez, hasta que la suma acumulada supere el valor 1000.
# Informar cuantos ingresos se hicieron y el total acumulado.

try:
    acumulador = 0.0
    contador = 0
    while acumulador <= 1000:
        contador += 1
        acumulador += float(input("Ingrese un número: "))
    print("Se acumuló",acumulador,"en",contador,"ingresos")
except:
    print("El dato ingresado no es válido")