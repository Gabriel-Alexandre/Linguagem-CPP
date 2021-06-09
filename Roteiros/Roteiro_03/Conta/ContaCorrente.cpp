#include "ContaCorrente.hpp"  
	
ContaCorrente::ContaCorrente(std::string nomeCliente, int numeroConta, double salario) : Conta(nomeCliente, numeroConta) {
    this->salario = salario;
}
	
double ContaCorrente::getSalario() {
    return salario;
}

double ContaCorrente::definirLimite() {
    return 0;/*Falta implementar*/
}