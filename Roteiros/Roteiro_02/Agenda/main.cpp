#include <iostream>
#include <string>
#include <vector>
#include "Pessoa.h"

using namespace std;

int main () {
    int n, numero;
    string nome, telefone;
    string rua, bairro, cidade, estado, cep;
    vector<Pessoa> pessoas;
    Endereco e;

    cin >> n;
    getchar();

    //Pessoa pessoas[n];

    for(int i = 0; i < n; i++) {
        getline(cin, nome);
        getline(cin, telefone);
        getline(cin, rua);
        cin >> numero;
        getchar();
        getline(cin, bairro);
        getline(cin, cidade);
        getline(cin, estado);
        getline(cin, cep);

        e = Endereco(rua, numero, bairro, cidade, estado, cep);
        pessoas.push_back(Pessoa(nome, e, telefone));
        //pessoas[i] = Pessoa(nome, e, telefone);
    }

    for(int i = 0; i < n; i++) {
        cout << pessoas[i].toString();
    }


}