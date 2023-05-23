#ifndef CUADRADO_H
#define CUADRADO_H

#include "rectangulo.h"

class Cuadrado: public Rectangulo {
    public:
        Cuadrado();
        Cuadrado(double lado);

        void imprimir();
};

#endif // !CUADRADO_H
