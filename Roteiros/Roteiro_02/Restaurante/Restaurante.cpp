#include "Restaurante.h"
#include <iostream>

using namespace std;

Restaurante::Restaurante() {

}

void Restaurante::adicionarPedido(Pedido p, int i) {
    mesas[i].adicionarPedido(p); 
}

float Restaurante::calculaTotalRestaurante() {
    float total = 0;

    for (int i = 0; i < 100; i++) {
        total += mesas[i].calculaTotal();
    }

    return total;
}

Mesa Restaurante::getMesa(int i) {
    return mesas[i];
}

void Restaurante::exibeContaGeral(int i) {
    mesas[i].exibeConta();
}