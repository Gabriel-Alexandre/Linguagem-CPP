#include <iostream>
#include <vector>
#include <string>
#include "ControleDePagamentos.h"

using namespace std;

int main () {
    ControleDePagamentos controlep1;
    Pagamento pagamento;
    int n, indice;
    float valor;
    string nome;

    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> valor;
        getchar();
        getline(cin, nome);

        pagamento.setValorPagamento(valor);
        pagamento.setNomeFuncionario(nome);

        controlep1.setPagamentos(pagamento);
    }

    getline(cin, nome);
    indice = controlep1.getIndexFuncionario(nome);

    if(indice == -1) {
        cout << nome << " não encontrado(a)." << endl;
    }
    else {
        pagamento = controlep1.getPagamento(indice);
        cout << pagamento.getNomeFuncionario() << ": R$ " << pagamento.getValorPagamento() << endl;
    }

    cout << "Total: R$ " << controlep1.calculaTotalDePagamentos();

}