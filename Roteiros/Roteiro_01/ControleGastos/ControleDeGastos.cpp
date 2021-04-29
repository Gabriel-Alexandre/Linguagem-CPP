#include "Despesa.h"
#include "ControleDeGastos.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

ControleDeGastos::ControleDeGastos() {

}

void ControleDeGastos::setDespesa(Despesa d) {
    despesas.push_back(d);
}

float ControleDeGastos::calculaTotalDeDespesas() {
    float soma = 0;

    for(int i = 0; i < despesas.size(); i++) {
        soma += despesas[i].getValor();
    }

    return soma;
}

float ControleDeGastos::calculaTotalDeDespesas(string t) {
    float soma = 0;
    int indice = 0;

    for(indice; indice < despesas.size(); indice++){
        if(despesas[indice].getTipoGasto() == t) {
            soma += despesas[indice].getValor();
        }
    }

    return soma;
}

bool ControleDeGastos::existeDespesaDoTipo(string t) {
    for(int i = 0; i < despesas.size(); i++) {
        if (t == despesas[i].getTipoGasto())
            return true;
    }

    return false;
}

Despesa ControleDeGastos::getDespesa(int p) {
    return despesas[p];
}