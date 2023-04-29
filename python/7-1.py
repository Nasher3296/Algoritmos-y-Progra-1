# Ignacio Fernández

# Escribir un programa que solicite el ingreso de números, y a medida que se ingresan, calcule e informe el factorial de cada número. 
# Para saber si el programa debe seguir solicitando ingresos, se le debe preguntar al usuario si desea ingresar otro número.
# En caso que no se pueda calcular el factorial del número ingresado, se debe informar que no es posible calcular el factorial para dicho número.

continuar = True
while continuar:
    continuar = False
    numero = int(input("Ingrese un numero: "))
    acumulador = 1

    if numero >= 0:
        for num in range(numero,0,-1):
            acumulador *= num
        print("el factorial de",numero,"es",acumulador)
    else:
        print("No puede calcularse el factorial del numero ingresado")
 

    continuar = input("Si desea continuar ingrese 1: ") == '1'