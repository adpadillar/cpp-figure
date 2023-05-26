#include "../include/caja.h"
#include "../include/rectangulo.h"

#include <iostream>

using namespace std;

Caja::Caja(): Caja(1.0, 2.0, 3.0) {}

Caja::Caja(double base, double altura, double profundidad) {
    this->base = base;
    this->altura = altura;
    this->profundidad = profundidad;
    
    this->cara_ba = Rectangulo(base, altura);
    this->cara_bp = Rectangulo(base, profundidad);
    this->cara_ap = Rectangulo(altura, profundidad);
}

double Caja::perimetro() {
    double perimetro_bases = 2.0 * this->cara_ba.perimetro();
    return perimetro_bases + (profundidad * 4);
}

double Caja::area() {
    double area_ba = this->cara_ba.area();
    double area_bp = this->cara_bp.area();
    double area_ap = this->cara_ap.area();
    return 2 * (area_ba + area_bp + area_ap); 
}

double Caja::volumen() {
    return this->base * this->altura * this->profundidad;
}

void Caja::imprimir() {
    cout << "Soy una caja de volumen " << this->volumen() << endl;
}
