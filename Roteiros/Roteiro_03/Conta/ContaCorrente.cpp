#include "ContaCorrente.hpp"  
	
ContaCorrente::ContaCorrente(std::string nomeCliente, int numeroConta, double salario) : Conta(nomeCliente, numeroConta) {
    this->salario = salario;
}
	
double ContaCorrente::getSalario() {
    return salario;
}

double ContaCorrente::definirLimite() {
    return 2 * salario;
}

std::string ContaCorrente::getSaldo() {

    double soma = saldo + limite;
    if (soma > 0) {
        std::string saldo;

        saldo = ',' + '\n' + 'saldo insuficiente' + '\n' +
        'saldo total disponível: ' + soma + '\n';

        return saldo;
    }else{

        std::string saldo;
        
        saldo = ', saldo total disponível: R$ ' + soma + '\n';

        return saldo;
    }
}