#ifndef PESSOA_H
#define PESSOA_H
#include <string>
#include "Endereco.h"

using namespace std;

class Pessoa{
    public:
        Pessoa();
        Pessoa(string n);
        Pessoa(string n, Endereco e, string t);
        string toString();
        string getNome();
        string getTelefone();
        Endereco getEndereco();
        void setNome(string n);
        void setTelefone(string t);
        void setEndereco(Endereco e);


    private:
        string nome, telefone;
        Endereco endereco;

};

#endif