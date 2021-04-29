#include "Invoice02.h"
#include <iostream>
#include <string>

using namespace std;

int main () {
    int numero;
    int quantidade;
    float preco;
    string descricao;
    Invoice02 p[2];
    
    for(int i = 0; i < 2; i++) {
        p[i] = Invoice02(numero, quantidade, preco,descricao);
    }

    for(int i = 0; i < 2; i++) {
        cin >> numero;
        getchar();
        getline(cin, descricao);
        cin >> quantidade;
        cin >> preco;
        getchar();

        p[i].setnumero(numero);
        p[i].setDescricao(descricao);
        p[i].setquantidadeComprada(quantidade);
        p[i].setPreco(preco);
    }

    for(int i = 0; i < 2; i++) {
        p[i].print();
    }
}