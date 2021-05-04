#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H
#include <string>

class FiguraGeometrica {

    public:
        FiguraGeometrica(int t);
        float calcularArea();
        void lerAtributo();

    protected:
        std::string nome;
        int tipo;

};

#endif;