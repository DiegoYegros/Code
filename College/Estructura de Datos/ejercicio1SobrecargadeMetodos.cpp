/*Aplicando los conceptos de sobrecarga de métodos desarrollar cuanto sigue:
Implementar una clase que permita cargar un vector de 5 elementos. Definir tres métodos sobrecargados que*/
/*

//Imprime todo el vector
void imprimir();

//Imprime desde el principio del vector hasta el valor que le pasamos
void imprimir(int hasta);

//Imprime un rango de valores del vector
void imprimir(int desde, int hasta);*/
#include <iostream>
#include <string>
#include <vector>
using namespace std;
class vect{
	//atributes
	protected:
		int vec[5];
	//methods
	public:
		void cargar();
		void imprimir();
		void imprimir(int hasta);
		void imprimir(int desde, int hasta);
};

void vect::cargar(){
	for (int x= 0; x<5; x++){
		cout<<"Ingrese numero [ "<<x<<"]: "; cin>> vec[x];
	}
}
void vect::imprimir(){
	cout<<"El vector es: "<<endl;
	for (int x = 0; x<5; x++) {
    cout << x << "  ";
  }
}

void vect::imprimir(int hasta){
	cout<<"El vector es: "<<endl;
		for (int x =0; x<=hasta; x++){
    	cout << x << "  ";
  		}
	}

void vect::imprimir(int desde, int hasta){
	cout<<"El vector es: "<<endl;
		for (int i = desde; i<=hasta; i++){
    	cout << vec[i] << "  ";   
  		}
	}

int main(){
	vect v1;
	v1.cargar();
	v1.imprimir();
	v1.imprimir(3);
	v1.imprimir(2, 4);
	return 0;
};