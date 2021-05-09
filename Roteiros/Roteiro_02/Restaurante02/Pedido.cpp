#include "Pedido.h"
#include <iostream>
#include <string>

using namespace std;

Pedido::Pedido() {
    numero = 0;
    quantidade = 0;
    preco = 0;
}

int Pedido::getNumero() {
    return numero;
}

int Pedido::getQuantidade() {
    return quantidade;
}

float Pedido::getPreco() {
    return preco;
}

string Pedido::getDescricao() {
    return descricao;
}

float Pedido::getTotal() {
    return quantidade * preco;
}

void Pedido::setNumero(int n) {
    numero = n;
}

void Pedido::setQuantidade(int q) {
    quantidade = q;
}

 void Pedido::setPreco(float p) {
     preco = p;
 }

void Pedido::setDescricao(string d) {
    descricao = d;
}

void Pedido::incrementar(int qtd) {
    quantidade += qtd;
}

