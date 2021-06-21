#include "Poupanca.hpp"  
	
Poupanca::Poupanca(std::string nomeCliente, int numeroConta) : Conta(nomeCliente, numeroConta)
{
	this->variacao = 51;
}

double Poupanca::reder() {
	
	if (variacao == 51)
		taxaRendimento = 0.006;
	else if (variacao == 1)
		taxaRendimento = 0.011;

	return saldo + (saldo * taxaRendimento);
}

std::string Poupanca::getSaldo() {

    if (saldo > 0) {
        std::string soldo;

        soldo = ',' + '\n' + 'saldo insuficiente' + '\n' +
        'saldo total disponível: ' + saldo + '\n';

        return soldo;
    }else{

        std::string soldo;
        
        soldo = ', saldo total disponível: R$ ' + saldo + '\n';

        return soldo;
    }
}
