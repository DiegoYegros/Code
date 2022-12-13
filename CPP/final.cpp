// Utilizando polimorfismo dada una clase base de nombre figuras con los atributos base y altura
// de tipo float y tres metodos, capturar (que capture los datos introducidos por teclado de la base y la altura),
// perimetro y area.
// una clase rectangulo con los metodos, perimetro( que calcule el perimetro del rectangulo 2*(base + altura) y 
// area(base*altura) e imprime (imprime los resultados devueltos por los metodos perimetro y area).
// Una clase triangulo con los metodos, perimetro (que calcula el perimetro del triangulo isosceles 2*(base+altura),
// area (base*altura)/2 y muestra (imprime los resultados devueltos por los metodos perimetro y area).
// Permitir a los usuarios introducir por teclado los datos de base y altura en el metodo captura 
#include <iostream>
#include <conio.h>
using namespace std;
class figuras
{
public:
      float base, altura;

public:
    void capturar();
    virtual float perimetro() = 0;
    virtual float area() = 0;
};
class rectangulo : public figuras
{
public:
    2 float perimetro() { return 2 * (base + altura); }
    float area() { return base * altura; }
    void imprime()
    {
        cout << "El perimetro del rectangulo es: " << perimetro() << endl;
        cout << "El area del rectangulo es: " << area() << endl;
    }
};
class triangulo : public figuras
{
public:
    float perimetro() { return 2 * base + altura; }
    float area() { return (base * altura) / 2; }
    void muestra()
    {
        cout << "El perimetro del triangulo es: " << perimetro() << endl;
        cout << "El area del triangulo es: " << area() << endl;
    }
};
void figuras::capturar()
{
    cout << "CALCULO DEL AREA Y PERIMETRO DEL TRIANGULO ISOSCELES Y RECTANGULO" << endl;
    cout << "Escriba la altura: ";
    cin >> altura;
    cout << "Escriba la base: ";
    cin >> base;
}
int main()
{
    triangulo *objetotriangulo = new triangulo();
    rectangulo *objetorectangulo = new rectangulo();
    objetotriangulo->capturar();
    system("cls");
    objetorectangulo->capturar();
    objetotriangulo->muestra();
    objetorectangulo->imprime();
}