/*
Crear un sistema en C++ que administre una financiera de nombre FINANZAS SA.
El mismo debe permitir la carga de un usuario con los siguientes datos: nombre, apellido, cedula de identidad, el número de cuenta. Además debe permitir el depósito de dinero en la cuenta del mismo e ir acumulándolo, también debe permitir la extracción del dinero de la cuenta mientras que no supere el monto total actual.
*/
#include <iostream>
using namespace std;

class financiera
{
    // atributos
    char apellido[15];
    char nombre[15];
    int nrocuenta;
    int ci;
    // metodos
    void usuario();
    void deposito();
    void extraccion();
};
int main()
{
    int opc = 0;
    while (opc != 9)
    {
    }
    return 0;
}