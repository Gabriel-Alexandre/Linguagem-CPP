#include "Pessoa02.h"
#include <iostream>
#include <string>

using namespace std;

int main() {
    int n, idade, c = 0;
    string nome, telefone, procura;

    cin >> n;
    getchar();

    Pessoa02 p[n];

    for(int i = 0; i < n; i++){
        getline(cin, nome);
        cin >> idade;
        getchar();
        getline(cin, telefone);

        p[i].setNome(nome);
        p[i].setIdade(idade);
        p[i].setTelefone(telefone);
    }

    getline(cin, procura);

    for(int i = 0; i < n; i++){
        //O que é string npos ?
        if(p[i].getNome().find(procura) != string::npos){
            cout << p[i].getNome() << ", " <<
            p[i].getIdade() << ", " <<
            p[i].getTelefone() << endl;
            c++;
        }
    }

    if(c == 0){
        cout << "Pessoa nao encontrada";
    }
}