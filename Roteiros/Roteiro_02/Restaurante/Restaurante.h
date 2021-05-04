#ifndef RESTAURANTE_H
#define RESTAURANTE_H
#include <string>
#include <vector>
#include "Mesa.h"

using namespace std;

class Restaurante {
    public:
        Restaurante();
        void adicionarPedido(Pedido p, int i);
        float calculaTotalRestaurante();
        Mesa getMesa(int i);
        void exibeContaGeral(int i);

    private:
        Mesa mesas[100];

};

#endif