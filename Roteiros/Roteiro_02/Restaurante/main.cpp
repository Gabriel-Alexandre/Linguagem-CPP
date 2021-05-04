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

    do {
        cin >> numero;
        getchar();
        getline(cin, descricao);
        cin >> quantidade;
        cin >> preco;
        cin >> numMesa;

        if (numMesa < 0) {
            break;
        }

        p1 = Pedido(numero, descricao, quantidade, preco);
        r1.adicionarPedido(p1, numMesa);
    } while (numMesa > 0);


    //Falta só organizar a exibição dos dados
    //Dica: Refazer essa questão toda com minha lógica. (Assim vou aprender melhor).
    for (int i = 0; i < 100; i++) {
        if(r1.getMesa(i).getPedidoMesa(i).getNumero() != 0) {
            cout << "Mesa " << i << endl;
            r1.exibeContaGeral(i);
        }
    }
    cout << "Restaurante: R$ " << r1.calculaTotalRestaurante();
}