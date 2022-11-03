/*
Una clase de nombre cocinero. que contenga los atributos: nombre, apellido, el nombre por defecto a definir en el constructor de la clase
es: "HECTOR ACOSTA"*, un método que permita mostrar el nombre y el apellido del cocinero.

Una clase de nombre ingredientes, que los atributos: ingrediente1, ingrediente2, ingrediente3, un método que permita la carga de los 
ingredientes, y mostrar los ingredientes.

Una clase de nombre comida que contenga los atributos: platillo, precio, los atributos de la clase ingredientes y los atributos de la clase 
cocinero, un metodo que permita la carga de la comida y un metodo que permita mostrar la comida.*/
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
	cocinero();
	void mostrarNombre();
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

class comida : public cocinero , public ingredientes{
	//atributos
	public:
	string platillo;
	int precio;
	//metodos
	public:
	void cargarComida();
	void mostrarComida();
};

cocinero::cocinero(){
	nombre = "HECTOR";
	apellido = "ACOSTA";
}

//Clase cocinero
void cocinero::mostrarNombre(){
	cout<<"Nombre = "<<nombre;
	cout<<"\nApellido = "<<apellido;
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
	cargarIngredientes();
	cout<<"Ingrese nombre platillo: "; cin>>platillo;
	cout<<"Ingrese precio: "; cin>>precio;
	system("pause");
}

void comida::mostrarComida(){
	mostrarNombre();
	cout<<"\nNombre platillo = "<<platillo;
	cout<<"\nPrecio = "<<precio;
	mostrarIngredientes();
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