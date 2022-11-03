#include <iostream>
using namespace std;
//forma 1
/*using namespace std;
class ClaseA {
	public:
		ClaseA() : datoA(10){
			cout<<"Constructor Clase A"<<endl;
		}
		int LeerA() const {return datoA;}
	protected:
		int datoA;
};

class ClaseB : public ClaseA{
	public:
		ClaseB() : datoB(20){
			cout<<"Constructor Clase B"<<endl;
		}
		int LeerB() const { return datoB;}
		protected:
			int datoB;
};
int main(){
	ClaseB objeto;
	cout<< "a ="<<objeto.LeerA()<<", B = "<<objeto.LeerB()<<endl;
}*/

//forma 2
class OPERACIONES{
	public:
		   //atributos
		int valor1;
		int valor2;
		int resultado;
		//metodos
		public:
		void cargar1();
		void cargar2();
		void mostrar();
};

class SUMA : public OPERACIONES{
	public:
		void operacion();
};

class RESTA : public OPERACIONES{
	public:
		void operacion();
};

void OPERACIONES::cargar1(){
	cout<<"Ingrese valor 1: ";
	cin>>valor1;
}
void OPERACIONES::cargar2(){
	cout<<"Ingrese valor 2: ";
	cin>>valor2;
}

void OPERACIONES::mostrar(){
	cout<<"El resultado de la operacion es: "<<resultado<<endl;
}

void SUMA::operacion(){
	resultado = valor1+valor2;
}
void RESTA::operacion(){
	resultado = valor1-valor2;
}

int main(){
	SUMA suma1;
	RESTA resta1;
	 		 int opc = 0;
	 while (opc != 9){
	system("cls");
	 cout<<"			CLASE OPERACION"<<endl;
	 cout<<"1. SUMAR"<<endl;
	 cout<<"2. RESTAR"<<endl;
	 cout<<"9. SALIR"<<endl;
	 
	 	cout<<"Ingrese una opcion: "; cin>>opc;
	 	switch (opc){
	 	case 1:
	 		system("cls");
	 		cout<<"				BIENVENIDO AL MENU DE SUMAR"<<endl;
			suma1.cargar1();
			suma1.cargar2();
			suma1.operacion();
			suma1.mostrar();
			system("pause");
			break;
			case 2:
 			system("cls");
	 		cout<<"				BIENVENIDO AL MENU DE RESTAR"<<endl;
				resta1.cargar1();
			  resta1.cargar2();
			  resta1.operacion();
			   resta1.mostrar();
				system("pause");
			break;
			case 9:
				cout<<endl<<"Gracias por usar el programa!"<<endl;
				 exit(0);
			default:
					cout<<"Opcion incorrecta. Vuelva a intentar."<<endl;
	 }
	 
			
	 }
}