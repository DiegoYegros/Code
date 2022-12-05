from os import system, name
import random
'''=============
Vacas y Toros
 100 Puntos
============='''
#El programa elige un número al azar, de cuatro dígitos, cuyos dígitos no se repitan.
#El número debe:
#* Debe tener 4 dígitos (sin ceros adelante)
#* Los dígitos no se pueden repetir. 1234 es un número válido. 1224, no.
def juego():
    flag = True
    while flag == True:
        numero = random.sample(range(1, 10), 3)
        numero.append(random.randint(0,9))
        if len(numero) == len(set(numero)):
            flag = False
        else:
            continue
    #El programa pregunta a el usuario por un número y le desafía a adivinar el número que la computadora ha pensado. 
    while True:
        userInput = input("Adivine el numero de cuatro digitos que ha pensado la maquina: ")
        while len(userInput) != 4:
            print("Respuesta invalida. intentelo nuevamente.")
            userInput = input("Adivine el numero de cuatro digitos que ha pensado la maquina: ")
        #El programa controla la cadena (string) ingresada por el usuario, y si es un número de 4 dígitos, analiza el número: 
        #Toros: Dígitos acertados en el mismo lugar. 
        #Vacas: Dígitos acertados, pero en un lugar diferente.
        Toros = 0
        Vacas = 0
        respuesta = ''.join(map(str,numero))
        print(userInput)
        for x in range(len(respuesta)):
            if respuesta[x] == userInput[x]:
                Toros+=1
            else:
                if respuesta[x] in userInput:
                    Vacas+=1
        if Toros == 4:
            print(f"Felicidades! El numero secreto era:{respuesta}")
        else:
            system("cls")
            print(f"{Vacas} vacas, {Toros} toros.")
            print("Por favor, intente de nuevo: ")
            
juego()