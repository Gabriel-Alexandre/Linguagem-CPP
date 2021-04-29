#include <iostream>
#include <string>
#include "Endereco.h"

using namespace std;

Endereco::Endereco() {
    numero = 0;

}

Endereco::Endereco(string r, int n, string b, string c, string e, string ce) {
    rua = r;
    numero = n;
    bairro = b;
    cidade = c;
    estado = e;
    cep = ce;

}
string Endereco::toString() {
    return rua + ", " + to_string(numero) + ", " + bairro + ". " + cidade + " - " + estado + ". CEP: " + cep;

}
