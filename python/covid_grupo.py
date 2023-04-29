print("Este programa registra los casos de covid por pais")

Pais = 0
Cantidad_Menor=0
Cantidad_Mayor=0
Cantidad_Total=0
casos = 0
cant_paises = 0

continuar = input("Quiere ingresar un pais?") == 'si'

while(continuar):
    cant_paises += 1
    casos = int(input("Ingrese la cantidad de casos del pais",cant_paises))

    if(cant_paises == 1):
        Cantidad_Menor = casos
        Cantidad_Mayor = casos
    elif casos > Cantidad_Mayor:
        Cantidad_Mayor = casos
    elif casos < Cantidad_Menor:
        Cantidad_Menor = casos
    
    Cantidad_Total += casos

print("")
        



    continuar = input("Quiere ingresar otro pais?") == 'si'

