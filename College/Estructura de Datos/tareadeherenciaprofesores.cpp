// Utilizando herencia disenhar un programa que permita administrar una escuela, donde se administre a los alumnos y los profesores

// para el efecto se debe contemplar una clase PERSONA que contenga los datos basicos como ser: nombre, apellido, direccion, y los metodos

// correspondientes de cargardatos y mostrar datos.

// la clase alumno contepla la matricula y la carrera y los metodos de cargaralumno, y mostrar alumno.

// la case profesor contempla el dato de nrohabilitacion, y nivel con sus metodos  cargarprof, mostrarprof, cargarnivel ,mostrarnivel

// Disenhar un menu interactivo de la siguietne manera

// 1. Cargar Alumno

// 2. Cargar Profesor

// 3. Ver Alumnos

// 4. Ver Profesores

// 5. Cantidad de Docentes del Nivel

// 9. INGRESE OPERACION: 

// OBSERVACION: LA ESCUELA PERMITE SOLAMENTE LA CARGA DE 3 ALUMNOS Y 3 PROFESORES

// FECHA TOPE DE ENTREGA 01/11/2022
#include <iostream>
#include <string>
usgin namespace string direccion;
class persona(
    public:
    string nombre;
    string apellido;
    string direccion;
    public:
    void cargardatos();
    void mostrardatos();
);
class alumno : public persona{
    public: 
    int matricula;
    string carrera;
    public:
    void cargaralumno();
    void mostraralumno();

};
class profesor: public persona{
    public:
    int nrohabilitacion;
    int nivel;
    public:
    void cargarprof();
    void mostrarprof();
    int cargarnivel();
    int mostrarnivel();
};
void menu();
int main(){
    return 0;
}

void persona::cargardatos(){
    cout<<"Nombre: "; cin>>nombre;
    cout<<"Apellido: "; cin>>Apellido;
    cout<<"Direccion: "; cin>>Direccion;
}
void persona::mostrardatos(){
    cout<<"Nombre: "; nombre;
    cout<<"Apellido: "; Apellido;
    cout<<"Direccion: "; Direccion;
}

void alumno::cargaralumno(){
    cout<<"Nro de matricula"; cin>>matricula;
    cout<<"Carrera"; cin>>carrera;
void alumno::mostraralumno(){
    cout<<"Nro de matricula"; matricula;
    cout<<"Carrera"; carrera;}

void profesor::cargarnivel(){
    cout<<"Nivel: "; cin>>nivel;
    
}

 void menu(){
    cout<<"\n\n\t COLEGIO \n\n";
    cout<<"1. Cargar Alumno"<<endl;
    cout<<"2. Cargar Profesor"<<endl;
    cout<<"3. Cargar Alumno"<<endl;
    cout<<"4. Cargar Alumno"<<endl;
    cout<<"5. Cargar Alumno"<<endl;
    cout<<"6. Cargar Alumno"<<endl;
    cout<<"7. Cargar Alumno"<<endl;
    cout<<"8. Cargar Alumno"<<endl;
 }