#include "ContaEspecial.hpp"  
	
ContaEspecial::ContaEspecial(std::string nomeCliente, int numeroConta, double salario) : ContaCorrente(nomeCliente, numeroConta, salario)
{
	
}

double ContaEspecial::definirLimite() {
    return 4 * salario; 
}