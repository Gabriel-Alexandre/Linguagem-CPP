#include "Conta.hpp"  
	
Conta::Conta(std::string nomeCliente, int numeroConta, double salarioMensal) {
    this->nomeCliente = nomeCliente;
    this->numeroConta = numeroConta;
    this-> salarioMensal = salarioMensal;

    this->saldo = 0;
}

void Conta::defineLimite() {
    this->limite = salarioMensal * 2;
}

void Conta::sacar(double valor) {
    this->saldo = saldo - valor;
}

void Conta::depositar(double valor) {
    this->saldo = saldo + valor;
}

double Conta::saldoTotalDisponivel() {
    return saldo + limite;
}

std::string Conta::getNomeCliente() {
    return nomeCliente;
}

int Conta::getNumeroConta() {
    return numeroConta;
}

double Conta::getSalarioMensal() {
    return salarioMensal;
}
