#include "Invoice.h"
#include <iostream>
#include <string>

using namespace std;

int main () {
    Invoice produto1, produto2;

    cin >> produto1.numero;
    getchar();
    getline(cin, produto1.descricao);
    cin >> produto1.quantidade;
    if(produto1.quantidade < 0) {
        produto1.quantidade = 0;
    }
    cin >> produto1.preco;
    if(produto1.preco < 0) {
        produto1.preco = 0;
    }

    cin >> produto2.numero;
    getchar();
    getline(cin, produto2.descricao);
    cin >> produto2.quantidade;
    if(produto2.quantidade < 0) {
        produto2.quantidade = 0;
    }
    cin >> produto2.preco;
    if(produto2.preco < 0) {
        produto2.preco = 0;
    }

    cout << produto1.numero << " - " <<
     produto1.descricao << " - " << 
     produto1.quantidade << " - " <<
     produto1.preco << " - " <<
     produto1.getInvoiceAmount(produto1.numero, produto1.quantidade) << endl;

     cout << produto2.numero << " - " <<
     produto2.descricao << " - " << 
     produto2.quantidade << " - " <<
     produto2.preco << " - " <<
     produto2.getInvoiceAmount(produto2.numero, produto2.quantidade) << endl;
}