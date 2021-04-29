#include <iostream>
#include <string>
#include "Pessoa.h"

using namespace std;

Pessoa::Pessoa() {

}

Pessoa::Pessoa(string n) {
    nome = n;
}

Pessoa::Pessoa(string n, Endereco e, string t) 
    :Pessoa(n)
{
    endereco = e;
    telefone = t;
}

string Pessoa::toString() {
    return nome + ", " + telefone + "\n" +
    endereco.toString() + "\n\n";
}

string Pessoa::getNome() {
    return nome;
}

string Pessoa::getTelefone() {
    return telefone;
}

Endereco Pessoa::getEndereco() {
    return endereco;
}

void Pessoa::setNome(string n) {
    nome = n;
}

void Pessoa::setTelefone(string t) {
    telefone = t;
}

void Pessoa::setEndereco(Endereco e) {
    endereco = e;
}