#ifndef CAJA_H
#define CAJA_H

#include "figura.h"
#include "rectangulo.h"

class Caja: public Figura {
    private:
        double base, altura, profundidad;
        Rectangulo cara_ba, cara_bp, cara_ap;

    public:
        Caja();
        Caja(double base, double altura, double profundidad);

        double perimetro();
        double area();
        double volumen();

        void imprimir();
};

#endif 
