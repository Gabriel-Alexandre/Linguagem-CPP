#include "ContaEspecial.hpp"  
	
ContaEspecial::ContaEspecial(std::string nomeCliente, int numeroConta, double salario) : ContaCorrente(nomeCliente, numeroConta, salario)
{
	
}

double ContaEspecial::definirLimite() {
    return 4 * salario; 
}

std::string ContaEspecial::getSaldo() {

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
