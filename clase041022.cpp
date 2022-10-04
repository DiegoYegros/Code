#include <iostream>
#include <string>
using namespace std;
class cuenta{
public: //atributos

public: //metodos
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