#include "Pedido.h"
#include <iostream>
#include <string>

using namespace std;

Pedido::Pedido() {
    numero = 0;
    quantidade = 0;
    preco = 0;
}

Pedido::Pedido(int n, string d, int q, float p) {
    numero = n;
    descricao = d;
    quantidade = q;
    preco = p;
}

int Pedido::getNumero() {
    return numero;
}

string Pedido::getDescricao() {
    return descricao;
}

int Pedido::getQuantidade() {
    return quantidade;
}

float Pedido::getPreco() {
    return preco;
}

float Pedido::getTotal() {
    return quantidade * preco;
}

void Pedido::setQuantidade(int q) {
    quantidade += q;
}

