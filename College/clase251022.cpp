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
    int mensaje;
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

void menu();

int main(){
    return 0;
}

void menu(){
    int opc = 0;
    while (opc != 4){
    system("cls");
    cout<<"\t\tFloreria Honor Colorado\n";
    cout<<"1. Cargar regalo\n";
    cout<<"2. Mostrar regalo\n";
    cout<<"3. Buscar la flor y ver los datos\n";
    cout<<"4. Salir\n";
    }


}