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
    void buscarFlor();
}
