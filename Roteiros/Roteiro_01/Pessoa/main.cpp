#include "Pessoa.h"
#include <iostream>
#include <string>

using namespace std;

int main () {
    Pessoa p1, p2;

    getline(cin, p1.nome);
    cin >> p1.idade;
    getchar();
    getline(cin, p1.telefone);

    getline(cin, p2.nome);
    cin >> p2.idade;
    getchar();
    getline(cin, p2.telefone);

    cout << p1.nome << ", " <<
    p1.idade << ", " <<
    p1.telefone << endl;

    cout << p2.nome << ", " <<
    p2.idade << ", " <<
    p2.telefone << endl;
}