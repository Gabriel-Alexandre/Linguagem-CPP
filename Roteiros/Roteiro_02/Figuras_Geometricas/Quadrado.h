#ifndef QUADRADO_H
#define QUADRADO_H
#include "Figura_Geomatrica.h"

class Quadrado: FiguraGeometrica {
    public:
        Quadrado(int t);
        float calcularArea();
        void lerAtributo();

    private:
        float lado;

};

#endif;