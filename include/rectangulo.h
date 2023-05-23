#ifndef RECTANGULO_H
#define RECTANGULO_H

#include "./figura.h"

class Rectangulo: Figura {
    private:
        double base, altura;

    public:
        Rectangulo();
        Rectangulo(double base, double ancho);
};

#endif // !RECTANGULO_H
