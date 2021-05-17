#include <iostream>
#include <string>
#include "Funcionario.hpp"
#include "Consultor.hpp"

using namespace std;

int main () {
    Funcionario f;
    Consultor c;
    string matricula, nome;
    float salario;

    getline(cin, matricula);
    getline(cin, nome);
    cin >> salario;
    getchar();

    f.setMatricula(matricula);
    f.setNome(nome);
    f.setSalario(salario);

    cout << f.getMatricula() << " - " << 
    f.getNome() << " - R$ " <<
    f.getSalario() << endl;

    getline(cin, matricula);
    getline(cin, nome);
    cin >> salario;
    getchar();

    c.setMatricula(matricula);
    c.setNome(nome);
    c.setSalario(salario);

    cout << c.getMatricula() << " - " << 
    c.getNome() << " - R$ " <<
    c.getSalario() << endl;
}