#include "Mesa.h"
#include <iostream>
#include <string>

using namespace std;

Mesa::Mesa() {

}

void Mesa::adicionarPedido(Pedido p) {
    for(int i = 0; i < pedidos.size(); i++) {
        if(pedidos[i].getNumero() == p.getNumero()) {
            pedidos[i].setQuantidade(p.getQuantidade());
            return;
        }
    }
    
    pedidos.push_back(p);
}

void Mesa::zerarPedidos() {

}

float Mesa::calculaTotal() {

}

void Mesa::exibeConta() {

}