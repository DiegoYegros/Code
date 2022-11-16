/*Plantear una clase llamada matemática que implemente cuatro métodos llamados mayor. 
el primero que reciba como parámetros dos enteros y devuelva el mayor de ellos, el segundo que reciba tres enteros 
y devuelva el mayor de ellos.
Lo mismo deben hacer los siguientes dos métodos, pero recibiendo parámetros de tipos float*/

#include <iostream>
#include <vector>
#include <string>
using namespace std;
class matematica{
	//methods
	public:
	int mayor(int x1, int x2);
	int mayor(int x1, int x2, int x3);
	//void mayor (float x1, float x2);
	//void mayor (float x1, float x2, float x3);
};

int matematica::mayor(int x1, int x2){
	if (x1>x2){
		return x1;
	}
	return x2;
}

int matematica::mayor(int x1, int x2, int x3){
	if (x1>x2 && x1>x3){
		return x1;
	}
	else if (x2>x3){
		return x2;
	}
	else{
		return x3;
	}
}
int main(){
	matematica m1;
	cout<<m1.mayor(2, 3)<<endl;
	cout<<m1.mayor(2, 5, 1);
}
