#include "Pessoa02.h"
#include <iostream>
#include <string>

using namespace std;

Pessoa02::Pessoa02(){
}

string Pessoa02::getNome(){
    return this->nome;
}

string Pessoa02::getTelefone(){
    return this->telefone;
}

int Pessoa02::getIdade(){
    return this->idade;
}

void Pessoa02::setNome(string n){
    nome = n;
}

void Pessoa02::setTelefone(string t){
    telefone = t;
}

void Pessoa02::setIdade(int i){
    idade = i;
}
