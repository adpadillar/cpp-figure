#include <iostream>
#include <vector>

#include "../include/caja.h"
#include "../include/cuadrado.h"
#include "../include/figura.h"
#include "../include/rectangulo.h"

using namespace std;

int main() {
    vector<Figura*> figuras;
    
    figuras.push_back(new Figura());
    figuras.push_back(new Rectangulo(5.0, 7.0));
    figuras.push_back(new Cuadrado(5.0));
    figuras.push_back(new Caja());

    for (int i = 0; i < figuras.size(); i++) {
        figuras[i]->imprimir();

        cout << "Perimetro: " << figuras[i]->perimetro() << endl;
        cout << "Area: " << figuras[i]->area() << endl;
        cout << "Volumen: " << figuras[i]->volumen() << endl;
        cout << endl;
    }

    return 0;
}
