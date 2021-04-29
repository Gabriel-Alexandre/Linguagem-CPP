#ifndef MESA_H
#define MESA_H
#include <string>
#include <vector>
#include "Pedido.h"

using namespace std;

class Mesa {
    public:
        Mesa();
        void adicionarPedido(Pedido p);
        void zerarPedidos();
        float calculaTotal();
        void exibeConta();

    private:
        vector <Pedido> pedidos;
};

#endif