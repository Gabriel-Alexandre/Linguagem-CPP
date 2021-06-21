#include "Conta.hpp"  
	
Conta::Conta(std::string nomeCliente, int numeroConta) {
	this->nomeCliente = nomeCliente;
    this->numeroConta = numeroConta;
    this->saldo = 0;
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
    if(saldo > 0){
        saldo = saldo - valor;
    }
}

void Conta::depositar(double valor) {
    saldo = saldo + valor;
}
	
