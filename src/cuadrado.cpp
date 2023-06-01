#include "../include/cuadrado.h"
#include <iostream>

using namespace std;

Cuadrado::Cuadrado() {
    this->base = 2.0;
    this->altura = 2.0;
}

Cuadrado::Cuadrado(double lado) {
    this->base = lado;
    this->altura = lado;
}

void Cuadrado::imprimir() {
    cout << "Soy un cuadrado de lado " << this->altura << endl;
}

void Cuadrado::saludar() {
    cout << "Saludando como todo un cuadrado" << endl;
}

