#include "ContaEspecial.hpp"  
#include <iostream>
	
ContaEspecial::ContaEspecial(std::string nomeCliente, int numeroConta, double salarioMensal) : Conta(nomeCliente, numeroConta, salarioMensal) {
    
}

void ContaEspecial::defineLimite() {
    this->limite = salarioMensal * 3;
}
	