#include <iostream>

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
/*
using namespace std;
class ClaseA {
	public:
		ClaseA(int a);
		int LeerA();
	protected:
		int datoA;
};

class ClaseB : public ClaseA{
	public:
		ClaseB(int a, int b);
		int LeerB();
		protected:
			int datoB;
};

ClaseA::ClaseA(int a){
	datoA = a;
	cout<<"Constructor Clase A"<<endl;
}
ClaseB::ClaseB(int a, int b) : ClaseA(a){
	datoB = b;
	cout<<"Constructor Clase B"<<endl;
}
int ClaseA::LeerA(){
	return datoA;
}
int ClaseB::LeerB(){
	return datoB;
}
int main(){
	ClaseB objeto(10, 20);
	cout<< "a ="<<objeto.LeerA()<<", B = "<<objeto.LeerB()<<endl;
}
*/
//forma 3

using namespace std;
class ClaseA {
	public:
		ClaseA(int a);
		int LeerA();
	protected:
		int datoA;
};

class ClaseB : public ClaseA{
	public:
		ClaseB(int a, int b);
		int LeerB();
		protected:
			int datoB;
};

ClaseA::ClaseA(int a){
	datoA = a;
	cout<<"Constructor Clase A"<<endl;
}
ClaseB::ClaseB(int a, int b) : ClaseA(a){
	datoB = b;
	cout<<"Constructor Clase B"<<endl;
}
int ClaseA::LeerA(){
	return datoA;
}
int ClaseB::LeerB(){
	return datoB;
}
int main(){
	ClaseB objeto(10, 20);
	cout<< "a ="<<objeto.LeerA()<<", B = "<<objeto.LeerB()<<endl;
}e