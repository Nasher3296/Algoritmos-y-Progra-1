# Ignacio Fernández

# Escribir un program que muestre en forma descendente, los números impares entre 0 y 100.
import time
print("Los numeros impares entre el 0 y 100 ordenados de forma descendiente son:")
# for num in range(99,0,-2):
#     print(num)

while True:
    for num in range(99,0,-2):
        textBefore = ""
        textAfter = ""
        for i in range(num,0,-2):
            textBefore += " "
        for i in range(99,num,-2):
            textAfter += " "
        print(textBefore,num,textAfter, end="\r")
        time.sleep(0.2)