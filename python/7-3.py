# Ignacio Fernández

# Escribir un programa que simule el proceso de control de peso y cantidad de personas que puede transportar un ascensor.
# Vamos a suponer que nuestro ascensor puede soportar un máximo de 400 kg y hasta 6 personas.
# Nuestra simulación debe proceder del siguiente modo:
# A medida que las personas ingresan al ascensor de a una a la vez, se registra el peso de la persona. Supondremos que di el ingreso es 0 kg, indica que no hay más personas por subir al ascensor.
# Si en un determinado momento del ingreso de las personas, se supera el peso máximo, el ascensor, advertirá mediante un - mensaje, que indique que se ha excedido el peso máximo y nuestra simulación terminará.
# De igual modo, si el ascensor detecta que ha subido una séptima persona al ascensor, deberá advertir de esto, y nuestra simulación terminará.
# Por último, si habiéndose indicado que todas las personas están abordo del ascensor y las condiciones establecidas se cumplen, el ascensor anunciará "ascensor en movimiento".

PESO_MAX_KG = 400.0
CANT_MAX = 6
pesoTotal = 0
numPersonas = 0
pesoPersona = -1
try:
    while pesoPersona != 0 and numPersonas <= CANT_MAX and pesoTotal <= PESO_MAX_KG:
        pesoPersona = float(input("Ingrese el peso de la persona en kg. 0 para terminar: "))
        numPersonas += 1
        pesoTotal += pesoPersona
        print("Personas:",numPersonas,"de",CANT_MAX,"| Peso:",pesoTotal,"de",PESO_MAX_KG,"kg")
    
    if(pesoPersona == 0):
        print("Ascensor en movimiento")
    else:
        #Decido que se puedan mostrar ambos problemas en caso de ocurrir simultaneamente
        if pesoTotal > PESO_MAX_KG:
            print("Limite de peso excedido")
        if numPersonas > CANT_MAX:
            print("Limite de personas excedido")

except:
    print("Los datos ingresados no son permitidos")