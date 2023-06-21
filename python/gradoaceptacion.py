# Ignacio Fernández

# Se realiza una encuesta para estimar el grado de aceptación de los productos x e y en el mercado.
# A cada encuestado se le pregunta si consume el producto x y si consume el producto y. La respuesta puede ser sí o no.
# Se pide calcular e informar el porcentaje de consumidores de:
#   a) del producto x
#   b) del producto y
#   c) del producto x solamente
#   d) del producto y solamente
#   e) de ambos productos
#   f) de ninguno de los productos

continuar = True
cant_X = 0
cant_Y = 0
cant_personas = 0

solo_X = 0
solo_Y = 0
ambos = 0
ninguno = 0

#Valido input que da inicio al while
print("En este programa debe responder Si o No a las respuestas ingresando 's' para SI y 'n' para NO")
input_continuar = input("Desea ingresar los resultados de la encuesta a un cliente? (s/n): ")

while input_continuar != 's' and input_continuar != 'S' and input_continuar != 'n' and input_continuar != 'N':
    print("Debe responder con 's' (SI) o 'n' (NO)")
    input_continuar = input("Desea ingresar los resultados de la encuesta a un cliente? (s/n): ")
#/Valido input que da inicio al while

continuar = input_continuar == 's' or input_continuar == 'S'
while continuar:
  cant_personas += 1

  #Valido inputs
  input_prodX = input("Consume el producto X? (s/n): ")
  while input_prodX != 's' and input_prodX != 'S' and input_prodX != 'n' and input_prodX != 'N':
    print("Debe responder con 's' (SI) o 'n' (NO)")
    input_prodX = input("Consume el producto X? (s/n): ")

  input_prodY = input("Consume el producto Y? (s/n): ")
  while input_prodY != 's' and input_prodY != 'S' and input_prodY != 'n' and input_prodY != 'N':
    print("Debe responder con 's' (SI) o 'n' (NO)")
    input_prodY = input("Consume el producto Y? (s/n): ")
  #/Valido inputs

  #convierto inputs a True o False
  prodX = input_prodX == 's' or input_prodX == 'S'
  prodY = input_prodY == 's' or input_prodY == 'S'
  #/convierto inputs a True o False


  if prodX == prodY: 
    if prodX:
      ambos += 1
      cant_X += 1
      cant_Y += 1
    else:
      ninguno += 1
  else:               
    if prodX:
      cant_X += 1
      solo_X += 1
    else:
      cant_Y += 1
      solo_Y += 1
    

  #Valido input de condición de salida
  input_continuar = input("Desea ingresar la respuesta de otro cliente? (s/n): ")
  while input_continuar != 's' and input_continuar != 'S' and input_continuar != 'n' and input_continuar != 'N':
    print("Debe responder con 's' (SI) o 'n' (NO)")
    input_continuar = input("Desea ingresar la respuesta de otro cliente? (s/n): ")
  #/Valido input de condición de salida
    
  continuar = input_continuar == 's' or input_continuar == 'S'

if cant_personas == 0:
  print("No se registraron datos")
else:
  print("Personas encuestadas:",cant_personas)
  print("Porcentaje de consumidores de X:",cant_X * 100/cant_personas,"%")
  print("Porcentaje de consumidores de Y:",cant_Y * 100/cant_personas,"%")
  print("Porcentaje de consumidores unicamente de X:",solo_X * 100/cant_personas,"%")
  print("Porcentaje de consumidores unicamente de Y:",solo_Y * 100/cant_personas,"%")
  print("Porcentaje de consumidores de ambos:",ambos * 100/cant_personas,"%")
  print("Porcentaje de consumidores de ninguno:",ninguno * 100/cant_personas,"%")