# Ignacio Fernández

# Escribir un programa en Python que solicite el ingreso de un mes y un año; y luego informe la cantidad de días del mes, considerando los años bisiestos.
# Tenga en cuenta que un año bisiesto es aquel dividible por 4, salvo que sea divisible por 100, en cuyo caso también debe ser divisible por 400.

try:
    mes = int(input("Ingrese un mes: "))
    anio = int(input("Ingrese un año: "))
    
    if mes < 1 or mes > 12:
        print("Debe ingresar un mes valido")
    else:
        anio = int(input("Ingrese un año: "))
        if(mes == 1 or mes == 3 or mes == 5 or mes == 7 or mes == 8 or mes == 10 or mes == 12):
            dias = 31
        elif(mes == 4 or mes == 6 or mes == 9 or mes == 11):
            dias =  30
        else:
            if(anio % 4 == 0 and (anio % 100 != 0 or anio % 400 == 0)):
                dias = 29
            else:
                dias = 28

        print("El mes tiene",dias,"días")
            
except:
    print("Ocurrió un error")