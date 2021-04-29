#ifndef ENDERECO_H
#define ENDERECO_H
#include <string>

using namespace std;

class Endereco{
    public:
        Endereco();
        Endereco(string r, int n, string b, string c, string e, string ce);
        string toString();


    private:
        string rua, bairro, cidade, estado, cep;
        int numero;
};

#endif