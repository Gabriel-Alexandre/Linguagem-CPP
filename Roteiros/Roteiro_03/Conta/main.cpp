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

        switch (i)
        {
        case 0:

            cin >> salario;
            cin >> depositar;
            cin >> sacar;
            getchar();

            conta = new ContaCorrente(nomeCliente, numeroConta, salario);

            conta->depositar(depositar);
            conta->sacar(sacar);
            conta->definirLimite();

            if(sacar < (depositar + conta->definirLimite())) {
                cout << conta->getNomeCliente() << ", cc: " <<
                conta->getNumeroConta() << ", salário " <<
                conta->getSalario() << ", saldo total disponível: R$ " <<
                conta->getSaldo() + conta->definirLimite() << endl;
            }else{
                cout << conta->getNomeCliente() << ", cc: " <<
                conta->getNumeroConta() << ", salário " <<
                conta->getSalario() << ",\n" << "saldo insuficiente\n" <<
                "saldo total disponível: R$ " << depositar + conta->definirLimite() << endl;
            }

            break;
        case 1:

            cin >> salario;
            cin >> depositar;
            cin >> sacar;
            getchar();

            contaEspecial = new ContaEspecial(nomeCliente, numeroConta, salario);

            contaEspecial->depositar(depositar);
            contaEspecial->sacar(sacar);
            contaEspecial->definirLimite();

            if(sacar < (depositar + conta->definirLimite())) {
                cout << contaEspecial->getNomeCliente() << ", cc: " <<
                contaEspecial->getNumeroConta() << ", salário " <<
                contaEspecial->getSalario() << ", saldo total disponível: R$ " <<
                contaEspecial->getSaldo() << endl;
            }else{
                cout << contaEspecial->getNomeCliente() << ", cc: " <<
                contaEspecial->getNumeroConta() << ", salário " <<
                contaEspecial->getSalario() << ",\n" << "saldo insuficiente\n" <<
                "saldo total disponível: R$ " << depositar + contaEspecial->definirLimite() << endl;
            }

            break;

        case 2:

            cin >> depositar;
            cin >> sacar;
            getchar();

            poupanca = new Poupanca(nomeCliente, numeroConta);

            poupanca->depositar(depositar);
            poupanca->sacar(sacar);

            cout << poupanca->getNomeCliente() << ", cc: " <<
            poupanca->getNumeroConta() << ", saldo total disponível: R$ " << poupanca->reder() << endl;

            break;
        
        default:
            break;
        }
    }
}

/*
>> Obs: O que falta

-> Implementar lógica das classes
-> Implementar lógica do saldo total

>> Dica:

-> Implementar e verificar classe por classe

*/