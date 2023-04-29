# Ignacio Fernández

# Solicitar el ingreso de 2 valores enteros y luego informar el resultado de multiplicarlos, pero mediante sumas sucesivas.
# Optimizar el algoritmo, realizando la menor cantidad de ciclos posibles.
# Tener en cuenta que el usuario puede ingresar valores negativos.
# Para la solución NO PUEDE utilizar la función abs().

try:
    numeroA = int(input("Ingrese un numero: "))
    numeroB = int(input("Ingrese otro numero: "))

    menor = min(numeroA, numeroB)
    mayor = max(numeroA, numeroB)
    
    negativoMenor = True if menor < 0 else False
    negativoMayor = True if mayor < 0 else False
    
    acumulador = 0

    if negativoMenor:
        for num in range(mayor,0,-1):
            acumulador += menor
    else:
        for num in range(0,menor):
            acumulador += mayor


    print("El producto entre",numeroA,"y",numeroB,"es",acumulador)
    
except:
    print("El valor ingresado no es valido")