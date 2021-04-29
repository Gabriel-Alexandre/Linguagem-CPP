#include "Pagamento.h"
#include <iostream>
#include <string>

using namespace std;

Pagamento::Pagamento() {
    valorPagamento = 0;
}

float Pagamento::getValorPagamento() {
    return valorPagamento;
}

string Pagamento::getNomeFuncionario() {
    return nomeFuncionario;
}
        
void Pagamento::setValorPagamento(float v) {
    valorPagamento = v;
}

void Pagamento::setNomeFuncionario(string n) {
    nomeFuncionario = n;
}