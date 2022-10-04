#include <iostream>
#include <string>
using namespace std;
class cuenta{
public: //atributos

public: //metodos
void mostrarsaldo();
};

void menu1();

int main(){
    cuenta caja;
    int op;
    system("color 1b");
    do{
        menu1();
        cin>>op;
        switch(op){
            case 1:
            cout<<"Cargar datos: "<<endl;
            caja.cargardatos();
            break;
            case 2:
            caja.mostrardatos();
            break;
            case 3:
            caja.cargardeposito();
            break;
            case 4:
            caja.cargarextraccion();
            break;
            case 5:
            caja.mostrarsaldo();
            break;
        }
        cout<<endl<<endl;
        system("pause");
        system("cls");
    }while(op!=9);
system("pause");
}

void cuenta::cargardatos(){
    cout<<"Nombre: "; cin>>nombre;
    cout<<"Apellido: "; cin>>apellido;
    cout<<"CI: "; cin>>ci;
    cout<<"Nro Cuenta: "; cin>>nrocuenta;
}

void cuenta::cargarextraccion(){
    cout<<"Monto a extraer: "<<endl;
    cin>>extraccion;
    while (extraccion>saldo){
        cout<<"El monto a extraer no puede ser mayor que el saldo. Intente de nuevo: "<<endl;
        cin>>extraccion;
    }
    saldo -= extraccion;

void cuenta::mostrarsaldo(){
    cout<<"El saldo de la cuenta es: "<<saldo<<endl;
}

//Constructor de la clase

cuenta::cuenta(){
    nombre = "";
    apellido = "";
    ci = 0;
    deposito = 0;
    extraccion=0;
    nrocuenta = 0;
    saldo = 0;
}
void cuenta::cargardeposito(){
    
}
void menu1(){
    cout<<"\n\t\t FINANZAS S.A. \n\n";
    cout<<"1. Cargar Datos"<<endl;
    cout<<"2. Mostrar Datos"<<endl;
    cout<<"3. Deposito"<<endl;
    cout<<"4. Extracciones"<<endl;
    cout<<"5. Consultar saldo"<<endl;
    cout<<"9. Salir"<<endl;
    cout<<"\nIngrese la opcion"<<endl;
}