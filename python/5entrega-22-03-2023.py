# Ignacio Fernández

# Escribir un programa que le solicite al usuario el ingreso de una temperatura y la unidad en la que se encuentra (F ó C). Luego el programa debe mostrar la temperatura ingresada, convertida en la otra unidad.
# La relación entre temperaturas (C) Celsius y (F) Fahrenheit, está dada por: C=5/9∗(F−32)

temp = float(input("Ingrese la temperatura: "))
unit = input("Indique la unidad: ")

while(unit != 'c' and unit != 'C' and unit != 'f' and unit != 'F'):
    print("Ingrese una unidad válida")
    unit = input("Indique la unidad: ")

if(unit == 'c' or unit == 'C'):
    print("La temperatura equivalente es de",temp*9/5 + 32,"F")
else:
    print("La temperatura equivalente es de",(5*(temp-32)/9),"C")

