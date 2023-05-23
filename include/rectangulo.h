#ifndef RECTANGULO_H
#define RECTANGULO_H

#include "./figura.h"

class Rectangulo: public Figura {
    protected:
        double base, altura;

    public:
        Rectangulo();
        Rectangulo(double base, double ancho);
        
        double area();
        double perimetro();

        void imprimir();

};

#endif // !RECTANGULO_H
