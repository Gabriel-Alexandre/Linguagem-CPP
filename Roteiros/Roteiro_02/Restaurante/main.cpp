#include "Restaurante.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main () {
    int numero, quantidade, numMesa;
    float preco;
    string descricao;
    Pedido p1;
    Mesa m1;
    Restaurante r1;

    while(true) {
        cin >> numero;
        getchar();

        if (numero < 0) {
            break;
        }

        getline(cin, descricao);
        cin >> quantidade;
        cin >> preco;
        cin >> numMesa;

        p1.setNumero(numero);
        p1.setDescricao(descricao);
        p1.setQuantidade(quantidade);
        p1.setPreco(preco);
        r1.adicionarPedido(p1, numMesa);
    }


    for (int i = 0; i < 100; i++) {
        if(r1.getMesa(i).calculaTotal() != 0) {
            cout << "Mesa " << i << endl;
            r1.exibeContaGeral(i);
        }
    }
    cout << "Restaurante: R$ " << r1.calculaTotalRestaurante();

    //Tomar muito cuidado com o uso de uma função para mais de duas funções.

    return 0;
}