//Ejercicio1
// Ejercicio de pogramacion utilizando Herencia Multiple.
// Una floreria de nombre floripondio se dedica a la venta de regalos, el regalo consta de lo siguiente: una flor y una tarjeta.
// De la flor se necesita los sisguientes datos. el nombre, la especie y el color..
// La tarjeta debe tener un mensaje.
// Ademas del regalo se debe saber el precio, la direccion de envio, la fecha de envio, el emisor y el destinatario.
// Crear un sisteam en C++ utilizando herencia multiple, que permita administrar lo solicitado.
#include <iostream>
#include <string>
using namespace std;
class flor{
    public: //atributos
    string nombre;
    string color;
    string especie;
    public: //metodos
    void cargarFlor();
    void mostrarFlor();
    flor();
};

class tarjeta{
    public: //atributos
    string mensaje;
    public: //metodos
    void cargarmensaje();
    void mostrarmensaje();
    tarjeta();
};

class regalo : public flor, public tarjeta{
    public: //atributos
    int precio;
    string fecha;
    string direccion;
    string emisor;
    string destinatario;
    public: //metodos
    void cargarRegalo();
    void mostrarRegalo();
    int buscarFlor();
}


void flor::flor(){
    nombre = "";
    color = "";
    especie = "";
}
tarjeta::tarjeta(){
    mensaje ="";
}

regalo::regalo(){
    precio = 0;
    direccion = "";
    fechaenvio = "";
    de = "";
    para = "";
}
void menu();

void flor()::cargarFlor{
    cout<<system("cls");
    cout<<"Nombre de la flor: "; cin>>nombre;
    cout<<"Color de la flor: "; cin>>color;
    cout<<"Especie de la flor: "; cin>>especie;
}
void flor()::mostrarFlor{
    cout<<system("cls");
    cout<<"Nombre de la flor: "; nombre;
    cout<<"Color de la flor: "; color;
    cout<<"Especie de la flor: "; especie;
}

void regalo()::cargarRegalo{
    system("cls");
    cout<<"Cargar destinatario: "; cin>>destinatario;
    cout<<"Cargar emisor: "; cin>>emisor;
    cout<<"Cargar direccion: "; cin>>direccion;
    cout<<"Cargar fecha: "; cin>>fecha;
}
void regalo()::mostrarRegalo{
    system("cls");
    cout<<"Cargar destinatario: "; destinatario;
    cout<<"Cargar emisor: "; emisor;
    cout<<"Direccion: "; direccion;
    cout<<"Fecha: "; fecha;
}

void tarjeta()::cargarmensaje{
    system("cls");
    cout<<"Ingrese su mensaje: "; cin>>mensaje;
}
void tarjeta()::mostrarmensaje{
    system("cls");
    cout<<"Mensaje: "; mensaje;
}
int regalo()::buscarFlor{
    string buscar;
    int flag = 0;
    cout<<"Buscar flor: "; cin>>buscar;
    if(buscar == nombre)
    {
        bandera = 1;
        return bandera;
    }
    return bandera;
}

int main(){
    menu();
    return 0;
}

void menu(){
    regalo cliente;
    int opc = 0;
    while (opc != 4){
    system("cls");
    cout<<"\t\tFloreria Honor Colorado\n";
    cout<<"1. Cargar regalo\n";
    cout<<"2. Mostrar regalo\n";
    cout<<"3. Buscar la flor y ver los datos\n";
    cout<<"4. Salir\n";
    cout<<"Ingrese la opcion que quiera: "; cin>>opc;
    switch(opc){
        case 1:
            cliente.cargarFlor();
            cliente.cargarmensaje();
            cliente.cargarRegalo();
        break;
        case 2:
            mostrarRegalo();
        break;
        case 3:
            if(cliente.buscarflor()==1){
            mostrarFlor();
            }
            else{
                system("cls");
                cout<<"No se ha encontrado una flor. Presione enter para volver al menu.";
                system("pause");
            }
        break;
        case 4:
        system("cls");
        cout("Gracias por usar este programa. Hasta la proxima.");
        system("pause");
        break;
        default: 
        system("cls");
        cout("Opcion invalida. Vuelva a intentarlo.");
        system("pause");
    }
}
}