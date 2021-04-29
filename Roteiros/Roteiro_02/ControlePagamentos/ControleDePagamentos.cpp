#include "ControleDePagamentos.h"
#include <iostream>
#include <string>

using namespace std;

ControleDePagamentos::ControleDePagamentos() {

}
void ControleDePagamentos::setPagamentos(Pagamento p) {
    pagamentos.push_back(p);
}

Pagamento ControleDePagamentos::getPagamento(int pos) {
    return pagamentos[pos];
}

float ControleDePagamentos::calculaTotalDePagamentos() {
    float soma = 0;

    for(int i = 0; i < pagamentos.size(); i++) {
        soma = soma + pagamentos[i].getValorPagamento();
    }

    return soma;
}

int ControleDePagamentos::getIndexFuncionario(string n) {
    for(int i = 0; i < pagamentos.size(); i ++) {
        if(pagamentos[i].getNomeFuncionario().find(n) != string::npos)
            return i;
    }

    return -1;
}