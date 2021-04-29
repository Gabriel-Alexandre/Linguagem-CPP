#include "Despesa.h"
#include <iostream>
#include <string>

using namespace std;

Despesa::Despesa() {
    valor = 0;
}

string Despesa::getNome() {
    return nome;
}
string Despesa::getTipoGasto() {
    return tipoGasto;
}
float Despesa::getValor() {
    return valor;
}
void Despesa::setNome(string n) {
    nome = n;
}
void Despesa::setTipoGasto(string tG) {
    tipoGasto = tG;
}
void Despesa::setValor(float v) {
    valor = v;
}