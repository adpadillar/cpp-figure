#include "../include/figura.h"
#include "../include/rectangulo.h"

#include <iostream>

using namespace std;

int main() {
    Figura f1;

    f1.imprimir();

    cout << "Perimetro: " << f1.perimetro() << endl;
    cout << "Area: " << f1.area() << endl;
    cout << "Volumen: " << f1.volumen() << endl;

    return 0;
}
