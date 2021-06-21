#include "Conta.hpp"  
	
Conta::Conta(std::string nomeCliente, int numeroConta) {
	this->nomeCliente = nomeCliente;
    this->numeroConta = numeroConta;
}

std::string Conta::getNomeCliente() {
    return nomeCliente;
}

int Conta::getNumeroConta() {
    return numeroConta;
}

double Conta::getSaldo() {
    return saldo;
}

void Conta::sacar(double valor) {
    saldo = saldo - valor;
}

void Conta::depositar(double valor) {
    saldo = saldo + valor;
}
	
