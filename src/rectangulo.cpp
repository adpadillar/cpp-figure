#include "../include/rectangulo.h"
#include <iostream>

using namespace std;

Rectangulo::Rectangulo() {
    this->base = 2.0;
    this->altura = 3.0;
}

Rectangulo::Rectangulo(double base, double altura) {
    this->base = base;
    this->altura = altura;
}

double Rectangulo::perimetro() {
    return 2.0 * (this->base + this->altura);
}

double Rectangulo::area() {
    return this->base * this->altura;
}

double Rectangulo::volumen() {
    return 0.0;
}

void Rectangulo::imprimir() {
    cout << "Soy un rectangulo de base " << this->base << " y altura " << this->altura << endl;
}

