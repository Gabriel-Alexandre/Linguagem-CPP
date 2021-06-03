#include <iostream>
#include <string>
#include "Iconta.hpp"
#include "Conta.hpp"
#include "ContaEspecial.hpp"

using namespace std;

int main (void) {
    Conta *conta;
    ContaEspecial *contaEspecial;
    string nomeCliente;
    int contaCliente;
    double salario, depositar, sacar;

    //Teste Conta
    getline(cin, nomeCliente);
    cin >> contaCliente;
    cin >> salario;
    cin >> depositar;
    cin >> sacar;
    getchar();
    
    conta = new Conta(nomeCliente, contaCliente, salario);
    conta->depositar(depositar);
    conta->sacar(sacar);
    conta->defineLimite();

    cout << conta->getNomeCliente() << ", cc: " <<
    conta->getNumeroConta() << ", salário " << 
    conta->getSalarioMensal() << ", saldo total disponível: R$ " <<
    conta->saldoTotalDisponivel() << endl;

    //Teste ContaEspecial
    getline(cin, nomeCliente);
    cin >> contaCliente;
    cin >> salario;
    cin >> depositar;
    cin >> sacar;
    getchar();
    
    contaEspecial = new ContaEspecial(nomeCliente, contaCliente, salario);
    contaEspecial->depositar(depositar);
    contaEspecial->sacar(sacar);
    contaEspecial->defineLimite();

    cout << contaEspecial->getNomeCliente() << ", cc: " <<
    contaEspecial->getNumeroConta() << ", salário " << 
    contaEspecial->getSalarioMensal() << ", saldo total disponível: R$ " <<
    contaEspecial->saldoTotalDisponivel() << endl;

}