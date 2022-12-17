package com.bootCamp;

import java.security.KeyStore;
import java.sql.SQLOutput;
import java.util.HashSet;
import java.util.Scanner;

public class randomNumber {
    public static void main(String[] args) {
        /*
         * El programa elige un número al azar, de cuatro dígitos, cuyos dígitos no se
         * repitan.
         */
        /*
         * El número debe:
         * Debe tener 4 dígitos (sin ceros adelante)
         * Los dígitos no se pueden repetir. 1234 es un número válido. 1224, no.
         */

        String number = "0";
        int min = 1;
        int max = 9;
        Boolean flag = true;
        Boolean continuePlaying = true;
        // Generate random int value from 50 to 100

        while (flag == true) {
            if (number.contains("0")) {
                number = "";
                for (int x = 0; x < 3; x++) {
                    int random_int = (int) Math.floor(Math.random() * (max - min + 1) + min);
                    number += Integer.toString(random_int);
                }
            } else {
                min = 0;
                for (int x = 0; x < 1; x++) {
                    int random_int = (int) Math.floor(Math.random() * (max - min + 1) + min);

                    number += Integer.toString(random_int);
                }
                // checking repeated Characters
                HashSet<Character> char_set = new HashSet<>();
                for (int c = 0; c < number.length(); c++) {
                    char_set.add(number.charAt(c));
                }
                if (char_set.size() == number.length()) {
                    flag = false;
                }
            }
        }
        while (continuePlaying) {
            System.out.print(number);
            // El programa pregunta a el usuario por un número y le desafía a adivinar el
            // número que la computadora ha pensado.
            Scanner Objeto = new Scanner(System.in);
            System.out.println("Adivina el numero que ha pensado la maquina: ");
            // String Input
            String userInput = Objeto.nextLine();
            // El programa controla la cadena (string) ingresada por el usuario, y si es un
            // número de 4 dígitos, analiza el número:
            while (userInput.length() != 4) {
                System.out.println("Respuesta no valida. Vuelva a intentarlo.");
                System.out.println("Adivina el numero que ha pensado la maquina: ");
                userInput = Objeto.nextLine();
            }
            /*
             * Toros: Dígitos acertados en el mismo lugar.
             * Vacas: Dígitos acertados, pero en un lugar diferente.
             */
            int Toros = 0;
            int Vacas = 0;
            for (int x = 0; x < userInput.length(); x++) {
                if (number.charAt(x) == userInput.charAt(x)) {
                    Toros++;
                } else {
                    if (userInput.contains(String.valueOf(number.charAt(x)))) {
                        Vacas++;
                    }
                }
            }
            if (Toros == 4) {
                System.out.println("Felicidades! Has ganado!");
                continuePlaying = false;
            } else {
                System.out.format("Has conseguido %d vacas y %d toros.", Vacas, Toros);
            }
        }
    }
}
