/*
Crear un sistema en C++ que administre una financiera de nombre FINANZAS SA.
El mismo debe permitir la carga de un usuario con los siguientes datos: nombre, apellido, cedula de identidad, el número de cuenta. Además debe permitir el depósito de dinero en la cuenta del mismo e ir acumulándolo, también debe permitir la extracción del dinero de la cuenta mientras que no supere el monto total actual.
*/
#include <iostream>
using namespace std;

class financiera
{
public: // atributos
    char apellido[15];
    char nombre[15];
    int nrocuenta;
    int saldo;
    int ci;
    bool flag = false;

public: // metodos
    void cuenta();
    void deposito();
    void extraccion();
};
int main();

void financiera::deposito()
{
    int deposito = 0;
    int opc = 0;
    char resp = 'a';
    while (opc != 7)
    {
        system("cls");
        cout << "\t\t\tBienvenido al menú de depósitos\n"
             << endl;
        cout << "\t\tPor favor, ingrese una opción de depósito" << endl;
        cout << "1. 300.000 \t";
        cout << "2. 500.000 \n";
        cout << "3. 700.000 \t";
        cout << "4. 1.000.000 \n";
        cout << "5. 1.300.000 \t";
        cout << "6. Otra opcion \n";
        cout << "7. Salir" << endl;
        switch (opc)
        {
        case 1:
            cout << "Está seguro de que desea depositar 300.000? Y/N";
            cin >> resp;
            if (tolower(resp) == 'y')
            {
                saldo += 300000;
                cout << "Fueron depositados 300.000 GS.\n";
            }
            else if (tolower(resp) == 'n')
            {
                cout << "Se canceló el depósito. Presione una tecla para volver al menu principal." << endl;
                system("pause");
                main();
            }
            else
            {
                cout << "Respuesta inválida. Se cancela el deposíto. Presione una tecla para volver al menú principal." << endl;
                system("pause");
                main();
            }
            break;
        case 2:
            cout << "Está seguro de que desea depositar 500.000? Y/N";
            cin >> resp;
            if (tolower(resp) == 'y')
            {
                saldo += 500000;
                cout << "Fueron depositados 500.000 GS.\n";
            }
            else if (tolower(resp) == 'n')
            {
                cout << "Se canceló el depósito. Presione una tecla para volver al menu principal." << endl;
                system("pause");
                main();
            }
            else
            {
                cout << "Respuesta inválida. Se cancela el deposíto. Presione una tecla para volver al menú principal." << endl;
                system("pause");
                main();
            }
            break;
        case 3:
            cout << "Está seguro de que desea depositar 700.000? Y/N";
            cin >> resp;
            if (tolower(resp) == 'y')
            {
                saldo += 700000;
                cout << "Fueron depositados 700.000 GS.\n";
            }
            else if (tolower(resp) == 'n')
            {
                cout << "Se canceló el depósito. Presione una tecla para volver al menu principal." << endl;
                system("pause");
                main();
            }
            else
            {
                cout << "Respuesta inválida. Se cancela el deposíto. Presione una tecla para volver al menú principal." << endl;
                system("pause");
                main();
            }
            break;
        case 4:
            cout << "Está seguro de que desea depositar 1.000.000? Y/N";
            cin >> resp;
            if (tolower(resp) == 'y')
            {
                saldo += 1000000;
                cout << "Fueron depositados 1.000.000 GS.\n";
            }
            else if (tolower(resp) == 'n')
            {
                cout << "Se canceló el depósito. Presione una tecla para volver al menu principal." << endl;
                system("pause");
                main();
            }
            else
            {
                cout << "Respuesta inválida. Se cancela el deposíto. Presione una tecla para volver al menú principal." << endl;
                system("pause");
                main();
            }
            break;
        case 5:
            cout << "Está seguro de que desea depositar 1.300.000? Y/N";
            cin >> resp;
            if (tolower(resp) == 'y')
            {
                saldo += 1300000;
                cout << "Fueron depositados 1.300.000 GS.\n";
            }
            else if (tolower(resp) == 'n')
            {
                cout << "Se canceló el depósito. Presione una tecla para volver al menu principal." << endl;
                system("pause");
                main();
            }
            else
            {
                cout << "Respuesta inválida. Se cancela el deposíto. Presione una tecla para volver al menú principal." << endl;
                system("pause");
                main();
            }
            break;
        case 6:
            int monto = 0;
            cout << "Ingrese monto a depositar: ";
            cin >> monto;
            cout << "Está seguro de que desea depositar " << monto << "? Y/N";
            cin >> resp;

            if (tolower(resp) == 'y')
            {
                saldo += monto;
                cout << "Fueron depositados " << monto << "GS.\n";
            }
            else if (tolower(resp) == 'n')
            {
                cout << "Se canceló el depósito. Presione una tecla para volver al menu principal." << endl;
                system("pause");
                main();
            }
            else
            {
                cout << "Respuesta inválida. Se cancela el deposíto. Presione una tecla para volver al menú principal." << endl;
                system("pause");
                main();
            }
            break;
        }
    }
}
void financiera::extraccion()
{
    system("cls");
    cout << "\t\tBienvenido al menú de mostrar datos\n"
         << endl;
}
void financiera::cuenta()
{
    system("cls");
    if (!flag)
    {
        cout << "\t\tCargar datos del usuario\n"
             << endl;
        cout << "Ingrese nombre: ";
        cin >> nombre;
        cout << "Ingrese apellido: ";
        cin >> apellido;
        cout << "Ingrese Número de cuenta: ";
        cin >> nrocuenta;
        cout << "Ingrese Número de cédula de identidad: ";
        cin >> ci;
        flag = true;
        cout << "Datos cargados correctamente. Presione una tecla para volver al menu principal." << endl;
        system("pause");
    }
    else
    {
        system("cls");
        cout << "Nombre y apellido: " << nombre << " " << apellido << endl;
        cout << "Numero de cuenta: " << nrocuenta << endl;
        cout << "Numero de cédula de identidad: " << ci << endl;
        cout << "Saldo actual: " << saldo;
        system("pause");
    }
}
int main()
{
    int opc = 0;
    financiera cuenta1;
    while (opc != 4)
    {
        system("cls");
        cout << "\t\tBienvenido al menu de Financiera S.A.\n";
        cout << "1. Ver estado de cuenta\n";
        cout << "2. Depositar en la cuenta\n";
        cout << "3. Extraer de la cuenta\n";
        cout << "Ingrese la opcion que desea: ";
        cin >> opc;
        switch (opc)
        {
        case 1:
            cuenta1.cuenta();
            break;
        case 2:
            cuenta1.deposito();
            break;
        case 3:
            cuenta1.extraccion();
            break;
        default:
            system("cls");
            cout << "Opcion invalida. Intente nuevamnete";
            system("pause");
            break;
        }
    }
    return 0;
}