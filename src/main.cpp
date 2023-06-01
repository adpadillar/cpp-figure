#include <iostream>

#include "../include/caja.h"
#include "../include/cuadrado.h"
#include "../include/figura.h"
#include "../include/rectangulo.h"

using namespace std;

int main() {
    Figura f1;

    f1.imprimir();
    cout << "Perimetro: " << f1.perimetro() << endl;
    cout << "Area: " << f1.area() << endl;
    cout << "Volumen: " << f1.volumen() << endl;
    cout << endl;

    Rectangulo r1(5.0, 7.0);

    r1.imprimir();
    cout << "Perimetro: " << r1.perimetro() << endl;
    cout << "Area: " << r1.area() << endl;
    cout << "Volumen: " << r1.volumen() << endl;
    cout << endl;

    Cuadrado c1(5.0);

    c1.imprimir();
    cout << "Perimetro: " << c1.perimetro() << endl;
    cout << "Area: " << c1.area() << endl;
    cout << "Volumen: " << c1.volumen() << endl;
    cout << endl;

    Caja caja;

    caja.imprimir();
    cout << "Perimetro: " << caja.perimetro() << endl;
    cout << "Area: " << caja.area() << endl;
    cout << "Volumen: " << caja.volumen() << endl;
    cout << endl;

    return 0;
}
