// Una empresa que se dedica a la venta de comida necesita un spoftware que le permita administrar su negocio.

// Para el efecto necesita los datos del cocinero (nombre, apellido), que el sistema permita la carga del cocinero y mostrar los tados del cocinero.

// De los ingredientes se necesita saber cuales osn los 3 ingredientes principales que utiliza la comida (ingrediente1, ingrediente2, ingrediente3),
// el sistema debe permitir la carga de los ingredientes y mostrar los ingredientes.

// La comida consta del nombre del platillo, el precio, los datos de los ingredientes y el cocinero quien lo hizo, esos datos se deben ver por pantalla desde un menu, ademas de poder cargar los datos que corresponden a la comida.

// Desarrollar el menu interactivo correspondiente.
#include <iostream>
#include <string>
using namespace std;

class cocinero{
	//atributos
	public:
	string nombre;
	string apellido;
	//constructor
	public:
	void mostrarNombre();
	cocinero();
};

class ingredientes{
	//atributos
	public:
	string ingrediente1;
	string ingrediente2;
	string ingrediente3;
	//metodos
	public:
	void cargarIngredientes();
	void mostrarIngredientes();
};

class comida{
	//atributos
	public:
    ingredientes ingre;
    cocinero chef;
	string platillo;
	int precio;
	//metodos
	public:
	void cargarComida();
	void mostrarComida();
};

//Clase cocinero
void cocinero::mostrarNombre(){
	cout<<"Nombre = "<<nombre;
	cout<<"\nApellido = "<<apellido;
}
cocinero::cocinero(){
	nombre = "Diego";
	apellido = "Yegros";
}

//Clase ingredientes
void ingredientes::cargarIngredientes(){
	cout<<"\nIngrese ingrediente 1: "; cin>>ingrediente1;
	cout<<"Ingrese ingrediente 2: "; cin>>ingrediente2;
	cout<<"Ingrese ingrediente 3: "; cin>>ingrediente3;
}
void ingredientes::mostrarIngredientes(){
	cout<<"\nLos ingredientes\n";
	cout<<"Ingrediente 1 ="<<ingrediente1<<endl;
	cout<<"Ingrediente 2 ="<<ingrediente2<<endl;
	cout<<"Ingrediente 3 ="<<ingrediente3<<endl;}

//Clase comida
void comida::cargarComida(){
	ingre.cargarIngredientes();
	cout<<"Ingrese nombre platillo: "; cin>>platillo;
	cout<<"Ingrese precio: "; cin>>precio;
	system("pause");
}

void comida::mostrarComida(){
	chef.mostrarNombre();
	cout<<"\nNombre platillo = "<<platillo;
	cout<<"\nPrecio = "<<precio;
	ingre.mostrarIngredientes();
	system("pause");
}


//MAIN 

int main(){
	comida servicio;
	int opc = 0;
	int salir = 2;
	while (true){
		system("cls");
	cout<<"\t\t COMIDAS SEGUNDO PACIAL\n";
	cout<<"1. Cargar platillo\n";
	cout<<"2. Mostrar platillo\n\n";
	cout<<"INGRESE OPERACION: ";cin>>opc;
		switch(opc){
			case 1:
				servicio.cargarComida(); 
			break;
			case 2:
				servicio.mostrarComida();
				system("cls");
				cout<<"Desea salir del programa? 0 para no, 1 para si: "; cin>>salir;
				if (salir == 1){
					cout<<"\nGracias por usar el programa!"<<endl;
					exit(0);
				} else{continue;
				}
			break;
		}
	}
}