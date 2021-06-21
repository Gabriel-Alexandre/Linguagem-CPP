#include <iostream>
#include <string>
#include "Conta.hpp"
#include "ContaCorrente.hpp"
#include "ContaEspecial.hpp"
#include "Poupanca.hpp"

using namespace std;

int main () {
    Poupanca *poupanca;
    ContaCorrente *conta;
    ContaEspecial *contaEspecial;
    string nomeCliente;
    int numeroConta;
    double depositar, sacar, salario;

    for(int i = 0; i < 3; i++) {
        getline(cin, nomeCliente);
        cin >> numeroConta;
        cin >> salario;
        cin >> depositar;
        cin >> sacar;

        switch (i)
        {
        case 0:
            conta = new ContaCorrente(nomeCliente, numeroConta, salario);

            conta->depositar(depositar);
            conta->sacar(sacar);

            cout << conta->getNomeCliente() << ", cc: " <<
            conta->getNumeroConta() << ", salário " <<
            conta->getSalario() << ", saldo total disponível: R$ " << conta->getSaldo() << endl;

            break;
        case 1:
            contaEspecial = new ContaEspecial(nomeCliente, numeroConta, salario);

            contaEspecial->depositar(depositar);
            contaEspecial->sacar(sacar);

            cout << contaEspecial->getNomeCliente() << ", cc: " <<
            contaEspecial->getNumeroConta() << ", salário " <<
            contaEspecial->getSalario() << ", saldo total disponível: R$ " << contaEspecial->getSaldo() << endl;

            break;

        case 2:
            poupanca = new Poupanca(nomeCliente, numeroConta);

            poupanca->depositar(depositar);
            poupanca->sacar(sacar);

            cout << poupanca->getNomeCliente() << ", cc: " <<
            poupanca->getNumeroConta() << ", saldo total disponível: R$ " << poupanca->getSaldo() << endl;

            break;
        
        default:
            break;
        }

        delete conta;
        delete contaEspecial;
    }
}

/*
>> Obs: O que falta

-> Implementar lógica das classes
-> Implementar lógica do saldo total

>> Dica:

-> Implementar e verificar classe por classe

*/