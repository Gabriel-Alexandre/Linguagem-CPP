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

Pedido Mesa::getPedidoMesa(int i) {
    return pedidos[i];
}

void Mesa::zerarPedidos() {
    for (int i = 0; i < pedidos.size(); i++) {
        pedidos[i] = Pedido(); 
    }
}

float Mesa::calculaTotal() {
    float total = 0;

    for (int i = 0; i < pedidos.size(); i++) {
        total += pedidos[i].getTotal();
    }

    return total;
}

void Mesa::exibeConta() {
    for (int i = 0; i < pedidos.size(); i++) {
        cout << pedidos[i].getNumero() << " - " <<
        pedidos[i].getDescricao() << " - " <<
        pedidos[i].getQuantidade() << " - " <<
        pedidos[i].getPreco() << " - R$ " <<
        pedidos[i].getTotal() << endl;
    }

    cout << "Total: R$ " << calculaTotal() << endl << endl;
}