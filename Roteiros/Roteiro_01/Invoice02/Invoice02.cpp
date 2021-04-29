#include "Invoice02.h"
#include <iostream>
#include <string>

using namespace std;

Invoice02::Invoice02(){  

}

Invoice02::Invoice02(int n, int q, float p, string d){  
    numero = n;
    quantidadeComprada = q;
    preco = p;
    descricao = d;
}

float Invoice02::getInvoiceAmount() {
    return (float)quantidadeComprada * preco;
}

void Invoice02::print() {
    cout << numero << " - " << descricao << " - " <<
    quantidadeComprada << " - " <<
    preco << " - " << getInvoiceAmount() << endl;
}

void Invoice02::setnumero(int n){
    numero = n;
}

void Invoice02::setquantidadeComprada(int q) {
    if(q < 0) {
        quantidadeComprada = 0;
    }
    else {
        quantidadeComprada = q;
    }
}

void Invoice02::setPreco(float p) {
    if(p < 0) {
        preco = 0;
    }
    else {
        preco = p;
    }
}

void Invoice02::setDescricao(string d) {
    descricao = d;
}

int Invoice02::getNumero() {
    return numero;
}

int Invoice02::getquantidadeComprada() {
    return quantidadeComprada;
}

float Invoice02::getPreco() {
    return preco;
}

string Invoice02::getDescricao() {
    return descricao;
}