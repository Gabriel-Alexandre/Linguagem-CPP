#include <iostream>

using namespace std;

int main () {
    float salario;
    float emprestimoValor;
    float parcela;
    int prestacoes;

    do {
    cin >> salario;
    }while(salario <= 0);

    do {
    cin >> emprestimoValor;
    }while(emprestimoValor <= 0);

    do {
    cin >> prestacoes;
    }while(prestacoes <= 0);

    parcela = emprestimoValor / prestacoes;

    if(parcela <= salario * 0.3)
        cout << "Emprestimo pode ser concedido\n";
    else
        cout<< "Emprestimo nao pode ser concedido\n";

    return 0;
}
